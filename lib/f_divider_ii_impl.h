/* -*- c++ -*- */
/*
 * Copyright 2019 Wojciech Kazubski.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_DIVIDER_F_DIVIDER_II_IMPL_H
#define INCLUDED_DIVIDER_F_DIVIDER_II_IMPL_H

#include <divider/f_divider_ii.h>

namespace gr {
  namespace divider {

    class f_divider_ii_impl : public f_divider_ii
    {
     private:
      int ct_k;

     public:
      f_divider_ii_impl(int count);
      ~f_divider_ii_impl();

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

#endif /* INCLUDED_DIVIDER_F_DIVIDER_II_IMPL_H */

