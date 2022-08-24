#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# Copyright 2020 Wojciech Kazubski.
#
# This is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

from gnuradio import gr, gr_unittest
from gnuradio import blocks

class qa_f_divider_bb(gr_unittest.TestCase):

    def setUp(self):
        self.tb = gr.top_block()

    def tearDown(self):
        self.tb = None

    def test_001_t(self):
        src_data = (1, 0, 1, 0, 1, 0, 1, 0, 0, 0)
        expected_result = (0, 1, 1, 0, 0, 1, 1, 0, 0, 0)
        src = blocks.vector_source_f(src_data)
        sqr = divider.f_divider_bb(2)
        dst = blocks.vector_sink_f()
        self.tb.connect(src, sqr)
        self.tb.connect(sqr, dst)
        self.tb.run()
        result_data = dst.data()
        self.assertFloatTuplesAlmostEqual(expected_result, result_data, 6)

    def test_002_t(self):
        src_data = (1, 0, 1, 0, 1, 0, 0, 0)
        expected_result = (0, 1, 1, 1, 0, 0, 0, 0)
        src = blocks.vector_source_f(src_data)
        sqr = divider.f_divider_bb(3)
        dst = blocks.vector_sink_f()
        self.tb.connect(src, sqr)
        self.tb.connect(sqr, dst)
        self.tb.run()
        result_data = dst.data()
        self.assertFloatTuplesAlmostEqual(expected_result, result_data, 6)


if __name__ == '__main__':
    gr_unittest.run(qa_f_divider_bb)
