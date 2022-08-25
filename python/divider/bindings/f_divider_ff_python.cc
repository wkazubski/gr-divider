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
/* BINDTOOL_HEADER_FILE(f_divider_ff.h) */
/* BINDTOOL_HEADER_FILE_HASH(7012e6b8608addb53c52e0d9c80a69f6) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/divider/f_divider_ff.h>
// pydoc.h is automatically generated in the build directory
#include <f_divider_ff_pydoc.h>

void bind_f_divider_ff(py::module &m) {

  using f_divider_ff = ::gr::divider::f_divider_ff;

  py::class_<f_divider_ff, gr::sync_block, gr::block, gr::basic_block,
             std::shared_ptr<f_divider_ff>>(m, "f_divider_ff", D(f_divider_ff))

      .def(py::init(&f_divider_ff::make), py::arg("count"),
           D(f_divider_ff, make))

      .def("k", &f_divider_ff::k, D(f_divider_ff, k))

      .def("set_k", &f_divider_ff::set_k, py::arg("k"), D(f_divider_ff, set_k))

      ;
}
