#include "airplaneSlow.h"

AirplaneSlow::AirplaneSlow(int i){
    this-> id = i;
}

void AirplaneSlow::setProperty(string property){
    this->property = property;
}

string AirplaneSlow::toString(){
    string result = "A new SLOW airplane has been created and its property is: ";
    result +=   this->property;
    
    return result;
}


