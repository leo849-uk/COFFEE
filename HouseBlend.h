#ifndef __HOUSEBLEND_H
#define __HOUSEBLEND_H

#include "beverage.h"

class HouseBlend : public Beverage {
      public:
             HouseBlend();
             virtual void double cost();
      }
