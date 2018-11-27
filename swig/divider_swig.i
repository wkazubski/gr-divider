/* -*- c++ -*- */

#define DIVIDER_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "divider_swig_doc.i"

%{
#include "divider/f_divider_ff.h"
#include "divider/f_divider_bb.h"
#include "divider/f_divider_ii.h"
#include "divider/f_divider_ss.h"
%}


%include "divider/f_divider_ff.h"
GR_SWIG_BLOCK_MAGIC2(divider, f_divider_ff);
%include "divider/f_divider_bb.h"
GR_SWIG_BLOCK_MAGIC2(divider, f_divider_bb);
%include "divider/f_divider_ii.h"
GR_SWIG_BLOCK_MAGIC2(divider, f_divider_ii);
%include "divider/f_divider_ss.h"
GR_SWIG_BLOCK_MAGIC2(divider, f_divider_ss);
