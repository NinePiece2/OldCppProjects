#include "Q1.h"
#include <iostream>
using namespace std;

Q1::Q1()
{
    double mark;
    cout<<"Enter a student's mark: ";
    cin>>mark;

    if(mark>=50){
        cout<<"pass"<<endl;
    }
    else {
        cout<<"fail"<<endl;
    }
}
