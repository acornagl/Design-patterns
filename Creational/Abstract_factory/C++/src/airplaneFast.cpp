#include "airplaneFast.h"

AirplaneFast::AirplaneFast(int i){
    this-> id = i;
}

void AirplaneFast::setProperty(string property){
    this->property = property;
}

string AirplaneFast::toString(){
    string result = "A new FAST airplane has been created and its property is: ";
    result +=   this->property;
    
    return result;
}


