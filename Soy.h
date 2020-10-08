  
#ifndef SOY_H
#define SOY_H

#include "beverage.h"
#include "condimentdecorator.h"

class StrawberryJuice : public CondimentDecorator {
public:
    StrawberryJuice(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif
