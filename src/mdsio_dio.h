//
//    Copyright (C) 2011 Sascha Ittner <sascha.ittner@modusoft.de>
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
//
#ifndef _MDSIO_DIO_H_
#define _MDSIO_DIO_H_

#include <linux/ctype.h>
#include "mdsio.h"

#define MDSIO_DIO_TYPE 2
#define MDSIO_DIO_LEN 8

#define MDSIO_DIO_PINS 40

int mdsio_dio_init(mdsio_mod_t *module);

#endif
