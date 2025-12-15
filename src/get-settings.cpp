#include "settings.h"

#include <string>
#include <fstream>
#include "json.hpp"
#include "vec.h"

using std::string;
using nlohmann::json;

int get_settings(){
  std::ifstream file;
  json j;
  file.open(config::displayconfig_location);
  if(!file){return 1;}
  j << file; // reading display.json
  
  { // window size
    config::window_size.x = j["window size"]["x"];
    config::window_size.y = j["window size"]["y"];
  }
  config::window_name = j["window name"]; // window title
  config::target_fps = j ["target FPS"];  // Target FPS

  file.open(config::simconfig_location);
  if(!file){return 1;}
  j << file; // reading simulation.json

  { // simulation size
    config::sim_size.x = j["simulation size"]["x"];
    config::sim_size.y = j["simulation size"]["y"];
  }
  { // gravity
    config::gravity.x = j["gravity"]["x"];
    config::gravity.y = j["gravity"]["y"];
  }
  config::heat_exp_mult = j["heat expansion multiplier"]; // heat expansion multiplier
  config::default_temperature = j["default temperature"]; // default temperature

  return 0;
}