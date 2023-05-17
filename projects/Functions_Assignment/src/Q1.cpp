#include "Q1.h"

#include<bits/stdc++.h>
using namespace std;

void circleArea(){
    double rad;

    cout<<"Enter the radius of a cicle: ";
    cin>>rad;

    double area = rad*rad*M_PI;

    cout<<"The area of a circle with a radius of "<<rad<<" is "<<fixed<<setprecision(1)<<area<<" units squared."<<endl;

}

void circleCirc(){
    double rad;

    cout<<"Enter the radius of a cicle: ";
    cin>>rad;

    double circ = 2*rad*M_PI;

    cout<<"The circumference of a circle with a radius of "<<rad<<" is "<<fixed<<setprecision(1)<<circ<<" units."<<endl;

}

Q1::Q1()
{
    circleArea();
    circleCirc();
}
