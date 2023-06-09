#include <coleco.h>

const byte COLOR1RLE[] = {
  0x87, 0x11, 0x87, 0xE1, 0xAF, 0x11, 0xFE, 0x41, 0xC0, 0x41, 0x87, 0x91, 0xFE, 0xF1, 0xFE,
  0xF1, 0xFE, 0xF1, 0xD2, 0xF1, 0xA7, 0x41, 0x00, 0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x81,
  0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x00, 0x18, 0x87, 0x41, 0x81, 0x21, 0x81, 0xD1, 0x81,
  0x61, 0x81, 0x31, 0x8F, 0x41, 0x9F, 0x81, 0x9F, 0x41, 0x00, 0xF8, 0x8D, 0xA8, 0x00, 0xF8, 0x82,
  0xA8, 0x81, 0xF8, 0x82, 0xA8, 0x07, 0x18, 0xA8, 0xA8, 0xF8, 0xF8, 0xA8, 0xA8, 0x18, 0x9F, 0x41,
  0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11, 0xA2, 0x11, 0x9F, 0x41, 0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11,
  0xC3, 0x11, 0x16, 0x61, 0x81, 0x91, 0x91, 0x81, 0x61, 0x11, 0x11, 0x61, 0x81, 0x91, 0x91, 0x81,
  0x61, 0x11, 0x61, 0x61, 0x81, 0x91, 0x91, 0x81, 0x61, 0x61, 0xA7, 0x11, 0x81, 0x61, 0x03, 0x81,
  0x91, 0x91, 0x81, 0x83, 0x61, 0x03, 0x81, 0x91, 0x91, 0x81, 0x83, 0x61, 0x03, 0x81, 0x91, 0x91,
  0x81, 0x83, 0x61, 0x0C, 0x81, 0x91, 0x91, 0x81, 0x81, 0x61, 0x11, 0x61, 0x81, 0x91, 0x91, 0x81,
  0x61, 0x98, 0x11, 0x81, 0x61, 0x03, 0x81, 0x91, 0x91, 0x81, 0x83, 0x61, 0x03, 0x81, 0x91, 0x91,
  0x81, 0x83, 0x61, 0x05, 0x81, 0x91, 0x91, 0x81, 0x61, 0x61, 0xA7, 0x11, 0xFF};
  
const byte COLOR2RLE[] = {
  0x87, 0x11, 0x87, 0xE1, 0xAF, 0x11, 0xFE, 0x41, 0xC0, 0x41, 0x87, 0x91, 0xFE, 0xF1, 0xFE,
  0xF1, 0xFE, 0xF1, 0xD2, 0xF1, 0xA7, 0x41, 0x00, 0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x81,
  0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x00, 0x18, 0x87, 0x41, 0x81, 0x21, 0x81, 0xD1, 0x81,
  0x61, 0x81, 0x31, 0x8F, 0x41, 0x9F, 0x81, 0x9F, 0x41, 0x00, 0xF8, 0x8D, 0xA8, 0x00, 0xF8, 0x82,
  0xA8, 0x81, 0xF8, 0x82, 0xA8, 0x07, 0x18, 0xA8, 0xA8, 0xF8, 0xF8, 0xA8, 0xA8, 0x18, 0x9F, 0x41,
  0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11, 0xA2, 0x11, 0x9F, 0x41, 0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11,
  0xC3, 0x11, 0x16, 0xC1, 0x21, 0x31, 0x31, 0x21, 0xC1, 0x11, 0x11, 0xC1, 0x21, 0x31, 0x31, 0x21,
  0xC1, 0x11, 0xC1, 0xC1, 0x21, 0x31, 0x31, 0x21, 0xC1, 0xC1, 0xA7, 0x11, 0x81, 0xC1, 0x03, 0x21,
  0x31, 0x31, 0x21, 0x83, 0xC1, 0x03, 0x21, 0x31, 0x31, 0x21, 0x83, 0xC1, 0x03, 0x21, 0x31, 0x31,
  0x21, 0x83, 0xC1, 0x0C, 0x21, 0x31, 0x31, 0x21, 0xC1, 0xC1, 0x11, 0xC1, 0x21, 0x31, 0x31, 0x21,
  0xC1, 0x98, 0x11, 0x81, 0xC1, 0x03, 0x21, 0x31, 0x31, 0x21, 0x83, 0xC1, 0x03, 0x21, 0x31, 0x31,
  0x21, 0x83, 0xC1, 0x05, 0x21, 0x31, 0x31, 0x21, 0xC1, 0xC1, 0xA7, 0x11, 0xFF};
  
  const byte COLOR3RLE[] = {
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
  
  const byte COLOR4RLE[] = {
  0x87, 0x11, 0x87, 0xE1, 0xAF, 0x11, 0xFE, 0x41, 0xC0, 0x41, 0x87, 0x91, 0xFE, 0xF1, 0xFE,
  0xF1, 0xFE, 0xF1, 0xD2, 0xF1, 0xA7, 0x41, 0x00, 0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x81,
  0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x00, 0x18, 0x87, 0x41, 0x81, 0x21, 0x81, 0xD1, 0x81,
  0x61, 0x81, 0x31, 0x8F, 0x41, 0x9F, 0x81, 0x9F, 0x41, 0x00, 0xF8, 0x8D, 0xA8, 0x00, 0xF8, 0x82,
  0xA8, 0x81, 0xF8, 0x82, 0xA8, 0x07, 0x18, 0xA8, 0xA8, 0xF8, 0xF8, 0xA8, 0xA8, 0x18, 0x9F, 0x41,
  0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11, 0xA2, 0x11, 0x9F, 0x41, 0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11,
  0xC3, 0x11, 0x16, 0xA1, 0xB1, 0xF1, 0xF1, 0xB1, 0xA1, 0x11, 0x11, 0xA1, 0xB1, 0xF1, 0xF1, 0xB1,
  0xA1, 0x11, 0xA1, 0xA1, 0xB1, 0xF1, 0xF1, 0xB1, 0xA1, 0xA1, 0xA7, 0x11, 0x81, 0xA1, 0x03, 0xB1,
  0xF1, 0xF1, 0xB1, 0x83, 0xA1, 0x03, 0xB1, 0xF1, 0xF1, 0xB1, 0x83, 0xA1, 0x03, 0xB1, 0xF1, 0xF1,
  0xB1, 0x83, 0xA1, 0x0C, 0xB1, 0xF1, 0xF1, 0xB1, 0xA1, 0xA1, 0x11, 0xA1, 0xB1, 0xF1, 0xF1, 0xB1,
  0xA1, 0x98, 0x11, 0x81, 0xA1, 0x03, 0xB1, 0xF1, 0xF1, 0xB1, 0x83, 0xA1, 0x03, 0xB1, 0xF1, 0xF1,
  0xB1, 0x83, 0xA1, 0x05, 0xB1, 0xF1, 0xF1, 0xB1, 0xA1, 0xA1, 0xA7, 0x11, 0xFF};
  
  const byte COLOR5RLE[] = {
  0x87, 0x11, 0x87, 0xE1, 0xAF, 0x11, 0xFE, 0x41, 0xC0, 0x41, 0x87, 0x91, 0xFE, 0xF1, 0xFE,
  0xF1, 0xFE, 0xF1, 0xD2, 0xF1, 0xA7, 0x41, 0x00, 0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x81,
  0x18, 0x85, 0xF8, 0x81, 0x18, 0x85, 0xF8, 0x00, 0x18, 0x87, 0x41, 0x81, 0x21, 0x81, 0xD1, 0x81,
  0x61, 0x81, 0x31, 0x8F, 0x41, 0x9F, 0x81, 0x9F, 0x41, 0x00, 0xF8, 0x8D, 0xA8, 0x00, 0xF8, 0x82,
  0xA8, 0x81, 0xF8, 0x82, 0xA8, 0x07, 0x18, 0xA8, 0xA8, 0xF8, 0xF8, 0xA8, 0xA8, 0x18, 0x9F, 0x41,
  0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11, 0xA2, 0x11, 0x9F, 0x41, 0xFE, 0x11, 0xFE, 0x11, 0xFE, 0x11,
  0xC3, 0x11, 0x16, 0x21, 0xD1, 0xD1, 0x61, 0x61, 0x31, 0x11, 0x11, 0x21, 0xD1, 0xD1, 0x61, 0x61,
  0x31, 0x11, 0x21, 0x21, 0xD1, 0xD1, 0x61, 0x61, 0x31, 0x31, 0xA7, 0x11, 0x81, 0x21, 0x81, 0xD1,
  0x81, 0x61, 0x81, 0x31, 0x81, 0x21, 0x81, 0xD1, 0x81, 0x61, 0x81, 0x31, 0x81, 0x21, 0x81, 0xD1,
  0x81, 0x61, 0x81, 0x31, 0x81, 0x21, 0x81, 0xD1, 0x81, 0x61, 0x81, 0x31, 0x06, 0x11, 0x21, 0xD1,
  0xD1, 0x61, 0x61, 0x31, 0x98, 0x11, 0x81, 0x21, 0x81, 0xD1, 0x81, 0x61, 0x81, 0x31, 0x81, 0x21,
  0x81, 0xD1, 0x81, 0x61, 0x81, 0x31, 0x81, 0xC1, 0x81, 0xD1, 0x81, 0x61, 0x81, 0x31, 0xA7, 0x11,
  0xFF};