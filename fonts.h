#ifndef _fonts_h
#define _fonts_h

#include <avr/io.h>
#include <avr/pgmspace.h>

// Font selection descriptors - Add an entry for each new font and number sequentially
#define ARIAL_8		0

#define FONT_START 0
#define FONT_END 1

struct FontDescriptor
{
	uint8_t	width;		// width in bits
	uint8_t	height; 	// char height in bits
	uint16_t offset;	// offset of char into char array
};

// Font references - add pair of references for each new font
extern const uint8_t arial_8ptBitmaps[];
extern const FontDescriptor arial_8ptDescriptors[];


#endif
