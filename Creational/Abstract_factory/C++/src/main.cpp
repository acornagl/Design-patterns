#include "airplaneLow.h"
#include <iostream>

using namespace std;

int main(){
    AirplaneLow *airplane = new AirplaneLow(1);
    airplane->setProperty("very very low!");
    airplane->toString();
    cout << "bea" << endl;
    return 1;
}
