#ifndef PRODUCER_ABSTRACT_FACTORY_H
#define PRODUCER_ABSTRACT_FACTORY_H

#include "abstractTrains.h"
#include "abstractAirplanes.h"

// Abstract class that allows to realize the abstract factory pattern.
// From this class will derived the concrete object producers
class ProducerAbstractFactory {
public: 
   virtual AbstractTrains*    createTrain(int id, string property) = 0;
   virtual AbstractAirplanes* createAirplane(int id, string property) = 0;
};

#endif
