

/*
 *
 * Bigest
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Bigest.h
 * Date                : 06.06.2018
 * Font size in bytes  : 1777
 * Font width          : 10
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

#ifndef BIGEST_H
#define BIGEST_H

#define BIGEST_WIDTH 10
#define BIGEST_HEIGHT -16

const static uint8_t Bigest[] PROGMEM = {
    0x06, 0xF1, // size
    0x0A, // width
    0x10, // height
    0x30, // first char
    0x0B, // char count
    
    // char widths
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
    0x0A, 
    
    // font data
    0xFC, 0xFE, 0xFF, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFE, 0xFC, 0x3F, 0x7F, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0x7F, 0x3F, // 48
    0x00, 0x00, 0x0C, 0x0E, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0x00, // 49
    0x0C, 0x0E, 0x0F, 0x03, 0x03, 0x83, 0xC3, 0xFF, 0xFE, 0x7C, 0xF0, 0xF8, 0xFC, 0xDE, 0xCF, 0xC7, 0xC3, 0xC1, 0xC0, 0xC0, // 50
    0x0C, 0x8E, 0x8F, 0x83, 0x83, 0xC3, 0xE3, 0xFF, 0x7E, 0x3C, 0x30, 0x71, 0xF1, 0xC1, 0xC1, 0xC3, 0xC7, 0xFF, 0x7E, 0x3C, // 51
    0xE0, 0xF0, 0xF8, 0x3C, 0x1E, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0xFF, 0xFF, 0xFF, 0x0C, 0x0C, // 52
    0xFF, 0xFF, 0xFF, 0x63, 0x63, 0x63, 0xE3, 0xE3, 0xC3, 0x83, 0x30, 0x70, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0x7F, 0x3F, // 53
    0xFC, 0xFE, 0xFF, 0x83, 0x83, 0x83, 0x83, 0x8F, 0x8E, 0x0C, 0x3F, 0x7F, 0xFF, 0xC1, 0xC1, 0xC1, 0xC1, 0xFF, 0x7F, 0x3F, // 54
    0x03, 0x03, 0x03, 0x03, 0x03, 0x83, 0xC3, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, // 55
    0x7C, 0xFE, 0xFF, 0x83, 0x83, 0x83, 0x83, 0xFF, 0xFE, 0x7C, 0x3E, 0x7F, 0xFF, 0xC1, 0xC1, 0xC1, 0xC1, 0xFF, 0x7F, 0x3E, // 56
    0xFC, 0xFE, 0xFF, 0x83, 0x83, 0x83, 0x83, 0xFF, 0xFE, 0xFC, 0x30, 0x71, 0xF1, 0xC1, 0xC1, 0xC1, 0xC1, 0xFF, 0x7F, 0x3F, // 57
    0x00, 0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00, 0x00 // 58
    
};

#endif
