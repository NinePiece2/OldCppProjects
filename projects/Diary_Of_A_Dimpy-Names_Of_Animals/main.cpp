/*
Name: Romit Sagu
Date: 3/13/2020
Filename: main.cpp
Description: A program that will allow a young user to discover the names (and spellings) of animals with
unusual names.

Pseudocode:
1.Import Libraries
2.Declare Variables (message, letter)
3.Prompt the user to enter their name
4.Get their name
5.Show their name and give them instructions
6.Prompt the user to enter a letter (A, C, H, M, P, or W)
7.Get the letter
8.Check what letter was given and set up the appropriate message
9.Output the statement to the user
10.Ask the if they want to run the program again if so do it or else display their name and the name of the program.

*/

#include <bits/stdc++.h> //Import Libraries
using namespace std;

int main()
{
    char letter, restart; //Declare Variables
    string message, name;
    int incorrect = 0;

    cout<<right<<setw(55)<<"Names of Animals Software"<<endl; // Shows the title of the program and gets the person's name
    cout<<"Enter your name: ";
    getline(cin,name);

    do{
        letter = 'z'; // Resets the variables
        incorrect = 0;
        message = " ";
        restart = 'z';

        // Gives instructions the the user
        cout<<name<<", this program will allow you to investigate the names and spellings of unusual animals. The computer can offer you information on animal names beginning with the letters A, C, H, M, P, and W."<<endl;

        while (incorrect==0){

            cout<<"\nEnter one of the letters above: "; // Asks the user for a letter and gets it
            cin>>letter;

            switch(letter){ // Checks which output statement should be used and if the input is valid

            case 'A':
            case 'a':
                message = "Animals beginning with the letter 'A' include Anteater, Armadillo, and Aardvark.";
                incorrect = 1;
                break;
            case 'C':
            case 'c':
                message = "Animals beginning with the letter 'C' include Caribou, Chihuahua, and Clydesdale.";
                incorrect = 1;
                break;
            case 'H':
            case 'h':
                message = "Animals beginning with the letter 'H' include Hanoverian, Hippopotamus, and Hyena.";
                incorrect = 1;
                break;
            case 'M':
            case 'm':
                message = "Animals beginning with the letter 'M' include Manatee, Marmot, and Mongoose.";
                incorrect = 1;
                break;
            case 'P':
            case 'p':
                message = "Animals beginning with the letter 'P' include Panda, Platypus, and Porcupine.";
                incorrect = 1;
                break;
            case 'W':
            case 'w':
                message = "Animals beginning with the letter 'W' include Walrus, Warthog, and Whippet.";
                incorrect = 1;
                break;
            default:
                cout<<"Sorry, please enter an A, C, H, M, P, or W."<<endl;
                incorrect = 0;
            }
        }

        cout<<"\n"<<message<<endl; // Outputs the message

        while (((restart!='n')&&(restart!='y'))&&((restart!='N')&&(restart!='Y'))){ // Error checks the restart condition

            cout<<"\nWould you like to re-run the program (yes = y, no = n): "; // Checks if the user wants to restart the program
            cin>>restart;
            cout<<""<<endl;
            if (((restart!='n')&&(restart!='y'))&&((restart!='N')&&(restart!='Y')))
                cout<<"Enter either y or n"<<endl;
        }
    }
    while((restart=='y')||(restart=='Y')); // Restarts the main part of the code if necessary

    cout<<name<<", thank you for running the Names of Animals Software."<<endl; // Thanks the user when the program is done running

    return 0;
}
