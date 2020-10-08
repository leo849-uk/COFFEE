#ifndef WHIP_H
#define WHIP_H

#include "beverage.h"
#include "condimentdecorator.h"


class Whiskey : public CondimentDecorator
{
public:
    Whiskey(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif
