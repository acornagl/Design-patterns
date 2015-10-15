#ifndef ABSTRACT_AIRPLANES_H
#define ABSTRACT_AIRPLANES_H

#include <iostream>
using namespace std;

/*
 * This is an abstract class and it represents a Client's product
 */
class AbstractAirplanes {
public:
    // Pure virtual method to make AbstractAirplanes class an abstract class
    virtual void setProperty(string property) = 0;
    
    virtual string toString() = 0;
};

#endif
