# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

########################################################################
# Check if there is C++ code at all
########################################################################
if(NOT divider_sources)
    MESSAGE(STATUS "No C++ sources... skipping python bindings")
    return()
endif(NOT divider_sources)

########################################################################
# Check for pygccxml
########################################################################
GR_PYTHON_CHECK_MODULE_RAW(
    "pygccxml"
    "import pygccxml"
    PYGCCXML_FOUND
    )

include(GrPybind)

########################################################################
# Python Bindings
########################################################################

list(APPEND divider_python_files
    python_bindings.cc)

GR_PYBIND_MAKE_OOT(divider
   ../../..
   gr::divider
   "${divider_python_files}")

# copy bindings extension for use in QA test module
add_custom_command(TARGET divider_python POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:divider_python>
    ${CMAKE_BINARY_DIR}/test_modules/divider/
)

install(TARGETS divider_python DESTINATION ${GR_PYTHON_DIR}/divider COMPONENT pythonapi)