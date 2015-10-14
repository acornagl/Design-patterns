#include "airplaneLow.h"

void AirplaneLow::setProperty(string property){
    this->property = property;
}

string AirplaneLow::toString(){
    printf("This is a low airplane and its property is: %d", this->id);
}

AirplaneLow::AirplaneLow(int i){
    this-> id = i;
}
