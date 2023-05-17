#include<bits/stdc++.h>
using namespace std;
#include "Q2.h"

double product (double x, double y){
    double p;
    p=x*y;
    return (p);
}

Q2::Q2()
{
    double x, y;
    cout<<"Please enter two numbers seperated by a space: ";
    cin>>x>>y;

    cout<<"The product of "<<x<<" and "<<y<<" is "<<product(x,y)<<endl;
}
