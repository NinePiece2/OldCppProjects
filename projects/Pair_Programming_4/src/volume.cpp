/*
Filename: volume.cpp
Description: A program that inputs the mass, in grams, and density, in grams per cubic centimeters, and
outputs the volume of the object using the formula: density = mass / volume.

Pseudocode:
1.Import Libraries
2.Declare variables (density, mass, volume)
3.Ask the user for the density and mass
4.Get the density and mass
5.Calculate the volume using (volume=mass/density)
6.Outputs the volume to the user.
*/

#include "volume.h"//Import Libraries
#include <iomanip>
#include <iostream>
using namespace std;

volume::volume()
{
    double density, mass, volume; //Declare variables

    cout<<"What is the density (grams per cubic centimeters): "; //Ask the user for the density and mass then get the density and mass
    cin>>density;
    cout<<"What is the mass (grams): ";
    cin>>mass;

    volume=mass/density; //Calculates the volume

    cout<<"\nThe volume is "<<fixed<<showpoint<<setprecision(2)<<volume<<" cm^3"<<endl; //Outputs the volume to the user
}
