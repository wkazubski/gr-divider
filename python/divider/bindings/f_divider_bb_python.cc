/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(f_divider_bb.h) */
/* BINDTOOL_HEADER_FILE_HASH(bc600286b8e8317557e2a2f83778e638) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/divider/f_divider_bb.h>
// pydoc.h is automatically generated in the build directory
#include <f_divider_bb_pydoc.h>

void bind_f_divider_bb(py::module &m) {

  using f_divider_bb = ::gr::divider::f_divider_bb;

  py::class_<f_divider_bb, gr::sync_block, gr::block, gr::basic_block,
             std::shared_ptr<f_divider_bb>>(m, "f_divider_bb", D(f_divider_bb))

      .def(py::init(&f_divider_bb::make), py::arg("count"),
           D(f_divider_bb, make))

      .def("k", &f_divider_bb::k, D(f_divider_bb, k))

      .def("set_k", &f_divider_bb::set_k, py::arg("k"), D(f_divider_bb, set_k))

      ;
}
