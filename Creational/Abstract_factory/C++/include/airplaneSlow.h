#ifndef AIRPLANE_SLOW_H
#define AIRPLANE_SLOW_H

#include "abstractAirplanes.h"

// Class that represents an instance of a concrete product (Slow typology)
class AirplaneSlow: public AbstractAirplanes{
public:
    // Constructor
    AirplaneSlow(int i);
    
    // Procedure to set the object property field
    virtual void setProperty(string property);
    
    // Function that stringfies the object
    virtual string toString();
private:
    string property;
    int id;
};

#endif
