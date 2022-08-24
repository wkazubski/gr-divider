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

#ifndef INCLUDED_DIVIDER_F_DIVIDER_SS_IMPL_H
#define INCLUDED_DIVIDER_F_DIVIDER_SS_IMPL_H

#include <gnuradio/divider/f_divider_ss.h>

namespace gr {
  namespace divider {

    class f_divider_ss_impl : public f_divider_ss
    {
     private:
      int ct_k;

     public:
      f_divider_ss_impl(int count);
      ~f_divider_ss_impl();

      int k() const { return ct_k; }
      void set_k(int k) { ct_k = k; }

      // Where all the action really happens
      int work(
              int noutput_items,
              gr_vector_const_void_star &input_items,
              gr_vector_void_star &output_items
      );
    };

  } // namespace divider
} // namespace gr

#endif /* INCLUDED_DIVIDER_F_DIVIDER_SS_IMPL_H */

