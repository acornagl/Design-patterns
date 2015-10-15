#ifndef TRAIN_FAST_H
#define TRAIN_FAST_H

#include "abstractTrains.h"

// Class that represents an instance of a concrete product (Fast typology)
class TrainFast: public AbstractTrains{
public:
    // Constructor
    TrainFast(int i);
    
    // Procedure to set the object property field
    virtual void setProperty(string property);
    
    // Function that stringfies the object
    virtual string toString();
private:
    string property;
    int id;
};

#endif
