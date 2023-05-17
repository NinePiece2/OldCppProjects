#include "Q2.h"
#include<bits/stdc++.h>
using namespace std;

void addRoof1(int h){
    for (int i=1; i<=h; i++){
        cout<<"    /\\    ";
    }
    cout<<""<<endl;

    for (int i=1; i<=h; i++){
        cout<<"   /  \\   ";
    }
    cout<<""<<endl;

    for (int i=1; i<=h; i++){
        cout<<"  /    \\  ";
    }
    cout<<""<<endl;

    for (int i=1; i<=h; i++){
        cout<<" /      \\ ";
    }
    cout<<""<<endl;

    for (int i=1; i<=h; i++){
        cout<<" -------- ";
    }
    cout<<""<<endl;

}

void addBase1(int h){
    for (int g=1; g<=3; g++){
        for (int i=1; i<=h; i++){
            cout<<" |      | ";
        }
        cout<<""<<endl;
    }

    for (int i=1; i<=h; i++){
        cout<<" -------- ";
    }
    cout<<""<<endl;
}

void addWalk1(int h){
    for (int i=1; i<=h; i++){
        cout<<"    **    ";
    }
    cout<<""<<endl;

    for (int i=1; i<=h; i++){
    cout<<"**********";
    }
    cout<<""<<endl;

}

Q2::Q2()
{
    int house;
    char go, no;
    no = 'g';
    do{
        house = 0;
        no = 'g';
        while (no=='g'){
        cout<<"Enter the number of houses you want printed: ";
        cin>>house;

        if (house<1){
            no = 'g';
        }
        else{
            no = 'n';
        }
    }

    addRoof1(house);
    addBase1(house);
    addWalk1(house);

    cout<<"Would you like to run the program again? (y/n): ";
    cin>>go;

    }
    while(go=='y'||go=='Y');

}
