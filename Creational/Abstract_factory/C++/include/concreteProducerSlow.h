#ifndef CONCRETE_PRODUCER_SLOW
#define CONCRETE_PRODUCER_SLOW

#include "producerAbstractFactory.h"
#include "trainSlow.h"
#include "airplaneSlow.h"

#include <iostream>

// Class that implements the abstract class designed to create
// Slow typology objects in accordance with Abstract Factory
// design pattern
class ConcreteProducerSlow : public ProducerAbstractFactory{
public:
   virtual TrainSlow*    createTrain(int id, string property);
   virtual AirplaneSlow* createAirplane(int id, string property);
}; 

#endif
