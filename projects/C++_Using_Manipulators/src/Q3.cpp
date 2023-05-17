#include "Q3.h"
#include <iostream>
using namespace std;
#include <iomanip>

Q3::Q3()
{
    double pi = 3.14159265359;
    cout.setf(ios::fixed);

    cout.width(9);
    cout<<setprecision(1)<<pi<<endl;
    cout.width(9);
    cout<<setprecision(2)<<pi<<endl;
    cout.width(9);
    cout<<setprecision(3)<<pi<<endl;
    cout.width(9);
    cout<<setprecision(4)<<pi<<endl;
    cout.width(9);
    cout<<setprecision(5)<<pi<<endl;
    cout.width(9);
    cout<<setprecision(6)<<pi<<endl;
    cout.width(9);
    cout<<setprecision(7)<<pi<<endl;


}
