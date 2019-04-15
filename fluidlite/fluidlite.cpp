/*
  ==============================================================================

    fluidlite.cpp
    Created: 15 May 2018 2:13:23pm
    Author:  Chris Penny

    Credit to https://github.com/divideconcept/FluidLite

  ==============================================================================
*/

#if _WIN32
#pragma warning(push)
#pragma warning (disable : 4100 4244 4267 4305 4701 4702 4703 4706)
#endif


#include "fluidlite.h"

#include "src/fluid_chan.c"
#include "src/fluid_chorus.c"
#include "src/fluid_conv.c"
#include "src/fluid_defsfont.c"
#include "src/fluid_dsp_float.c"
#include "src/fluid_dsp_simple.c"
#include "src/fluid_gen.c"
#include "src/fluid_hash.c"
#include "src/fluid_list.c"
#include "src/fluid_mod.c"
#include "src/fluid_ramsfont.c"
#include "src/fluid_rev.c"
#include "src/fluid_settings.c"
#include "src/fluid_synth.c"
#include "src/fluid_sys.c"
#include "src/fluid_tuning.c"
#include "src/fluid_voice.c"
#include "src/fluidsynth.c"

#if _WIN32
#pragma warning(pop)
#endif