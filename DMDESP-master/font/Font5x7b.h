

/*
 *
 * TimesNewRoman10
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : TimesNewRoman10.h
 * Date                : 11.03.2018
 * Font size in bytes  : 8997
 * Font width          : 10
 * Font height         : 15
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef FONT5X7B_H
#define FONT5X7B_H

#define FONT5X7B_WIDTH 5
#define FONT5X7B_HEIGHT 7

const static uint8_t Font5x7b[] PROGMEM = {
    0x23, 0x25, // size
    0x05, // width
    0x07, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
0x02,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05, //	!	"	#	$	%	&	'	(	)
0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x04,0x05,0x05, //*	+   ,  -	.	/	0	1	2	3
0x06,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05, //4	5	6	7	8	9	:	;	<	=
0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x06, //>	?	@	A	B	C	D	E	F	G
0x05,0x04,0x06,0x06,0x05,0x07,0x06,0x05,0x05,0x05, //H	I	J	K	L	M	N	O	P	Q
0x05,0x05,0x06,0x05,0x05,0x07,0x05,0x06,0x05,0x05, //R	S	T	U	V	W	X	Y	Z	[
0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05, //\	]	^	_	`	a	b	c	d	e
0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x08,0x05,0x05, //f	g	h	i	j	k	l	m	n	o
0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x07,0x05,0x05, //p	q	r	s	t	u	v	w	x	y
0x05,0x05,0x05,0x05,0x05,0x05,					   //		z	{	|	}	~					
							
 
    
    // font data
        0x00, 0x00,             // Code for char  
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char !
        0x00, 0x03, 0x00, 0x03, 0x00,            // Code for char "
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char #
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char $
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char %
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char &
        0x00, 0x05, 0x03, 0x00, 0x00,			 // Code for char '
        0x1C, 0x3E, 0x41, 0x00, 0x00,            // Code for char (
        0x00, 0x00, 0x41, 0x3E, 0x0C,            // Code for char )
        0x00, 0x05, 0x02, 0x05, 0x00,            // Code for char *
        0x08, 0x08, 0x3E, 0x08, 0x08,            // Code for char +
        0x00, 0x50, 0x30, 0x00, 0x00,            // Code for char ,
        0x08, 0x08, 0x08, 0x08, 0x08,            // Code for char -
        0x00, 0x60, 0x60, 0x00, 0x00,            // Code for char .
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char /
        0x3E, 0x7F, 0x41, 0x7F, 0x3E,            // Code for char 0
        0x41, 0x7F, 0x7F, 0x40,             // Code for char 1
        0x61, 0x71, 0x59, 0x4F, 0x46,            // Code for char 2
        0x41, 0x49, 0x49, 0x7F, 0x36,            // Code for char 3
        0x1C, 0x1E, 0x13, 0x7F, 0x7F, 0x10,            // Code for char 4
        0x4F, 0x4F, 0x45, 0x7D, 0x39,            // Code for char 5
        0x3E, 0x7F, 0x49, 0x7B, 0x32,            // Code for char 6
        0x01, 0x71, 0x79, 0x0D, 0x07,            // Code for char 7
        0x36, 0x7F, 0x49, 0x7F, 0x36,            // Code for char 8
        0x26, 0x6F, 0x49, 0x7F, 0x3E,            // Code for char 9
        0x00, 0x36, 0x36, 0x00, 0x00,            // Code for char :
        0x00, 0x56, 0x36, 0x00, 0x00,            // Code for char ;
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char <
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char =
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char >
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char ?
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char @
        0x7E, 0x7F, 0x09, 0x7F, 0x7E,            // Code for char A
        0x7F, 0x7F, 0x49, 0x7F, 0x36,            // Code for char B
        0x3E, 0x7F, 0x41, 0x63, 0x22,            // Code for char C
        0x7F, 0x7F, 0x41, 0x7F, 0x3E,            // Code for char D
        0x7F, 0x7F, 0x49, 0x49, 0x41,            // Code for char E
        0x7F, 0x7F, 0x09, 0x09, 0x01,            // Code for char F
        0x3E, 0x7F, 0x41, 0x49, 0x7B, 0x3A,            // Code for char G
        0x7F, 0x7F, 0x08, 0x7F, 0x7F,            // Code for char H
        0x41, 0x7F, 0x7F, 0x41,             // Code for char I
        0x20, 0x60, 0x41, 0x7F, 0x3F, 0x01,            // Code for char J
        0x7F, 0x7F, 0x1C, 0x36, 0x63, 0x61,            // Code for char K
        0x7F, 0x7F, 0x40, 0x40, 0x40,            // Code for char L
        0x7F, 0x7F, 0x06, 0x1C, 0x06, 0x7F, 0x7F,  // Code for char M
        0x7F, 0x7F, 0x06, 0x0C, 0x7F, 0x7F,            // Code for char N
        0x3E, 0x7F, 0x41, 0x7F, 0x3E,            // Code for char O
        0x7F, 0x7F, 0x09, 0x0F, 0x06,            // Code for char P
        0x3E, 0x7F, 0x51, 0x3F, 0x5E,            // Code for char Q
        0x7F, 0x7F, 0x09, 0x7F, 0x76,            // Code for char R
        0x46, 0x4F, 0x49, 0x79, 0x31,            // Code for char S
        0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01,            // Code for char T
        0x3F, 0x7F, 0x40, 0x7F, 0x3F,            // Code for char U
        0x1F, 0x3F, 0x40, 0x3F, 0x1F,            // Code for char V
        0x1F, 0x3F, 0x60, 0x30, 0x60, 0x3F, 0x1F,            // Code for char W
        0x63, 0x77, 0x08, 0x77, 0x63,            // Code for char X
        0x07, 0x0F, 0x78, 0x78, 0x0F, 0x07,            // Code for char Y
        0x61, 0x71, 0x59, 0x4F, 0x47,            // Code for char Z
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char [
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char BackSlash
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char ]
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char ^
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char _
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char `
        0x20, 0x74, 0x54, 0x7C, 0x78,            // Code for char a
        0x7F, 0x7F, 0x44, 0x7C, 0x38,            // Code for char b
        0x38, 0x7C, 0x44, 0x6C, 0x28,            // Code for char c
        0x38, 0x7C, 0x44, 0x7F, 0x7F,            // Code for char d
        0x38, 0x7C, 0x54, 0x5C, 0x18,            // Code for char e
        0x04, 0x7E, 0x7F, 0x05, 0x05,            // Code for char f
        0x48, 0xD4, 0x94, 0xFC, 0x7C,            // Code for char g
        0x7F, 0x7F, 0x04, 0x7C, 0x78,            // Code for char h
        0x44, 0x7D, 0x7D, 0x40, 0x00,            // Code for char i
        0x40, 0xC0, 0x84, 0xFD, 0x7D,            // Code for char j
        0x7F, 0x7F, 0x38, 0x6C, 0x44,            // Code for char k
        0x41, 0x7F, 0x7F, 0x40, 0x00,            // Code for char l
        0x7C, 0x7C, 0x04, 0x7C, 0x78, 0x04, 0x7C, 0x78,            // Code for char m
        0x7C, 0x7C, 0x04, 0x7C, 0x78,            // Code for char n
        0x38, 0x7C, 0x44, 0x7C, 0x38,            // Code for char o
        0x7C, 0x7C, 0x14, 0x1C, 0x08,            // Code for char p
        0x08, 0x1C, 0x14, 0x7C, 0x7C,            // Code for char q
        0x7C, 0x7C, 0x04, 0x0C, 0x08,            // Code for char r
        0x48, 0x5C, 0x54, 0x74, 0x24,            // Code for char s
        0x04, 0x3F, 0x7F, 0x44, 0x20,            // Code for char t
        0x3C, 0x7C, 0x40, 0x7C, 0x7C,            // Code for char u
        0x1C, 0x3C, 0x60, 0x3C, 0x1C,            // Code for char v
        0x3C, 0x7C, 0x60, 0x30, 0x60, 0x7C, 0x3C,           // Code for char w
        0x44, 0x6C, 0x10, 0x6C, 0x44,            // Code for char x
        0x4C, 0xDC, 0x90, 0xFC, 0x7C,            // Code for char y
        0x64, 0x74, 0x54, 0x5C, 0x4C,            // Code for char z
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char {
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char |
        0x00, 0x00, 0x00, 0x00, 0x00,            // Code for char }
        0x00, 0x00, 0x00, 0x00, 0x00             // Code for char ~
    
};

#endif