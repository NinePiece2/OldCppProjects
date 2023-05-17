#include "Q2.h"
#include <iostream>
using namespace std;

Q2::Q2()
{
    double x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    if (x==y){
        cout<<"They are both equal."<<endl;
    }
    else{
        cout<<"They are not equal."<<endl;
    }
}
