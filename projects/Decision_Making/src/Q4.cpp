#include "Q4.h"
#include <iostream>
#include <iomanip>
using namespace std;

Q4::Q4()
{
    int markA, markB, markC;
    double avg;

    cout<<"Enter the marks of 3 subjects: ";
    cin>>markA>>markB>>markC;

    avg = (markA+markB+markC)/3;

    if (avg>80){
        cout<<"You are above standard."<<endl;
        cout<<"Admission Granted"<<endl;
    }
}
