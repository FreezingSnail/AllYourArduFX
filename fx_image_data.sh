#!/bin/bash

fx_image() {
    files=($(ls src/fxdata/sprites))

    for f in "${files[@]}"; do
        echo "image_t ${f%%_*} = \""sprites/$f"\""
    done
}

fx_image >src/fxdata/fx_images.txt
