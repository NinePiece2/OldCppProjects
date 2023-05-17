#include "Q3.h"
#include <iostream>
using namespace std;

Q3::Q3()
{
    double x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    if (x*x==y){
        cout<<"The second number is a square of the first."<<endl;
    }
    else{
        cout<<"The second number is NOT a square of the first."<<endl;
    }
}
