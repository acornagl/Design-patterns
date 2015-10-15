#include "trainFast.h"

TrainFast::TrainFast(int i){
    this-> id = i;
}

void TrainFast::setProperty(string property){
    this->property = property;
}

string TrainFast::toString(){
    string result = "A new FAST train has been created and its property is: ";
    result +=   this->property;
    
    return result;
}


