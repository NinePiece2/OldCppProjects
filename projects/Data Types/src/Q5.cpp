#include "Q5.h"
#include <iostream>
using namespace std;

Q5::Q5()
{
    double rate, initalAmt, years, money, r;

    cout<<"Enter the interest rate, the principal amount and the time in years: ";
    cin>>rate>>initalAmt>>years;

    r= rate/100;
    money=initalAmt*(1+r*years);

    cout<<"If you borrow "<<initalAmt<<", after "<<years<<" years you will owe $"<<money<<"."<<endl;
}
