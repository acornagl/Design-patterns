#include "concreteProducerFast.h"
#include "abstractTrains.h"
#include "trainFast.h"
#include "airplaneFast.h"

TrainFast* ConcreteProducerFast::createTrain(int id, string property){
   TrainFast* fastTrain = new TrainFast(id);
   
   fastTrain->setProperty(property);
   
   return fastTrain;
}

AirplaneFast* ConcreteProducerFast::createAirplane(int id, string property){
   AirplaneFast* fastAirplane = new AirplaneFast(id);
   
   fastAirplane->setProperty(property);
   
   return fastAirplane;
}
