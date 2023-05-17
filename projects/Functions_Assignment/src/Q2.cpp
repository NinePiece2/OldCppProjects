#include "Q2.h"

#include<bits/stdc++.h>
using namespace std;

double circleArea(double rad){
    double area = rad*rad*M_PI;
    return area;
}

double circleCirc(double rad){
    double circ = 2*rad*M_PI;
    return circ;
}

Q2::Q2()
{
    double radius;

    cout<<"Enter the radius of a cicle: ";
    cin>>radius;

    cout<<"The area of a circle with a radius of "<<radius<<" is "<<fixed<<setprecision(1)<<circleArea(radius)<<" units squared."<<endl;

    cout<<"The circumference of a circle with a radius of "<<radius<<" is "<<fixed<<setprecision(1)<<circleCirc(radius)<<" units."<<endl;
}
