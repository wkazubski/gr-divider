/* -*- c++ -*- */
/*
 * Copyright 2020 Wojciech Kazubski.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_DIVIDER_API_H
#define INCLUDED_DIVIDER_API_H

#include <gnuradio/attributes.h>

#ifdef gnuradio_divider_EXPORTS
#define DIVIDER_API __GR_ATTR_EXPORT
#else
#define DIVIDER_API __GR_ATTR_IMPORT
#endif

#endif /* INCLUDED_DIVIDER_API_H */
