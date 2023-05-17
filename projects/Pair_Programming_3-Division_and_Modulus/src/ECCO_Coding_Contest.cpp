/**
Filename: ECCO_Coding_Contest.cpp
Description: Asks the user for the amount of players there are and divides them up into 5 player
teams and states the amount of people left over.

Pseudocode:
Import Libraries
Declare Variables, players, teams, leftOver
Ask the user for the number of players
Get players
Calculate the amount of 5 player teams
And left over players
Tell the user the calculations

*/

#include "ECCO_Coding_Contest.h" //Import Libraries
#include <iostream>
using namespace std;

ECCO_Coding_Contest::ECCO_Coding_Contest()
{
    int players, teams, leftOver; //Declare Variables

    cout<<"Enter the number of players: "; //Ask the user for the number of players
    cin>>players; //Get players

    teams = players/5; //Calculate the amount of 5 player teams and left over players
    leftOver = players%5;

    cout<< "There will be "<<teams<<" teams of 5 with "<<leftOver<<" players leftover."<<endl; //Tell the user the calculations
}
