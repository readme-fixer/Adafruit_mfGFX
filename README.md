Adafruit_mfGFX_Library
======================

Multifont version of Adafruit_GFX library.

This library supports any compatible Adafruit_GFX display driver. The free TheDotFactory Windows program is recommended for created data compatible with the Adafruit_mfGFX library.

Please see the README.pdf files for instructions on creating and adding new fonts.  The base library comes with 4 fonts and a "test" font so new candidate font data can easily be added and tested before being permanently added to the library.

BE AWARE that though font data does not take up RAM, they do however take up flash space so having too many fonts may prove problematic.

ADDED GLCDFONT from original GFX library and made it default font so code based on older font will work.
