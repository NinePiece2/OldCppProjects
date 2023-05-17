/* The Chemistry department has 4 computers, the Physics department has 8, the English department has 2, and the
Math lab has 12. Write a program that produces the following output.
Have the computer perform the calculation in the last line. Format the output using the
appropriate escape sequences.
Chemistry 4
Physics 8
English 2
Math lab 12
Grand Total 26*/

#include "Q14.h"
#include <iostream>
using namespace std;

Q14::Q14()
{
    int total, chem, phys, eng, math;

    chem = 4;
    phys = 8;
    eng = 2;
    math = 12;
    total = chem + phys + eng + math;

    cout<<"Chemistry";
    cout.width(7);
    cout<<chem<<endl;

    cout<<"Physics";
    cout.width(9);
    cout<<phys<<endl;

    cout<<"Math Lab";
    cout.width(8);
    cout<<math<<endl;

    cout<<"Grand Total:";
    cout.width(4);
    cout<<total<<endl;
}
