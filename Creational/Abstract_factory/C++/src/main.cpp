#include "concreteProducerSlow.h"
#include "concreteProducerFast.h"
#include "abstractTrains.h"
#include "abstractAirplanes.h"
#include <iostream>

using namespace std;

/*
 * Main procedure:
 * It is intended as the client object in the design pattern, it shows the 
 * creation of two different object typologies in accordance with Abstract
 * Factory pattern.
 */
int main(){
    cout << "******* Main execution *******" << endl;
    ConcreteProducerSlow slowProducer;
    AbstractTrains* train = slowProducer.createTrain(1,"i'm the first slow train");
    cout << " - First produced product is : " << train->toString() << endl;
    
    ConcreteProducerFast fastProducer;
    AbstractAirplanes* fAirplane = fastProducer.createAirplane(2,"i'm the first fast airplane");
    cout << " - Second produced product is : " << fAirplane->toString() << endl;
    cout << "******* End execution *******" << endl;
    return 0;
}
