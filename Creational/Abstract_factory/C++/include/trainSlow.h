#ifndef TRAIN_SLOW_H
#define TRAIN_SLOW_H

#include "abstractTrains.h"

// Class that represents an instance of a concrete product (Slow typology)
class TrainSlow: public AbstractTrains{
public:
    // Constructor
    TrainSlow(int i);
    
    // Procedure to set the object property field
    virtual void setProperty(string property);
    
    // Function that stringfies the object
    virtual string toString();
    
private:
    string property;
    int id;
};

#endif
