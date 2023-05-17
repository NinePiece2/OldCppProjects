/* a program that calculates and displays the number of kilometers per liter a car gets if it
travels 712.5 kilometers on a 70.3 liter tank of gas.*/

#include "Q6.h"
#include <iostream>
using namespace std;
#include <iomanip>

Q6::Q6()
{
    double distance, gas, literage;
    distance = 712.5;
    gas = 70.3;
    literage = distance/gas;

    cout<<"If you drive "<<distance<<" kilometers and use "<<gas<<" liters you will travel "<<setprecision(4)<<literage<<" kilomters/liter."<<endl;
}
