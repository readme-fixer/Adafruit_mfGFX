#ifndef _fonts_h
#define _fonts_h

#include <avr/io.h>
#include <avr/pgmspace.h>

// Font selection descriptors - Add an entry for each new font and number sequentially
#define dejaVuSansMono_24	0
#define dejaVuSansMono_48	1
#define dejaVuSansMono_96	2

#define FONT_START 0
#define FONT_END   1

struct FontDescriptor
{
	uint8_t	width;		// width in bits
	uint8_t	height; 	// char height in bits
	uint16_t offset;	// offset of char into char array
};

// Font references - add pair of references for each new font
extern const uint8_t dejaVuSansMono_24ptBitmaps[];
extern const FontDescriptor dejaVuSansMono_24ptDescriptors[];

extern const uint8_t dejaVuSansMono_48ptBitmaps[];
extern const FontDescriptor dejaVuSansMono_48ptDescriptors[];

extern const uint8_t dejaVuSansMono_96ptBitmaps[];
extern const FontDescriptor dejaVuSansMono_96ptDescriptors[];

#endif
