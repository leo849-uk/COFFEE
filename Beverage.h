#ifndef __BEVERAGE_H
#define __BEVERAGE_H

class Beverage {
      protected: 
                 char *descripiton;
      public:
             Beverage();
             virtual char* getDesription();
             virtual double cost() = 0;
      };
#endif
