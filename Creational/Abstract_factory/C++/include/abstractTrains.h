#ifndef ABSTRACT_TRAINS_H
#define ABSTRACT_TRAINS_H

#include <iostream>
using namespace std;

/*
 * This is an abstract class and it represents a Client's product
 */
class AbstractTrains {
public:
    // Pure virtual methods to make AbstractAirplanes class an abstract class
    virtual void setProperty(string property) = 0;
    
    virtual string toString() = 0;
};

#endif
