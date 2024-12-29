#include <iostream>
#include "headers/CGlinder.h"
#include "headers/CAirplane.h"
#include "headers/CAircraftFactory.h"

using namespace std;

int main() {
    CAircraftFactory factory;
    CAircraft *temp;
    CGlinder glider("George", 2,2,1200.3);
    CAirplane airplane("Marcel", 1,2,100.45);
    cout<<"Counter: "<<CAircraft::GetCounter()<<endl;
    cout<<glider;
    cout<<airplane;

    temp = factory.CreateAircraft(1,11);


    return 0;
}
