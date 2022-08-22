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
/* BINDTOOL_HEADER_FILE(f_divider_ii.h) */
/* BINDTOOL_HEADER_FILE_HASH(6ffd49de66851cf53856e8510ebf6612) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <divider/f_divider_ii.h>
// pydoc.h is automatically generated in the build directory
#include <f_divider_ii_pydoc.h>

void bind_f_divider_ii(py::module &m) {

  using f_divider_ii = ::gr::divider::f_divider_ii;

  py::class_<f_divider_ii, gr::sync_block, gr::block, gr::basic_block,
             std::shared_ptr<f_divider_ii>>(m, "f_divider_ii", D(f_divider_ii))

      .def(py::init(&f_divider_ii::make), py::arg("count"),
           D(f_divider_ii, make))

      .def("k", &f_divider_ii::k, D(f_divider_ii, k))

      .def("set_k", &f_divider_ii::set_k, py::arg("k"), D(f_divider_ii, set_k))

      ;
}
