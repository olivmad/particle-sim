#pragma once

#include <string>
#include <fstream>
#include "vec.h"
#include "json.hpp"
#include <vector>


using std::string;
using nlohmann::json;

int get_settings();
namespace config {
  // constants
  const string displayconfig_location = "../config/display.json";
  const string simconfig_location = "../config/simulation.json";
  // to be set by get_settings()
  unsigned int        target_fps           = 0;
  vec2<unsigned int>  window_size          = {0, 0};
  string              window_name          = "";
  vec2<unsigned int>  sim_size             = {0, 0};
  vec2<int>           gravity              = {0, 0};
  int                 heat_exp_mult        = 0;
  int                 default_temperature  = 0;
}