#include "trainSlow.h"

TrainSlow::TrainSlow(int i){
    this-> id = i;
}

void TrainSlow::setProperty(string property){
    this->property = property;
}

string TrainSlow::toString(){
    string result = "A new SLOW train has been created and its property is: ";
    result +=   this->property;
    
    return result;
}


