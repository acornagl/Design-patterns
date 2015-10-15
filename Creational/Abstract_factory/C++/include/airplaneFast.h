#ifndef AIRPLANE_FAST_H
#define AIRPLANE_FAST_H

#include "abstractAirplanes.h"

// Class that represents an instance of a concrete product (Fast typology)
class AirplaneFast: public AbstractAirplanes{
public:
    // Constructor
    AirplaneFast(int i);
    
    // Procedure to set the object property field
    virtual void setProperty(string property);
    
    // Function that stringfies the object
    virtual string toString();
    
private:
    string property;
    int id;
};

#endif
