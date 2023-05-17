#include "Q4.h"
#include <iostream>
using namespace std;
#include <iomanip>

Q4::Q4()
{
    int n;
    int m;
    double a, b, c, d;

    cout<<"Enter  the first integer: ";
    cin>>n;
    cout<<"Enter  the second integer: ";
    cin>>m;

    a=n/m;
    b=n%m;

    c=m/n;
    d=m%n;

    cout<<n<<" / "<<m<<" = "<<a<<endl;
    cout<<n<<" % "<<m<<" = "<<b<<endl;
    cout<<m<<" / "<<n<<" = "<<c<<endl;
    cout<<m<<" % "<<n<<" = "<<d<<endl;

}
