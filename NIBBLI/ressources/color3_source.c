/********************************************/
/*                                          */
/*   GRAPHICS TABLES  -  WIN ICVGM v3.00    */
/*                                          */
/*        WARNING : RLE COMPRESSION         */
/*                                          */
/********************************************/

#include <coleco.h>

byte NAMERLE[] = {
  0xA3, 0x20, 0x00, 0xF3, 0x95, 0xF4, 0x00, 0xF2, 0x87, 0x20, 0x00, 0xF9, 0x95, 0x20, 0x00,
  0xF9, 0x87, 0x20, 0x02, 0xF9, 0x20, 0xF3, 0x82, 0xF4, 0x0A, 0xF2, 0x20, 0xF8, 0x20, 0xE8, 0xF4,
  0xE9, 0x20, 0xF8, 0x20, 0xF3, 0x83, 0xF4, 0x02, 0xF2, 0x20, 0xF9, 0x87, 0x20, 0x02, 0xF9, 0x20,
  0xF9, 0x82, 0x20, 0x02, 0xF9, 0x65, 0xF9, 0x84, 0x20, 0x02, 0xF9, 0x65, 0xF9, 0x83, 0x20, 0x02,
  0xF9, 0x20, 0xF9, 0x87, 0x20, 0x02, 0xF9, 0x20, 0xF9, 0x82, 0x20, 0x0A, 0xF9, 0x20, 0xF9, 0x20,
  0xF8, 0x20, 0xF8, 0x20, 0xF9, 0x20, 0xF9, 0x83, 0x20, 0x02, 0xF9, 0x20, 0xF9, 0x87, 0x20, 0x02,
  0xF9, 0x20, 0xF0, 0x82, 0xF4, 0x0A, 0xF1, 0x20, 0xF9, 0x65, 0xF9, 0x20, 0xF9, 0x65, 0xF9, 0x20,
  0xF0, 0x83, 0xF4, 0x02, 0xF1, 0x20, 0xF9, 0x87, 0x20, 0x00, 0xF9, 0x86, 0x20, 0x06, 0xF9, 0x20,
  0xF9, 0x20, 0xF9, 0x20, 0xF9, 0x87, 0x20, 0x00, 0xF9, 0x87, 0x20, 0x02, 0xF9, 0x20, 0xF3, 0x84,
  0xF4, 0x06, 0xF1, 0x20, 0xFA, 0x20, 0xFA, 0x20, 0xF0, 0x85, 0xF4, 0x02, 0xF2, 0x20, 0xF9, 0x87,
  0x20, 0x02, 0xF9, 0x20, 0xF9, 0x82, 0x20, 0x00, 0x65, 0x88, 0x20, 0x00, 0x65, 0x83, 0x20, 0x02,
  0xF9, 0x20, 0xF9, 0x87, 0x20, 0x04, 0xF9, 0x20, 0xFA, 0x20, 0xE8, 0x84, 0xF4, 0x02, 0xE9, 0x65,
  0xE8, 0x85, 0xF4, 0x04, 0xE9, 0x20, 0xFA, 0x20, 0xF9, 0x87, 0x20, 0x00, 0xF9, 0x95, 0x20, 0x00,
  0xF9, 0x87, 0x20, 0x02, 0xF9, 0x20, 0xE8, 0x84, 0xF4, 0x07, 0xE9, 0x20, 0xF3, 0xF4, 0xF4, 0xF2,
  0x20, 0xE8, 0x84, 0xF4, 0x02, 0xE9, 0x20, 0xF9, 0x87, 0x20, 0x00, 0xF9, 0x82, 0x20, 0x00, 0x65,
  0x84, 0x20, 0x03, 0xF9, 0x20, 0x20, 0xF9, 0x84, 0x20, 0x00, 0x65, 0x82, 0x20, 0x00, 0xF9, 0x87,
  0x20, 0x02, 0xF9, 0x20, 0xF3, 0x82, 0xF4, 0x0B, 0xF2, 0x20, 0xF8, 0x20, 0xF9, 0x20, 0x20, 0xF9,
  0x20, 0xF8, 0x20, 0xF3, 0x82, 0xF4, 0x02, 0xF2, 0x20, 0xF9, 0x87, 0x20, 0x02, 0xF9, 0x20, 0xF9,
  0x82, 0x20, 0x0B, 0xF9, 0x20, 0xF9, 0x20, 0xF0, 0xF4, 0xF4, 0xF1, 0x20, 0xF9, 0x20, 0xF9, 0x82,
  0x20, 0x02, 0xF9, 0x20, 0xF9, 0x87, 0x20, 0x02, 0xF9, 0x20, 0xF9, 0x82, 0x20, 0x02, 0xF9, 0x20,
  0xF9, 0x85, 0x20, 0x02, 0xF9, 0x20, 0xF9, 0x82, 0x20, 0x02, 0xF9, 0x20, 0xF9, 0x87, 0x20, 0x02,
  0xF9, 0x20, 0xF9, 0x82, 0x20, 0x0B, 0xF9, 0x20, 0xF9, 0x20, 0xF3, 0xF4, 0xF4, 0xF2, 0x20, 0xF9,
  0x20, 0xF9, 0x82, 0x20, 0x02, 0xF9, 0x20, 0xF9, 0x87, 0x20, 0x02, 0xF9, 0x20, 0xF0, 0x82, 0xF4,
  0x0B, 0xF1, 0x65, 0xF9, 0x20, 0xF9, 0x20, 0x20, 0xF9, 0x65, 0xF9, 0x65, 0xF0, 0x82, 0xF4, 0x02,
  0xF1, 0x20, 0xF9, 0x87, 0x20, 0x00, 0xF9, 0x86, 0x20, 0x07, 0xF9, 0x20, 0xF9, 0x20, 0x20, 0xF9,
  0x20, 0xF9, 0x86, 0x20, 0x00, 0xF9, 0x87, 0x20, 0x02, 0xF9, 0x20, 0xE8, 0x84, 0xF4, 0x07, 0xF1,
  0x20, 0xF0, 0xF4, 0xF4, 0xF1, 0x20, 0xF0, 0x84, 0xF4, 0x02, 0xE9, 0x20, 0xF9, 0x87, 0x20, 0x00,
  0xF9, 0x95, 0x20, 0x00, 0xF9, 0x87, 0x20, 0x00, 0xF0, 0x95, 0xF4, 0x00, 0xF1, 0xA3, 0x20, 0xFF};
 

byte PATTERNRLE[] = {
  0xFE, 0x00, 0xFE, 0x00, 0x89, 0x00, 0x82, 0x3C, 0x81, 0x18, 0x05, 0x00, 0x18, 0x00, 0x00,
  0x6C, 0x6C, 0x84, 0x00, 0x01, 0x36, 0x7F, 0x82, 0x36, 0x1D, 0x7F, 0x36, 0x00, 0x38, 0x38, 0x1C,
  0x1E, 0x17, 0x17, 0xFE, 0x14, 0xFF, 0x81, 0xB9, 0xA5, 0xB9, 0xA5, 0x81, 0xFF, 0x3C, 0x76, 0x76,
  0x3C, 0x3F, 0x76, 0x3B, 0x00, 0x0C, 0x18, 0x30, 0x84, 0x00, 0x01, 0x07, 0x0E, 0x82, 0x1C, 0x04,
  0x0E, 0x07, 0x00, 0x70, 0x38, 0x82, 0x1C, 0x01, 0x38, 0x70, 0x83, 0x00, 0x00, 0x7E, 0x84, 0x00,
  0x81, 0x1C, 0x02, 0x7F, 0x1C, 0x1C, 0x86, 0x00, 0x81, 0x30, 0x00, 0x60, 0x82, 0x00, 0x00, 0x7F,
  0x88, 0x00, 0x81, 0x30, 0x12, 0x00, 0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70, 0x60, 0x00, 0x3E, 0x73,
  0x7B, 0x7F, 0x77, 0x73, 0x3E, 0x00, 0x3C, 0x3C, 0x84, 0x1C, 0x29, 0x00, 0x3E, 0x73, 0x03, 0x0F,
  0x3C, 0x00, 0xFE, 0x00, 0x3C, 0x0E, 0x0E, 0x3C, 0x0E, 0x00, 0x7E, 0x00, 0x0E, 0x1E, 0x3E, 0x76,
  0x7F, 0x06, 0x06, 0x00, 0x3E, 0x70, 0x70, 0x3E, 0x03, 0x73, 0x3E, 0x00, 0x1C, 0x38, 0x38, 0x7E,
  0x73, 0x73, 0x3E, 0x00, 0x7F, 0x82, 0x03, 0x82, 0x06, 0x09, 0x00, 0x3E, 0x73, 0x73, 0x3E, 0x73,
  0x73, 0x3E, 0x00, 0x3E, 0x82, 0x73, 0x1A, 0x3F, 0x03, 0x03, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00,
  0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30, 0x0E, 0x1C, 0x38, 0x70, 0x38,
  0x1C, 0x0E, 0x82, 0x00, 0x02, 0x3C, 0x00, 0x3C, 0x82, 0x00, 0x0E, 0x70, 0x38, 0x1C, 0x0E, 0x1C,
  0x38, 0x70, 0x00, 0x78, 0x1C, 0x1C, 0x38, 0x38, 0x00, 0x38, 0x88, 0x00, 0x11, 0x0F, 0x3B, 0x73,
  0x7F, 0x63, 0x03, 0xFF, 0x00, 0x7C, 0x76, 0x76, 0x7E, 0x73, 0x03, 0xFE, 0x00, 0x0F, 0x38, 0x82,
  0x70, 0x04, 0x78, 0x3F, 0x00, 0x7E, 0x77, 0x82, 0x73, 0x1A, 0x03, 0xFE, 0x00, 0x7F, 0x70, 0x70,
  0x7E, 0x70, 0x00, 0xFF, 0x00, 0x3F, 0x70, 0x70, 0x7C, 0x70, 0x00, 0xF0, 0x00, 0x3F, 0x78, 0x70,
  0x70, 0x73, 0x07, 0xFB, 0x00, 0x82, 0x73, 0x04, 0x7F, 0x73, 0x03, 0xF3, 0x00, 0x86, 0x1C, 0x01,
  0x00, 0x1F, 0x84, 0x07, 0x09, 0xFE, 0x00, 0x73, 0x76, 0x7C, 0x78, 0x7C, 0x76, 0x73, 0x00, 0x84,
  0x70, 0x13, 0x00, 0x7F, 0x00, 0x61, 0x73, 0x7F, 0x73, 0x73, 0x03, 0xF3, 0x00, 0x73, 0x73, 0x7B,
  0x7F, 0x77, 0x03, 0xF3, 0x00, 0x3E, 0x84, 0x73, 0x0A, 0x3E, 0x00, 0x7E, 0x73, 0x73, 0x7E, 0x70,
  0x00, 0xF0, 0x00, 0x3E, 0x83, 0x73, 0x13, 0x76, 0x3E, 0x03, 0x7E, 0x73, 0x73, 0x76, 0x7C, 0x0C,
  0xF7, 0x00, 0x38, 0x38, 0x1C, 0x0E, 0x07, 0x07, 0xFE, 0x00, 0x7F, 0x85, 0x1C, 0x00, 0x00, 0x85,
  0x73, 0x01, 0x3F, 0x00, 0x83, 0x73, 0x03, 0x76, 0x7C, 0x30, 0x00, 0x83, 0x73, 0x0B, 0x7F, 0x07,
  0xE3, 0x00, 0x73, 0x77, 0x3C, 0x1C, 0x1C, 0x06, 0xF3, 0x00, 0x82, 0x76, 0x0B, 0x3E, 0x1E, 0x00,
  0xFE, 0x00, 0x7F, 0x07, 0x0E, 0x1C, 0x38, 0x00, 0xFF, 0xA8, 0x00, 0x1F, 0x81, 0x18, 0x3C, 0x7E,
  0x7E, 0x3C, 0x18, 0x81, 0x81, 0x18, 0x3C, 0x7E, 0x7E, 0x3C, 0x18, 0x81, 0x81, 0x18, 0x3C, 0x7E,
  0x7E, 0x3C, 0x18, 0x81, 0x81, 0x18, 0x3C, 0x7E, 0x7E, 0x3C, 0x18, 0x81, 0x87, 0x00, 0x07, 0x18,
  0x3C, 0x5A, 0xFF, 0xFF, 0x5A, 0x3C, 0x18, 0x8F, 0x00, 0x83, 0xFF, 0x07, 0x7E, 0x3C, 0x18, 0x00,
  0x00, 0x18, 0x3C, 0x7E, 0x83, 0xFF, 0x0F, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFC, 0xF8, 0xF0, 0x0F,
  0x1F, 0x3F, 0x7F, 0x7F, 0x3F, 0x1F, 0x0F, 0x9F, 0x00, 0x04, 0x18, 0xC3, 0x66, 0x66, 0xC3, 0x85,
  0x00, 0x14, 0xC3, 0x66, 0x66, 0xC3, 0x18, 0x48, 0x78, 0x30, 0x80, 0x80, 0x30, 0x78, 0x48, 0x01,
  0x3C, 0x18, 0x02, 0x02, 0x18, 0x3C, 0x01, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE,
  0x00, 0xFE, 0x00, 0xFE, 0x00, 0xA6, 0x00, 0x81, 0x7F, 0x83, 0xFC, 0x81, 0x7F, 0x81, 0xFE, 0x83,
  0x3F, 0x81, 0xFE, 0x06, 0x00, 0x3C, 0x7E, 0x66, 0x66, 0x7E, 0x3C, 0xA8, 0x00, 0x81, 0x43, 0x81,
  0x70, 0x81, 0x7C, 0x1B, 0x3F, 0x00, 0xC2, 0xC2, 0x0E, 0x0E, 0x3E, 0x3E, 0xFC, 0x00, 0x00, 0xFC,
  0x3E, 0x3E, 0x0E, 0x0E, 0xC2, 0xC2, 0x00, 0x3F, 0x7C, 0x7C, 0x70, 0x70, 0x43, 0x43, 0xFF, 0xFF,
  0x83, 0x3C, 0x81, 0xFF, 0x97, 0x00, 0x00, 0x3C, 0x84, 0x7E, 0x83, 0x42, 0x83, 0x7E, 0x83, 0x42,
  0x84, 0x7E, 0x00, 0x3C, 0xA7, 0x00, 0xFF};

byte COLORRLE[] = {
  0x87, 0x11, 0x87, 0xE1, 0xAF, 0x11, 0xFE, 0x41, 0xC0, 0x41, 0x87, 0x91, 0xFE, 0xF1, 0xFE,
  0xF1, 0xFE, 0xF1, 0xD2, 0xF1, 0xA7, 0x41, 0x00, 0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x81,
  0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x00, 0x18, 0x87, 0x41, 0x81, 0x21, 0x81, 0xD1, 0x81,
  0x61, 0x81, 0x31, 0x8F, 0x41, 0x9F, 0x81, 0x9F, 0x41, 0x00, 0xF8, 0x8D, 0xA8, 0x00, 0xF8, 0x82,
  0xA8, 0x81, 0xF8, 0x82, 0xA8, 0x07, 0x18, 0xA8, 0xA8, 0xF8, 0xF8, 0xA8, 0xA8, 0x18, 0x9F, 0x41,
  0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11, 0xA2, 0x11, 0x9F, 0x41, 0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11,
  0xC3, 0x11, 0x16, 0x41, 0x51, 0x71, 0x71, 0x51, 0x41, 0x11, 0x11, 0x41, 0x51, 0x71, 0x71, 0x51,
  0x41, 0x11, 0x41, 0x41, 0x51, 0x71, 0x71, 0x51, 0x41, 0x41, 0xA7, 0x11, 0x81, 0x41, 0x03, 0x51,
  0x71, 0x71, 0x51, 0x83, 0x41, 0x03, 0x51, 0x71, 0x71, 0x51, 0x83, 0x41, 0x03, 0x51, 0x71, 0x71,
  0x51, 0x83, 0x41, 0x0C, 0x51, 0x71, 0x71, 0x51, 0x41, 0x41, 0x11, 0x41, 0x51, 0x71, 0x71, 0x51,
  0x41, 0x98, 0x11, 0x81, 0x41, 0x03, 0x51, 0x71, 0x71, 0x51, 0x83, 0x41, 0x03, 0x51, 0x71, 0x71,
  0x51, 0x83, 0x41, 0x05, 0x51, 0x71, 0x71, 0x51, 0x41, 0x41, 0xA7, 0x11, 0xFF};

byte SPATTERNRLE[] = {
  0x86, 0x00, 0x81, 0x01, 0x86, 0x00, 0x05, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0x83, 0xFF,
  0x05, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x86, 0x00, 0x08, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F,
  0x7F, 0xFF, 0xFF, 0x86, 0x00, 0x08, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0x86,
  0x00, 0x81, 0xDF, 0x8D, 0x00, 0x81, 0xFF, 0x86, 0x00, 0x81, 0x01, 0x00, 0x00, 0x8C, 0x01, 0x81,
  0x80, 0x00, 0x00, 0x8C, 0x80, 0x84, 0x00, 0x0A, 0x07, 0x18, 0x37, 0x3F, 0xD1, 0xFF, 0xFF, 0x80,
  0xFF, 0x4B, 0x31, 0x84, 0x00, 0x0A, 0xE0, 0xF8, 0xFC, 0xFC, 0x13, 0xFF, 0xFF, 0x01, 0xFF, 0xDE,
  0x8C, 0x84, 0x00, 0x0A, 0x07, 0x1C, 0x3F, 0x3F, 0xD1, 0xFF, 0xFF, 0x80, 0xFF, 0x7A, 0x31, 0x84,
  0x00, 0x0A, 0xE0, 0x38, 0xFC, 0xFC, 0x13, 0xFF, 0xFF, 0x01, 0xFF, 0x5E, 0x8C, 0x84, 0x00, 0x0A,
  0x07, 0x1F, 0x3F, 0x3F, 0xD1, 0xFF, 0xFF, 0x80, 0xFF, 0x7B, 0x31, 0x84, 0x00, 0x10, 0xE0, 0x18,
  0xEC, 0xFC, 0x13, 0xFF, 0xFF, 0x01, 0xFF, 0xD2, 0x8C, 0x07, 0x19, 0x27, 0x4F, 0x5F, 0x0F, 0x83,
  0xEF, 0x0B, 0x0F, 0x7F, 0x7F, 0x3F, 0x1F, 0x07, 0xE0, 0xF8, 0xFC, 0xFE, 0xFE, 0x03, 0x83, 0x7B,
  0x0B, 0x03, 0xFE, 0xFE, 0xFC, 0xF8, 0xE0, 0x07, 0x19, 0x27, 0x4F, 0x5F, 0xE0, 0x83, 0xEF, 0x0B,
  0xE0, 0x7F, 0x7F, 0x3F, 0x1F, 0x07, 0xE0, 0xF8, 0xFC, 0xFE, 0xFE, 0x7C, 0x83, 0x7D, 0x0B, 0x7C,
  0xFE, 0xFE, 0xFC, 0xF8, 0xE0, 0x07, 0x19, 0x27, 0x4F, 0x5F, 0x3E, 0x83, 0xBE, 0x0B, 0x3E, 0x7F,
  0x7F, 0x3F, 0x1F, 0x07, 0xE0, 0xF8, 0xFC, 0xFE, 0xFE, 0x07, 0x83, 0xF7, 0x05, 0x07, 0xFE, 0xFE,
  0xFC, 0xF8, 0xE0, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE,
  0x00, 0xFE, 0x00, 0xFE, 0x00, 0xEE, 0x00, 0x02, 0x10, 0x38, 0x10, 0x8B, 0x00, 0x00, 0xB8, 0x82,
  0xA8, 0x00, 0xB8, 0x89, 0x00, 0x01, 0x3F, 0x7E, 0x82, 0xFE, 0x01, 0x7E, 0x3F, 0x88, 0x00, 0x06,
  0xFC, 0x3E, 0xFF, 0x7F, 0xFF, 0x3E, 0xFC, 0x88, 0x00, 0x06, 0x3F, 0x7E, 0xFE, 0x00, 0xFE, 0x7E,
  0x3F, 0x88, 0x00, 0x06, 0xFC, 0x3E, 0xFF, 0x00, 0xFF, 0x3E, 0xFC, 0x88, 0x00, 0x06, 0x3C, 0x7C,
  0xFC, 0x00, 0xFC, 0x7C, 0x3C, 0x88, 0x00, 0x06, 0x3C, 0x3E, 0x3F, 0x00, 0x3F, 0x3E, 0x3C, 0x88,
  0x00, 0x06, 0x3E, 0x4A, 0xDE, 0x00, 0xE6, 0x6A, 0x32, 0x88, 0x00, 0x06, 0x3C, 0x26, 0x3F, 0x00,
  0x33, 0x2E, 0x34, 0x88, 0x00, 0x06, 0x2C, 0x4A, 0xD6, 0x00, 0xA6, 0x2A, 0x22, 0x88, 0x00, 0x06,
  0x28, 0x00, 0x36, 0x00, 0x32, 0x2A, 0x34, 0x88, 0x00, 0x06, 0x2C, 0x02, 0x14, 0x00, 0x84, 0x00,
  0x22, 0x88, 0x00, 0x06, 0x28, 0x00, 0x16, 0x00, 0x02, 0x00, 0x34, 0x84, 0x00, 0x08, 0x01, 0x03,
  0x03, 0x1F, 0x3F, 0x3F, 0x7E, 0xFC, 0x7F, 0x82, 0x3F, 0x11, 0x33, 0x03, 0x01, 0x00, 0x80, 0xC0,
  0xC0, 0xFC, 0xFC, 0xF8, 0xFC, 0x7E, 0x7C, 0xF8, 0xF0, 0xF8, 0xFC, 0x88, 0x82, 0x00, 0x81, 0x03,
  0x1A, 0x1F, 0x3F, 0x3C, 0x78, 0xFC, 0x7C, 0x3F, 0x1F, 0x1F, 0x03, 0x03, 0x01, 0x00, 0x80, 0xC0,
  0xC0, 0xF8, 0xFC, 0x78, 0x7C, 0x7E, 0x7C, 0x78, 0xF0, 0xF0, 0xE0, 0x80, 0x82, 0x00, 0x81, 0x01,
  0x81, 0x0F, 0x07, 0x1C, 0x38, 0x1C, 0x0C, 0x0F, 0x07, 0x07, 0x03, 0x82, 0x00, 0x82, 0x80, 0x0A,
  0xE0, 0xF0, 0x70, 0x78, 0x78, 0x70, 0x60, 0xC0, 0xC0, 0x80, 0x80, 0x88, 0x00, 0x81, 0x01, 0x8D,
  0x00, 0x81, 0x80, 0x8B, 0x00, 0x81, 0x06, 0x81, 0x01, 0x81, 0x06, 0x89, 0x00, 0x81, 0x60, 0x81,
  0x80, 0x81, 0x60, 0x87, 0x00, 0x81, 0x18, 0x00, 0x00, 0x83, 0x0C, 0x02, 0x00, 0x18, 0x18, 0x85,
  0x00, 0x81, 0x18, 0x00, 0x00, 0x83, 0x30, 0x02, 0x00, 0x18, 0x18, 0x83, 0x00, 0x81, 0x60, 0x81,
  0x00, 0x81, 0x60, 0x81, 0x00, 0x81, 0x60, 0x81, 0x00, 0x81, 0x60, 0x81, 0x00, 0x81, 0x06, 0x81,
  0x00, 0x81, 0x06, 0x81, 0x00, 0x81, 0x06, 0x81, 0x00, 0x81, 0x06, 0x06, 0x00, 0xC0, 0xC0, 0x00,
  0x00, 0xC0, 0xC0, 0x82, 0x00, 0x81, 0xC0, 0x82, 0x00, 0x81, 0xC0, 0x81, 0x03, 0x81, 0x00, 0x81,
  0x03, 0x82, 0x00, 0x81, 0x03, 0x82, 0x00, 0x81, 0x03, 0xFF};

int SPRITESINITSIZE = 256;

byte SPRITESINIT[] = {
  204, 0, 0, 15,
  204, 0, 4, 15,
  204, 0, 8, 15,
  204, 0, 12, 15,
  204, 0, 16, 15,
  204, 0, 20, 15,
  204, 0, 24, 15,
  204, 0, 28, 15,
  204, 0, 32, 15,
  204, 0, 36, 15,
  204, 0, 40, 15,
  204, 0, 44, 15,
  204, 0, 48, 15,
  204, 0, 52, 15,
  204, 0, 56, 15,
  204, 0, 60, 15,
  204, 0, 64, 15,
  204, 0, 68, 15,
  204, 0, 72, 15,
  204, 0, 76, 15,
  204, 0, 80, 15,
  204, 0, 84, 15,
  204, 0, 88, 15,
  204, 0, 92, 15,
  204, 0, 96, 15,
  204, 0, 100, 15,
  204, 0, 104, 15,
  204, 0, 108, 15,
  204, 0, 112, 15,
  204, 0, 116, 15,
  204, 0, 120, 15,
  204, 0, 124, 15,
  204, 0, 128, 15,
  204, 0, 132, 15,
  204, 0, 136, 15,
  204, 0, 140, 15,
  204, 0, 144, 15,
  204, 0, 148, 15,
  204, 0, 152, 15,
  204, 0, 156, 15,
  204, 0, 160, 15,
  204, 0, 164, 15,
  204, 0, 168, 15,
  204, 0, 172, 15,
  204, 0, 176, 15,
  204, 0, 180, 15,
  204, 0, 184, 15,
  204, 0, 188, 15,
  204, 0, 192, 15,
  204, 0, 196, 15,
  204, 0, 200, 15,
  204, 0, 204, 15,
  204, 0, 208, 15,
  204, 0, 212, 15,
  204, 0, 216, 15,
  204, 0, 220, 15,
  204, 0, 224, 15,
  204, 0, 228, 15,
  204, 0, 232, 15,
  204, 0, 236, 15,
  204, 0, 240, 15,
  204, 0, 244, 15,
  204, 0, 248, 15,
  204, 0, 252, 15};