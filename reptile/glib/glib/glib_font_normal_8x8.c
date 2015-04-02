 /*************************************************************************//**
 * @file glib_font_normal_8x8.c
 * @brief Silicon Labs Graphics Library: GLIB font normal 8x8
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * This file is licensed under the Silabs License Agreement. See the file
 * "Silabs_License_Agreement.txt" for details. Before using this software for
 * any purpose, you must agree to the terms of that agreement.
 *
 ******************************************************************************/


/* Standard C header files */
#include <stdint.h>
#include "glib.h"

static const uint8_t GLIB_FontNormal8x8PixMap[] = 
{
  0x00, 0x18, 0x6c, 0x6c, 0x10, 0xce, 0x38, 0x08, 0x60, 0x0c, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7c, 0x30, 0x7c, 0x7c, 0xc6, 0xfe, 0x7c, 0xfe,
  0x7c, 0x7c, 0x00, 0x00, 0x70, 0x00, 0x1c, 0x7c, 0x7c, 0x7c, 0x7e, 0x7c,
  0x7e, 0xfe, 0xfe, 0x7c, 0xc6, 0x3c, 0x78, 0xc6, 0x06, 0xc6, 0xc6, 0x7c,
  0x7e, 0x7c, 0x7e, 0x7c, 0x7e, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xfe, 0x7c,
  0x00, 0x7c, 0x10, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x60, 0x00, 0x38, 0x00,
  0x06, 0x00, 0x00, 0x06, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x18, 0x18, 0x8c, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x6c, 0xfe, 0xfc, 0x6a, 0x2c, 0x18,
  0x30, 0x18, 0x6c, 0x18, 0x00, 0x00, 0x00, 0xc0, 0xc6, 0x38, 0xc6, 0xc6,
  0xc6, 0x06, 0xc6, 0xc0, 0xc6, 0xc6, 0x18, 0x18, 0x38, 0x7c, 0x38, 0xc6,
  0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x06, 0x06, 0xc6, 0xc6, 0x18, 0x30, 0x66,
  0x06, 0xee, 0xce, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x18, 0xc6, 0xc6, 0xc6,
  0xc6, 0xc6, 0xc0, 0x0c, 0x06, 0x60, 0x38, 0x00, 0x0c, 0x00, 0x06, 0x00,
  0x60, 0x00, 0x0c, 0x00, 0x06, 0x18, 0x30, 0x06, 0x0c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
  0x18, 0x30, 0xd6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x48, 0xfe,
  0x16, 0x2e, 0x2c, 0x18, 0x18, 0x30, 0x38, 0x18, 0x00, 0x00, 0x00, 0x60,
  0xc6, 0x30, 0x60, 0xc0, 0xc6, 0x06, 0x06, 0x60, 0xc6, 0xc6, 0x18, 0x18,
  0x1c, 0x7c, 0x70, 0xc6, 0xf6, 0xc6, 0xc6, 0x06, 0xc6, 0x06, 0x06, 0x06,
  0xc6, 0x18, 0x30, 0x36, 0x06, 0xfe, 0xde, 0xc6, 0xc6, 0xc6, 0xc6, 0x06,
  0x18, 0xc6, 0xc6, 0xc6, 0x6c, 0xc6, 0x60, 0x0c, 0x0c, 0x60, 0x6c, 0x00,
  0x04, 0x3c, 0x3e, 0x3c, 0x7c, 0x3c, 0x3c, 0x3c, 0x3e, 0x00, 0x00, 0x66,
  0x0c, 0x6e, 0x3e, 0x3c, 0x3e, 0x3c, 0x36, 0x3c, 0x18, 0x66, 0x66, 0xc6,
  0x66, 0x66, 0x7e, 0x18, 0x18, 0x30, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x18, 0x00, 0x6c, 0x7c, 0x10, 0xdc, 0x00, 0x18, 0x30, 0xfe, 0x7e,
  0x1c, 0x7e, 0x00, 0x30, 0xc6, 0x30, 0x30, 0x70, 0xfe, 0x7e, 0x7e, 0x30,
  0x7c, 0xfc, 0x00, 0x00, 0x0e, 0x00, 0xe0, 0x70, 0xf6, 0xfe, 0x7e, 0x06,
  0xc6, 0x1e, 0x1e, 0xf6, 0xfe, 0x18, 0x30, 0x1e, 0x06, 0xd6, 0xf6, 0xc6,
  0x7e, 0xc6, 0x7e, 0x7c, 0x18, 0xc6, 0xc6, 0xd6, 0x38, 0xfc, 0x30, 0x0c,
  0x18, 0x60, 0xc6, 0x00, 0x00, 0x60, 0x66, 0x06, 0x66, 0x66, 0x0c, 0x66,
  0x66, 0x18, 0x30, 0x36, 0x0c, 0xd6, 0x66, 0x66, 0x66, 0x66, 0x6e, 0x06,
  0x7c, 0x66, 0x66, 0xc6, 0x3c, 0x66, 0x30, 0x0c, 0x00, 0x60, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xd0, 0xe8, 0x66, 0x00,
  0x18, 0x30, 0x38, 0x7e, 0x1c, 0x7e, 0x1c, 0x18, 0xc6, 0x30, 0x18, 0xc0,
  0xc0, 0xc0, 0xc6, 0x18, 0xc6, 0xc0, 0x18, 0x18, 0x1c, 0x7c, 0x70, 0x30,
  0x76, 0xc6, 0xc6, 0x06, 0xc6, 0x06, 0x06, 0xc6, 0xc6, 0x18, 0x30, 0x36,
  0x06, 0xc6, 0xe6, 0xc6, 0x06, 0xb6, 0xc6, 0xc0, 0x18, 0xc6, 0xc6, 0xfe,
  0x6c, 0xc0, 0x18, 0x0c, 0x30, 0x60, 0x00, 0x00, 0x00, 0x7c, 0x66, 0x06,
  0x66, 0x7e, 0x0c, 0x7c, 0x66, 0x18, 0x30, 0x1e, 0x0c, 0xd6, 0x66, 0x66,
  0x3e, 0x56, 0x06, 0x3c, 0x18, 0x66, 0x66, 0xd6, 0x18, 0x7c, 0x18, 0x18,
  0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0xfe,
  0x7e, 0xac, 0x66, 0x00, 0x30, 0x18, 0x6c, 0x18, 0x18, 0x00, 0x1c, 0x0c,
  0xc6, 0x30, 0x0c, 0xc6, 0xc0, 0xc6, 0xc6, 0x0c, 0xc6, 0xc6, 0x18, 0x18,
  0x38, 0x7c, 0x38, 0x00, 0x06, 0xc6, 0xc6, 0xc6, 0xc6, 0x06, 0x06, 0xc6,
  0xc6, 0x18, 0x36, 0x66, 0x06, 0xc6, 0xc6, 0xc6, 0x06, 0x66, 0xc6, 0xc6,
  0x18, 0xc6, 0x6c, 0xee, 0xc6, 0xc0, 0x0c, 0x0c, 0x60, 0x60, 0x00, 0xfe,
  0x00, 0x66, 0x66, 0x06, 0x66, 0x06, 0x0c, 0x60, 0x66, 0x18, 0x36, 0x36,
  0x0c, 0xc6, 0x66, 0x66, 0x06, 0x26, 0x06, 0x60, 0x18, 0x66, 0x3c, 0xd6,
  0x3c, 0x60, 0x0c, 0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x18, 0x00, 0x6c, 0x10, 0xe6, 0xdc, 0x00, 0x60, 0x0c, 0x00, 0x18,
  0x0c, 0x00, 0x1c, 0x06, 0x7c, 0x78, 0xfe, 0x7c, 0xc0, 0x7c, 0x7c, 0x06,
  0x7c, 0x7c, 0x00, 0x0c, 0x70, 0x00, 0x1c, 0x30, 0x7c, 0xc6, 0x7e, 0x7c,
  0x7e, 0xfe, 0x06, 0xfc, 0xc6, 0x3c, 0x1c, 0xc6, 0xfe, 0xc6, 0xc6, 0x7c,
  0x06, 0xdc, 0xc6, 0x7c, 0x18, 0x7c, 0x38, 0xc6, 0xc6, 0x7e, 0xfe, 0x7c,
  0xc0, 0x7c, 0x00, 0xfe, 0x00, 0x7c, 0x3e, 0x3c, 0x7c, 0x3c, 0x0c, 0x3e,
  0x66, 0x70, 0x1c, 0x66, 0x38, 0xc6, 0x66, 0x3c, 0x06, 0x5c, 0x06, 0x3e,
  0x70, 0x7c, 0x18, 0xfc, 0x66, 0x3e, 0x7e, 0x30, 0x18, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const GLIB_Font_t GLIB_FontNormal8x8 = {(void *)GLIB_FontNormal8x8PixMap, 
                                        sizeof(GLIB_FontNormal8x8PixMap),
                                        sizeof(GLIB_FontNormal8x8PixMap[0]), 
                                        100, 8, 8, 2, 0, FullFont};
                                               

