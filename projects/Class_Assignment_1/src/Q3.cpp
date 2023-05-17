/* Modify the Circle Area program from Question- 2 to calculate and display the area of a circle
with radius 10 with the output formatted so that the radius and area appear on the same line,
clearly spaced. The program output should be similar to:
The area of a circle of radius 10 is 314
*/

#include "Q3.h"
#include <iostream>
using namespace std;

Q3::Q3()
{
    cout << "The area of a circle with a ";
    cout << "radius of " << 10;
    cout << " is " << (3.14*10*10) << endl;
}
