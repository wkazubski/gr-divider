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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include "f_divider_ii_impl.h"

namespace gr {
  namespace divider {

    f_divider_ii::sptr
    f_divider_ii::make(int count)
    {
      return gnuradio::get_initial_sptr
        (new f_divider_ii_impl(count));
    }


    /*
     * The private constructor
     */
    f_divider_ii_impl::f_divider_ii_impl(int count)
      : gr::sync_block("f_divider_ii",
              gr::io_signature::make(1, 1, sizeof(int)),
              gr::io_signature::make(1, 1, sizeof(int))),
              ct_k(count)
    {
      set_history(2);
    }

    /*
     * Our virtual destructor.
     */
    f_divider_ii_impl::~f_divider_ii_impl()
    {
    }

    int
    f_divider_ii_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
      static int state = 0;
      static bool ostate = false;

      const int *in = (const int *) input_items[0];
      int *out = (int *) output_items[0];

      for(int i = 0; i < noutput_items; i++) {
        if ((in[i] > 0) && (in[i-1] <= 0)) {
          state -= 1;
          if (state <= 0) {
            state = ct_k;
            ostate = !ostate;
          }
        }
        if ((in[i] <= 0) && (in[i-1] > 0)) {
          state -= 1;
          if ((state <= 0) && ostate) {
            state = ct_k;
            ostate = false;
          }
        }
        if (ostate)
          out[i] = +1;
        else
          out[i] = -1;
      }

      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace divider */
} /* namespace gr */

