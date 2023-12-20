build:
	arduino-cli compile --fqbn "arduboy-homemade:avr:arduboy" --optimize-for-debug  --output-dir .

release:
	arduino-cli compile --fqbn "arduboy-homemade:avr:arduboy" --build-properties build.project_name=AllYourArduFX --output-dir .

gen:
	python3 convert_sprite.py src/fxdata/sprites/ -s 4 -o src/fxdata/
	python3 Arduboy-Python-Utilities/fxdata-build.py src/fxdata/fxdata.txt