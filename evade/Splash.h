#ifndef SPLASH_H
#define SPLASH_H

#include "Game.h"

class Splash {
private:
  // states
  static void start_game(Process *me);
  static void get_ready(Process *me);

public:
  // initial state
  static void splash_process(Process *me);
};

#endif
