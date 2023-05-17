/* A program that inputs the distance traveled and the speed of a car. It calculates the time required to reach the
destination and display it.*/
#include "Q15.h"
#include <iostream>
using namespace std;
#include <iomanip>

Q15::Q15()
{
    double distance, speed, time;
    cout<<"Enter the distance to the location (in km) and the speed of the vehicle (in kph): ";
    cin>>distance>>speed;

    time = distance/speed;

    cout<<"You will reach the destination in "<<fixed<<setprecision(2)<<time<<" hours."<<endl;
}
