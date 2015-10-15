#include "concreteProducerSlow.h"
#include "trainSlow.h"
#include "airplaneSlow.h"

TrainSlow* ConcreteProducerSlow::createTrain(int id, string property){
   TrainSlow* slowTrain = new TrainSlow(id);
   
   slowTrain->setProperty(property);
   
   return slowTrain;
}

AirplaneSlow* ConcreteProducerSlow::createAirplane(int id, string property){
   AirplaneSlow* slowAirplane = new AirplaneSlow(id);
   
   slowAirplane->setProperty(property);
   
   return slowAirplane;
}
