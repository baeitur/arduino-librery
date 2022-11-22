

/*
 *
 * BigAngka
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : BigAngka.h
 * Date                : 18.05.2018
 * Font size in bytes  : 1073
 * Font width          : 6
 * Font height         : -16
 * Font first char     : 48
 * Font last char      : 59
 * Font used chars     : 11
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

#ifndef BIGANGKA_H
#define BIGANGKA_H

#define BIGANGKA_WIDTH 6
#define BIGANGKA_HEIGHT -16

const static uint8_t BigAngka[] PROGMEM = {
    0x04, 0x31, // size
    0x06, // width
    0x10, // height
    0x30, // first char
    0x0B, // char count
    
    // char widths
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x06, 
    
    // font data
    0xFC, 0xFE, 0x03, 0x03, 0xFE, 0xFC, 0x1F, 0x3F, 0x60, 0x60, 0x3F, 0x1F, // 48
    0x04, 0x06, 0xFF, 0xFF, 0x00, 0x00, 0x60, 0x60, 0x7F, 0x7F, 0x60, 0x60, // 49
    0x0C, 0x0E, 0x03, 0x83, 0xFE, 0xFC, 0x7C, 0x7E, 0x67, 0x63, 0x61, 0x60, // 50
    0x0C, 0x8E, 0xC3, 0xC3, 0x7E, 0x3C, 0x18, 0x38, 0x61, 0x61, 0x3F, 0x1E, // 51
    0xC0, 0xF0, 0x3C, 0xFF, 0xFF, 0x00, 0x07, 0x07, 0x66, 0x7F, 0x7F, 0x66, // 52
    0x7F, 0x7F, 0x33, 0x33, 0xF3, 0xE3, 0x18, 0x38, 0x60, 0x60, 0x3F, 0x1F, // 53
    0xFC, 0xFE, 0xC3, 0xC3, 0xCE, 0x8C, 0x1F, 0x3F, 0x60, 0x60, 0x3F, 0x1F, // 54
    0x07, 0x03, 0x03, 0xE3, 0xFF, 0x3F, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, // 55
    0x3C, 0xFE, 0xC3, 0xC3, 0xFE, 0x3C, 0x1F, 0x3F, 0x60, 0x60, 0x3F, 0x1F, // 56
    0xFC, 0xFE, 0x83, 0x83, 0xFE, 0xFC, 0x18, 0x39, 0x61, 0x61, 0x3F, 0x1F, // 57
    0x00, 0x00, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x00, 0x00 // 58
    
};

#endif
