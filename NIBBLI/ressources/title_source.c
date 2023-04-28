/********************************************/
/*                                          */
/*  GRAPHICS TABLES  -  COLECOPAINT v1.04   */
/*                                          */
/********************************************/

#include <coleco.h>

byte IMAGE[] = {
 0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,
 0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,0xFE,0x1F,
 0xFE,0x1F,0xFE,0x1F,0xE7,0x1F,0x84,0x1A,0x04,0x1B,0x1A,0x1B,0xAB,0xAB,0x82,0x1A,
 0xA7,0x1B,0x87,0x1A,0x8D,0x1B,0x82,0x1A,0x06,0x1B,0x1A,0x1A,0x1B,0x1B,0x1A,0x1A,
 0x85,0x1B,0x81,0x1A,0x01,0x1B,0x1A,0x83,0x1B,0x81,0x1A,0x05,0x1B,0x1A,0x1B,0x1A,
 0x1B,0x1B,0x82,0x1A,0x07,0x1B,0x1A,0x1A,0x1B,0x1B,0x1A,0x1A,0x1B,0x86,0x1A,0x01,
 0x1B,0x1A,0x88,0x1B,0xF5,0x1A,0x81,0x1B,0x00,0x1A,0x87,0x1B,0x05,0x1A,0x1B,0x1A,
 0x1B,0x1B,0x1A,0x82,0x1B,0x81,0x1A,0x81,0x1B,0x00,0x1A,0x82,0x1B,0x02,0x1A,0xAB,
 0xAB,0x8A,0x1B,0x03,0x1A,0x1B,0x1A,0x1A,0x83,0x1B,0x02,0xAB,0x1B,0x1A,0x82,0x1B,
 0x00,0x1A,0x88,0x1B,0x03,0x1A,0x1B,0x1A,0x1A,0x85,0x1B,0x00,0x1A,0x8E,0x1B,0x00,
 0x1A,0x8C,0x1B,0x81,0xAB,0x82,0x1B,0x00,0x1A,0x83,0x1B,0x00,0x1A,0x86,0x1B,0x00,
 0x1A,0x86,0x1B,0x81,0x1A,0x85,0x1B,0x00,0x1A,0x84,0x1B,0x00,0x1A,0xEA,0x1B,0x02,
 0x1A,0x1B,0x1B,0x82,0x1A,0x81,0x1B,0x02,0x1A,0x1B,0xAB,0xA8,0x1B,0x81,0x1A,0x87,
 0x1B,0x01,0x1A,0x1B,0x85,0x1A,0xBF,0x1B,0x87,0x1A,0xFE,0x1B,0xA0,0x1B,0x87,0x1A,
 0xFE,0x1B,0xFE,0x1B,0xC0,0x1B,0xFE,0x1F,0xF9,0x1F,0x85,0x1D,0x00,0x19,0xD0,0x1D,
 0xFE,0x1F,0xA8,0x1F,0x83,0x1D,0x83,0x1B,0x82,0x1D,0x02,0x1B,0x6F,0x6F,0x8F,0x18,
 0xCB,0x1B,0xFE,0x1F,0x96,0x1F,0x02,0x16,0x18,0x18,0x82,0x1B,0x82,0x18,0x85,0x1B,
 0x88,0x18,0x86,0x1B,0x00,0x16,0x85,0x1F,0x00,0x19,0xC0,0x1D,0xFE,0x1F,0x98,0x1F,
 0x96,0x18,0x01,0x1B,0x16,0x82,0x18,0x81,0x1B,0x81,0x18,0x81,0x1D,0x00,0x15,0xFE,
 0x1D,0xD7,0x1D,0x84,0x1F,0x01,0x1D,0x19,0x86,0x1B,0x00,0x18,0x8E,0x1B,0x82,0x18,
 0x01,0x1B,0x6F,0x82,0x18,0x87,0x1D,0x85,0x1F,0xFE,0x1D,0xCF,0x1D,0x07,0x15,0x1E,
 0x1E,0x19,0x1A,0x1A,0x1D,0x16,0x82,0x1D,0x82,0x1B,0x84,0x18,0x00,0x1B,0x87,0x18,
 0x84,0x8F,0x81,0x8B,0x82,0x1D,0x02,0x19,0x1D,0x6F,0x87,0x1D,0x81,0x16,0x09,0x1E,
 0x6F,0x8F,0x8F,0x8B,0x8F,0x8F,0x8B,0x1B,0x1B,0x83,0x18,0x01,0x8B,0x8F,0xFE,0x1F,
 0xC0,0x1F,0x00,0x4D,0x85,0x1D,0x00,0x1F,0x86,0x18,0x00,0x1D,0x8F,0x8B,0x82,0x1D,
 0x00,0x16,0x83,0x18,0x03,0x19,0x1E,0x1F,0x1B,0x82,0x18,0x00,0x6F,0x83,0x8B,0x06,
 0x8F,0x8B,0x8F,0x8F,0x8B,0x8F,0x8F,0xC4,0x18,0xFA,0x1F,0x85,0x1D,0x01,0x4F,0xDF,
 0x84,0x1D,0x03,0x19,0x1E,0x1B,0x1B,0x83,0x18,0x00,0x8B,0x90,0x8F,0x02,0x8B,0x8F,
 0x8F,0x82,0x8B,0x82,0x6F,0x00,0x6B,0xFE,0x18,0xF6,0x18,0x00,0x8B,0x83,0x8F,0x00,
 0x8B,0x83,0x18,0x81,0x8F,0x00,0x8B,0x84,0x18,0x00,0x8B,0x82,0x8F,0xFE,0x18,0xF3,
 0x18,0x02,0x6B,0x6F,0x6F,0x82,0x8F,0x82,0x18,0x81,0x68,0x89,0x18,0xFF,0xFE,0xFF,
 0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xE6,0xFF,0x01,0xF0,0xC0,0x84,
 0x80,0x03,0xFF,0x7F,0x1F,0x1F,0x83,0x0F,0xC0,0xFF,0x01,0xF8,0xE0,0x84,0xC0,0x03,
 0xFF,0x3F,0x0F,0x0F,0x83,0x07,0xFC,0xFF,0x02,0xFE,0xFC,0xF8,0x83,0xFF,0x00,0xC0,
 0x82,0x00,0x83,0xFF,0x00,0x01,0x82,0x00,0x83,0xFF,0x81,0xFE,0x01,0x7E,0x1E,0x83,
 0xFF,0x83,0x00,0x03,0xC0,0xE0,0xF8,0xFF,0x83,0xC0,0x03,0x1F,0x3F,0xFF,0xFF,0x83,
 0x18,0x83,0xFF,0x83,0x00,0x83,0xFF,0x00,0x01,0x82,0x00,0x84,0xFF,0x02,0x7F,0x3F,
 0x3F,0x83,0xFF,0x83,0x00,0x83,0xFF,0x83,0x00,0x83,0xFF,0x03,0x7F,0x3F,0x1F,0x0F,
 0x83,0xFF,0x83,0x80,0x83,0xFF,0x83,0x3F,0x03,0xE0,0xF0,0xFC,0xFF,0x83,0xE0,0x03,
 0x0F,0x1F,0x7F,0xFF,0x83,0x0F,0xF7,0xFF,0x81,0xE0,0x81,0xC0,0x83,0x80,0x83,0x00,
 0x03,0x0C,0x1C,0x3C,0x3C,0x87,0x00,0x02,0x0E,0x06,0x02,0x8C,0x00,0x87,0xC0,0x87,
 0x18,0x82,0x00,0x82,0x03,0x81,0x02,0x83,0x00,0x81,0x80,0x81,0x00,0x84,0x1F,0x81,
 0x3F,0x00,0x7F,0x8A,0x00,0x05,0x60,0x70,0x70,0x40,0x40,0x0F,0x83,0x07,0x81,0x0F,
 0x00,0x1F,0x87,0x80,0x87,0x3F,0x87,0xE0,0x87,0x0F,0xF7,0xFF,0x85,0x80,0x81,0xC0,
 0x81,0x7C,0x81,0x3C,0x00,0x1C,0x82,0x04,0x87,0x01,0x07,0x00,0x80,0xC0,0xE0,0xF0,
 0xF8,0xFE,0xFE,0x87,0x00,0x87,0xC0,0x87,0x18,0x81,0x02,0x85,0x03,0x85,0x00,0x06,
 0xE0,0xF0,0x1F,0x07,0x07,0x03,0x03,0x82,0x01,0x87,0x00,0x81,0x40,0x83,0x60,0x05,
 0x7C,0x7E,0x07,0x03,0x01,0x01,0x83,0x00,0x87,0x80,0x87,0x3F,0x87,0xE0,0x87,0x0F,
 0xF7,0xFF,0x03,0xE0,0xF0,0xF8,0xFC,0x83,0xFF,0x84,0x04,0x02,0xC4,0xFC,0xFC,0x87,
 0x01,0x87,0xFE,0x87,0x00,0x87,0xC0,0x83,0x18,0x81,0x1C,0x81,0x1E,0x00,0x01,0x86,
 0x00,0x01,0xF0,0xE0,0x85,0x00,0x81,0x01,0x82,0x03,0x81,0x07,0x00,0x1F,0x85,0x00,
 0x81,0x80,0x01,0x3E,0x1C,0x88,0x00,0x82,0x01,0x81,0x03,0x87,0x80,0x82,0x3F,0x84,
 0x00,0x82,0xE0,0x84,0x60,0x87,0x0F,0xFC,0xFF,0x82,0xFF,0x87,0xFC,0x85,0x01,0x01,
 0x03,0x0F,0x82,0xFE,0x84,0xFF,0x82,0x00,0x84,0xFF,0x82,0xC0,0x84,0xFF,0x82,0x1F,
 0x84,0xFF,0x02,0x00,0xC0,0xF0,0x84,0xFF,0x81,0x00,0x00,0x03,0x84,0xFF,0x01,0x3F,
 0x7F,0x85,0xFF,0x02,0xC0,0xF0,0xF8,0x84,0xFF,0x82,0x00,0x84,0xFF,0x02,0x07,0x1F,
 0x7F,0x84,0xFF,0x82,0x80,0x84,0xFF,0x82,0x00,0x84,0xFF,0x82,0x60,0x84,0xFF,0x82,
 0x0F,0xFE,0xFF,0x85,0xFF,0x81,0xFC,0x85,0xFF,0x00,0x3F,0x8C,0xFF,0x81,0xFC,0x0F,
 0xFF,0xFC,0xF0,0xE0,0xC3,0xC7,0xE0,0x00,0xFF,0x1F,0x0F,0x07,0xC7,0xC7,0x07,0x0F,
 0xA2,0xFF,0x82,0xFE,0x81,0xFC,0x07,0xFF,0x81,0x01,0x03,0x3F,0x3F,0x7F,0x7F,0x88,
 0xFF,0x08,0xFE,0xFC,0xFC,0xF8,0xF8,0xF0,0xF0,0xFF,0x7C,0x82,0x38,0x81,0x31,0x04,
 0x21,0xFF,0x0F,0x0F,0x1F,0x82,0xE3,0x81,0xFF,0x0F,0xF9,0xF1,0xF1,0xE3,0xE3,0xE7,
 0xC7,0xFF,0xFE,0xFC,0xFC,0xF8,0xF8,0xF9,0xF1,0xFF,0x82,0x7F,0x81,0xFE,0x81,0xFC,
 0x07,0xFF,0x9F,0x1F,0x1F,0x3F,0x3F,0x7F,0x7F,0x85,0xFF,0x01,0xF9,0xF1,0xEF,0xFF,
 0x27,0xFC,0xFF,0xFF,0xFC,0xF8,0xF8,0xF0,0xF1,0x00,0xE1,0x10,0x18,0x38,0x7C,0xFE,
 0xFE,0x1E,0xFC,0xF8,0xF0,0x71,0x31,0x30,0x38,0x1F,0x0F,0x07,0xC7,0xC6,0x86,0x0C,
 0x0C,0x91,0xF7,0x80,0x18,0x39,0x39,0x70,0x70,0x85,0xFF,0x81,0x3F,0x12,0xE1,0xC0,
 0x80,0x0C,0x1C,0x18,0x80,0x80,0xE0,0xC0,0x40,0x71,0x71,0x63,0xE3,0xE3,0x0F,0x0F,
 0x1F,0x82,0xFF,0x81,0xFE,0x11,0xF8,0xE0,0xC0,0x83,0x0F,0x1F,0x3F,0x3F,0x30,0x22,
 0x22,0xC2,0xC7,0x87,0x8F,0x8F,0x23,0x23,0x82,0x07,0x81,0x0F,0x03,0x1F,0xE7,0xC7,
 0xC7,0x82,0x8F,0x81,0x02,0x27,0xC0,0x80,0x80,0x8C,0x1C,0x18,0x80,0x00,0xF0,0xE0,
 0x60,0x63,0x47,0x46,0x80,0x80,0x3C,0x38,0x18,0x11,0x11,0x13,0x20,0x20,0x70,0xE0,
 0xC0,0x83,0x87,0x86,0x00,0x40,0x70,0x30,0x20,0x22,0x24,0x78,0x38,0x38,0x82,0x0F,
 0x04,0x3F,0xFF,0xFF,0x0F,0x0F,0xE7,0xFF,0x81,0xF1,0x11,0xF0,0xF8,0xF8,0xFC,0xFF,
 0xFF,0xFE,0xFE,0xFC,0x78,0x20,0x01,0x07,0xFF,0x38,0x3F,0x3F,0x7F,0x83,0xFF,0x00,
 0x1C,0x86,0xFF,0x00,0xF0,0x86,0xFF,0x00,0x7F,0x86,0xFF,0x00,0x81,0x84,0xFF,0x81,
 0xFE,0x81,0xC7,0x81,0x8F,0x82,0x1F,0x00,0x3F,0x82,0xFE,0x84,0xFF,0x0C,0x3F,0x3E,
 0x1C,0x00,0x80,0xC1,0xFF,0xFF,0x1F,0x1F,0x3F,0x3F,0x7F,0x82,0xFF,0x00,0x1F,0x86,
 0xFF,0x00,0x82,0x86,0xFF,0x00,0x43,0x86,0xFF,0x00,0x90,0x86,0xFF,0x00,0xE0,0x86,
 0xFF,0x00,0x60,0x86,0xFF,0x00,0x3C,0x86,0xFF,0x00,0x0F,0xFE,0xFF,0x9F,0xFF,0x00,
 0xFE,0x86,0xFF,0x00,0x7F,0xFE,0xFF,0xFE,0xFF,0xBF,0xFF,0x00,0xFD,0xD2,0xFF,0x81,
 0xFD,0x82,0xFC,0x82,0xFF,0x81,0xD7,0x02,0x9F,0x96,0x95,0x82,0xFF,0x82,0xDF,0x01,
 0xD6,0x45,0x82,0xFF,0x83,0xDD,0x00,0x5D,0x85,0xFF,0x01,0xED,0xD5,0x85,0xFF,0x01,
 0x56,0x55,0x83,0xFF,0x81,0xDF,0x01,0x8F,0x5F,0xEF,0xFF,0x00,0xFE,0x83,0xFF,0x03,
 0x81,0x79,0xFC,0xFF,0x82,0x7F,0x03,0x71,0x0D,0x7F,0x87,0xC7,0xFF,0x83,0xFD,0x83,
 0xFF,0x82,0x55,0x00,0xD6,0x83,0xFF,0x03,0xD4,0xD5,0x55,0xD6,0x83,0xFF,0x03,0x5D,
 0xDD,0x5D,0xDC,0x83,0xFF,0x82,0xD5,0x00,0x6C,0x83,0xFF,0x03,0x54,0x6D,0x6D,0x6E,
 0x83,0xFF,0x03,0x5F,0xDF,0x5F,0xEF,0xF3,0xFF,0x0F,0xF2,0xC5,0x9D,0xBF,0xF9,0xF1,
 0xF6,0xF2,0x73,0xBB,0x8D,0x2F,0x07,0x4F,0x88,0xD0,0x83,0xFF,0x03,0x7F,0x1F,0x0F,
 0x07,0x85,0xFF,0x01,0xBF,0x3F,0xC9,0xFF,0x12,0xEF,0xDF,0xDF,0x8B,0xD5,0xD5,0xFF,
 0xFF,0xFE,0xFD,0xFD,0x5D,0x1D,0x7D,0xFF,0xFF,0x73,0xAD,0xAD,0x82,0xED,0x81,0xFF,
 0x85,0x77,0x81,0xFF,0x08,0x19,0x76,0x76,0x77,0x17,0x77,0xFF,0xFF,0x8C,0x84,0xDB,
 0x81,0xFF,0x0A,0xC2,0x5A,0x5A,0x5B,0x53,0x57,0xFF,0xFF,0xEB,0xEA,0xDA,0x82,0x5B,
 0x81,0xFF,0x09,0x36,0xD5,0xD5,0x75,0x35,0xB5,0xFF,0xFF,0x6D,0xAD,0x82,0xA5,0x0C,
 0xA9,0xFF,0xFF,0xE7,0xDA,0xDA,0xF6,0xF6,0xEE,0xFF,0xFF,0x3B,0xD3,0x82,0xDB,0x08,
 0xDA,0xFF,0xFF,0xBF,0xBF,0x7F,0x5F,0x5F,0xDF,0xAF,0xFF,0x02,0xEB,0xE6,0xC4,0x82,
 0xF8,0x21,0x0E,0x01,0x30,0x0F,0x0E,0x0E,0x1C,0x1C,0x3C,0xC6,0x07,0x82,0xC2,0x42,
 0x43,0x51,0xE1,0x81,0x3F,0x33,0x63,0x47,0x0F,0x1F,0x3F,0xBE,0xF3,0xE7,0xC7,0xCF,
 0xCF,0xDF,0x1F,0x8F,0xBF,0xFF,0x81,0xD5,0x00,0xDB,0x84,0xFF,0x81,0x7D,0x00,0x7E,
 0x84,0xFF,0x02,0xED,0xAD,0x73,0x84,0xFF,0x81,0x77,0x00,0x11,0x84,0xFF,0x02,0x77,
 0x76,0x19,0x84,0xFF,0x81,0xDB,0x00,0xDC,0x84,0xFF,0x02,0x57,0x5B,0xDB,0x84,0xFF,
 0x02,0x5B,0xBA,0xBB,0x84,0xFF,0x81,0xD5,0x00,0x36,0x84,0xFF,0x02,0xA9,0xAD,0x6D,
 0x84,0xFF,0x02,0xEE,0xDE,0xC3,0x84,0xFF,0x02,0xDA,0xDB,0x3B,0x84,0xFF,0x02,0x0F,
 0xDF,0xDF,0xB4,0xFF,0x0A,0x02,0x03,0x04,0x88,0xC0,0xC0,0xE0,0xF0,0x07,0x86,0xF8,
 0x84,0x00,0x81,0x03,0x81,0x05,0x13,0x0A,0x1A,0x32,0xE0,0xBE,0x9D,0x8C,0x8E,0xDE,
 0x5C,0x45,0x45,0x4F,0x0F,0x9F,0x1F,0x3F,0x1F,0x1F,0x0F,0xFE,0xFF,0xD2,0xFF,0x0F,
 0xFE,0xFD,0xFC,0xFE,0xFE,0xF8,0xEE,0xF5,0xB6,0xBA,0x7C,0x7C,0xFE,0xFD,0x0F,0xF8,
 0x85,0x00,0x00,0x80,0x86,0x00,0x10,0x47,0x41,0x41,0x47,0x47,0x41,0x41,0xC1,0x0F,
 0x0E,0x07,0x87,0x87,0x84,0x0B,0x09,0x7F,0x82,0x3F,0x81,0x7F,0x81,0x3F,0xFE,0xFF,
 0xC8,0xFF,0x13,0xF2,0xF1,0xEC,0xE0,0xF0,0xF8,0xF3,0xF7,0x7D,0xFC,0xFC,0x7F,0x7E,
 0x3D,0x1D,0x09,0x00,0x00,0x7F,0x80,0x83,0x00,0x01,0x03,0xFC,0x85,0x00,0x01,0x81,
 0xE3,0x82,0xC1,0x81,0xE3,0x20,0xFF,0xF1,0x76,0x31,0x38,0x38,0xF3,0x14,0x34,0x3F,
 0x3F,0x7F,0x7E,0x7C,0x38,0x30,0x30,0xF8,0xF8,0xFC,0xFE,0xC7,0x87,0x87,0xCF,0xFF,
 0x3F,0x07,0x01,0x00,0x00,0x9F,0x0F,0xC5,0xFF,0x01,0xF1,0xF6,0x85,0xFF,0x01,0x84,
 0xB5,0x85,0xFF,0x01,0x67,0xDA,0x85,0xFF,0x01,0x3C,0xDD,0x85,0xFF,0x01,0x2D,0xAD,
 0x85,0xFF,0x01,0x11,0xBB,0x85,0xFF,0x01,0x9B,0x6B,0x85,0xFF,0x01,0x71,0x7B,0x85,
 0xFF,0x01,0x9F,0x6E,0x85,0xFF,0x01,0x31,0xDB,0x85,0xFF,0x01,0xDC,0xDD,0x85,0xFF,
 0x01,0x23,0xB7,0x9E,0xFF,0x10,0xFE,0x20,0x80,0xC1,0xE3,0xF7,0xFF,0xFF,0x7F,0x80,
 0x80,0xC0,0xC0,0xA0,0x20,0x20,0x10,0x87,0xFF,0x00,0xE7,0x86,0xFF,0x04,0x50,0x20,
 0x30,0x09,0x07,0x82,0x03,0x03,0xE0,0xF0,0xF0,0xF8,0x82,0xC0,0x00,0xC3,0x82,0xFF,
 0x07,0xF3,0xE1,0xE1,0xF3,0xFF,0x0F,0xDF,0xFF,0x84,0x02,0xBF,0xFF,0x81,0xF6,0x00,
 0xF1,0x83,0xF7,0x1B,0xFF,0xB5,0xB5,0xA4,0xAD,0xAD,0xB5,0xB4,0xFF,0xDA,0xEF,0x67,
 0xF7,0xFB,0xDA,0x67,0xFF,0xDD,0x7D,0x3C,0xBD,0xDD,0xDD,0x3C,0xFF,0xAD,0xAD,0x6D,
 0x82,0xAD,0x01,0x33,0xFF,0x86,0xBB,0x00,0xFF,0x82,0x69,0x81,0x6A,0x02,0x6B,0x9B,
 0xFF,0x86,0x7B,0x01,0xFF,0x6E,0x83,0x6F,0x0A,0x6E,0x9F,0xFF,0xDB,0x7B,0x3B,0xBB,
 0xDB,0xDB,0x3B,0xFF,0x84,0xAD,0x09,0x05,0x75,0xFF,0xB7,0xB7,0x37,0x77,0x77,0xB7,
 0xB7,0x99,0xFF,0x01,0xFE,0xFF,0x82,0xFE,0x81,0xFF,0x0F,0xB8,0x3F,0x3F,0x41,0x83,
 0x27,0x67,0x8F,0x70,0xFC,0xFC,0xFE,0xFC,0xFE,0xFF,0xFF,0x84,0x3F,0x8A,0xFF,0x81,
 0xE1,0x81,0xF0,0x03,0xF8,0xFD,0xFF,0xFF,0x82,0xC1,0x01,0xE1,0xC0,0x82,0x40,0x87,
 0x00,0x82,0x04,0x81,0x08,0x02,0x18,0x10,0x10,0xFE,0xFF,0xD0,0xFF,0x00,0x00,0x82,
 0x80,0x82,0xC0,0x00,0xE0,0x89,0x00,0x00,0xFC,0x83,0xF8,0x00,0xFC,0x82,0x20,0x04,
 0x10,0x3F,0x3E,0x3E,0x18,0x83,0x00,0x00,0x3F,0x82,0x1F,0x07,0x10,0x50,0x50,0x20,
 0x30,0x10,0x08,0x08,0xFE,0xFF,0xD0,0xFF,0x00,0xE0,0x84,0xF0,0x81,0xF8,0x8F,0x00,
 0x0B,0x0C,0x0B,0x04,0xC3,0x81,0x81,0xC0,0xC1,0x3F,0x80,0x80,0x00,0x83,0x80,0x02,
 0x0C,0x04,0x04,0x84,0x02,0xFF};