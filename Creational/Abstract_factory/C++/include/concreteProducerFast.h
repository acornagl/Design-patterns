#ifndef CONCRETE_PRODUCER_FAST
#define CONCRETE_PRODUCER_FAST

#include "producerAbstractFactory.h"
#include "trainFast.h"
#include "airplaneFast.h"

#include <iostream>

// Class that implements the abstract class designed to create
// Fast typology objects in accordance with Abstract Factory
// design pattern
class ConcreteProducerFast : public ProducerAbstractFactory{
public:
   virtual TrainFast*    createTrain(int id, string property);
   virtual AirplaneFast* createAirplane(int id, string property);
}; 

#endif
