#include "Q4.h"
#include <iostream>
using namespace std;

Q4::Q4()
{
    int sec, s, m, h;
    cout<<"Enter time in seconds: ";
    cin>>sec;
    h=sec/3600;
    sec=sec%3600;
    m=sec/60;
    s=sec%60;

    cout<<"HH-MM-SS = "<<h<<":"<<m<<":"<<s<<endl;
}
