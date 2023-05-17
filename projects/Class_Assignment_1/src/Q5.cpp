/* A program that calculates and displays the area and perimeter of a rectangle with length
and width inputted from the user.*/

#include "Q5.h"
#include <iostream>
using namespace std;

Q5::Q5()
{
    int length, width, area, perimeter;

    cout<<"Enter the length and width of a rectangle: ";
    cin>>length>>width;

    area = length*width;
    perimeter = 2*(length+width);

    cout<<"\nThe area of the rectangle is "<<area<<" units"<<endl;
    cout<<"The perimeter of the rectangle is "<<perimeter<<" units squared"<<endl;
}
