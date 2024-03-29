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

#ifndef INCLUDED_DIVIDER_F_DIVIDER_SS_H
#define INCLUDED_DIVIDER_F_DIVIDER_SS_H

#include <gnuradio/divider/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace divider {

    /*!
     * \brief <+description of block+>
     * \ingroup divider
     *
     */
    class DIVIDER_API f_divider_ss : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<f_divider_ss> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of divider::f_divider_ss.
       *
       * To avoid accidental use of raw pointers, divider::f_divider_ss's
       * constructor is in a private implementation
       * class. divider::f_divider_ss::make is the public interface for
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

#endif /* INCLUDED_DIVIDER_F_DIVIDER_SS_H */

