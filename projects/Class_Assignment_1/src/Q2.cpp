/*Circle Area program
Calculates the area of a circle using the formula A=pi * r * r
Created February, 2020 */

/*Errors: Missing Library
          Quotes arround endl;
          c in cout should not be capatailzed
          The main code should not be commented out
          Missing class starter in this I used Q2::Q2().
          */

#include "Q2.h"
#include <iostream>
using namespace std;

Q2::Q2()
{

    cout << "-Calculate the area of a circle-" << endl;
    cout << endl;
    cout << "Radius = " << 10 << endl;
    cout << "Area = " << (3.14*10*10) << endl;

}
