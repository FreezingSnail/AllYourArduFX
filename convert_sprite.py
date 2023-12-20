from PIL import Image
import os
import argparse
import io


def get_shade(rgba, shades, shade):
    w = (254 + shades) // shades
    b = (shade + 1) * w
    return 1 if rgba[0] >= b else 0


def get_mask(rgba):
    return 1 if rgba[3] >= 128 else 0


def convert(fname, shades, sw=None, sh=None, num=None):

    if not (shades >= 2 and shades <= 4):
        print('shades argument must be 2, 3, or 4')
        return None

    im = Image.open(fname).convert('RGBA')
    pixels = list(im.getdata())

    masked = False
    for i in pixels:
        if i[3] < 255:
            masked = True
            break

    w = im.width
    h = im.height
    if sw is None:
        sw = w
    if sh is None:
        sh = h
    nw = w // sw
    nh = h // sh
    if num is None:
        num = nw * nh
    sp = (sh + 7) // 8

    if nw * nh <= 0:
        print('%s: Invalid sprite dimensions' % fname)
        return None

    bytes = bytearray([sw, sh])

    for n in range(num):
        bx = (n % nw) * sw
        by = (n // nw) * sh
        for shade in range(shades - 1):
            for p in range(sp):
                for ix in range(sw):
                    x = bx + ix
                    byte = 0
                    mask = 0
                    for iy in range(8):
                        y = p * 8 + iy
                        if y >= sh:
                            break
                        y += by
                        i = y * w + x
                        rgba = pixels[i]
                        byte |= (get_shade(rgba, shades, shade) << iy)
                        mask |= (get_mask(rgba) << iy)
                    bytes += bytearray([byte])
                    if masked:
                        bytes += bytearray([mask])

    return bytes


def convert_header(fname, sym, shades=2, sw=None, sh=None, num=None):
    bytes = convert(fname, shades, sw, sh, num)
    if bytes is None:
        return
    f = io.StringIO()
    f.write('uint8_t %s[] =\n{\n' % sym)
    for n in range(len(bytes)):
        if n % 16 == 0:
            f.write('    ')
        f.write('%3d,' % bytes[n])
        f.write(' ' if n % 16 != 15 else '\n')
    if len(bytes) % 16 != 0:
        f.write('\n')
    f.write('};\n')
    return f.getvalue()


def parse_filename(filename):
    name, rest = filename.split('_')
    dimensions, _ = rest.split('.')
    width, height = dimensions.split('x')
    return name, int(width), int(height)


def main():
    parser = argparse.ArgumentParser(
        description="This script converts images to a specific format.\n Place all images of the format <name>_<width>x<height>.png in a directory and run this script with the path to the dir as an argument.")
    parser.add_argument(
        "dirpath", help="the path of the directory to convert files from")
    parser.add_argument("-s", "--shades", type=int, help="an optional number")
    parser.add_argument("-o", "--out", help="path to output file")
    args = parser.parse_args()

    if not args.dirpath:
        parser.print_help()
        return

    if not args.out:
        args.out = "."
    if not args.shades:
        args.shades = 2

    all_buffers = ""

    for filename in os.listdir(args.dirpath):
        filepath = os.path.join(args.dirpath, filename)
        if os.path.isfile(filepath):
            file_details = parse_filename(filename)
            out = convert_header(filepath,  file_details[0].upper() + "_IMG", args.shades, file_details[1],
                                 file_details[2])

            all_buffers += out

    with open(args.out+"Sprites.txt", 'w') as f:
        f.write(all_buffers)


if __name__ == "__main__":
    main()
