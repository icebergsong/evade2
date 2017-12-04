#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include "Game.h"

class ObjectManager {
public:
  static void init();
  static void run();
#ifdef SMART_ERASE
  static void erase();
#endif
public:
  static Object *alloc();
  static void free(Object *o);

public:
  // return 1st object in active list
  static Object *first();
};
#endif
