#ifndef AIRPLANE_LOW_H
#define AIRPLANE_LOW_H

#include "abstractAirplanes.h"
#include "airplaneLow.h"

class AirplaneLow: public AbstractAirplanes{
public:
    AirplaneLow(int i);
    virtual void setProperty(string property);
    virtual string toString();
private:
    string property;
    int id;
};

#endif
