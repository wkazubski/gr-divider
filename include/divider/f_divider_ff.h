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

#ifndef INCLUDED_DIVIDER_F_DIVIDER_FF_H
#define INCLUDED_DIVIDER_F_DIVIDER_FF_H

#include <divider/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace divider {

    /*!
     * \brief <+description of block+>
     * \ingroup divider
     *
     */
    class DIVIDER_API f_divider_ff : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<f_divider_ff> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of divider::f_divider_ff.
       *
       * To avoid accidental use of raw pointers, divider::f_divider_ff's
       * constructor is in a private implementation
       * class. divider::f_divider_ff::make is the public interface for
       * creating new instances.
       */
      static sptr make(int count);

      /*!
       * \brief Return division ratio
       */
      virtual int k() const = 0;

      /*!
       * \brief Set division ratio
       */
      virtual void set_k(int k) = 0;
    };

  } // namespace divider
} // namespace gr

#endif /* INCLUDED_DIVIDER_F_DIVIDER_FF_H */

