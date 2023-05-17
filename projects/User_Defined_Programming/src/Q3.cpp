#include "Q3.h"
#include<bits/stdc++.h>
using namespace std;

void turkey (){
    cout<<""<<endl;
    cout<<"             .-\"\"\"\"\"\"\"-."<<endl;
    cout<<"            {      _____}---. .-."<<endl;
	cout<<"           {      /          (  o\\"<<endl;
    cout<<"          {      /            \\ \\V"<<endl;
    cout<<"          {     |             _\\ \\."<<endl;
    cout<<"           {    |            / '-' \\"<<endl;
    cout<<"            {___\\   /\\______/    __/"<<endl;
    cout<<"                 ~~/   /    /____//"<<endl;
    cout<<"                   '--'\\___/ \\___/"<<endl;
    cout<<"                           '\\_ \\_"<<endl;
    cout<<"                            /\\ /\\"<<endl;
}

void bug(){
    cout<<""<<endl;
    cout<<"         \\   / "<<endl;
    cout<<"         .\\-/. "<<endl;
    cout<<"     /\\  () ()  /\\ "<<endl;
    cout<<"    /  \\ /~-~\\ /  \\ "<<endl;
    cout<<"        y  Y  V "<<endl;
    cout<<"  ,-^-./   |   \\,-^-."<<endl;
    cout<<" /    {    |    }    \\"<<endl;
    cout<<"       \\   |   / "<<endl;
    cout<<"       /\\  A  /\\ "<<endl;
    cout<<"      /  \\/ \\/  \\ "<<endl;
    cout<<"     /           \\"<<endl;
}

Q3::Q3()
{
    int turkeyNum, bugNum;
    char no, go, no2;

    do{
        no = 'g';
        no2 = 'g';
        while (no=='g'){
            turkeyNum = 0;

            cout<<"Enter the amount of turkeys you would like displayed: ";
            cin>>turkeyNum;
            if (turkeyNum<1){
                no = 'g';
            }
            else{
                no = 'n';
            }
        }
        for (int i=1; i<=turkeyNum; i++){
            turkey();
        }

        while (no2=='g'){
            bugNum = 0;

            cout<<"Enter the amount of bugs you would like displayed: ";
            cin>>bugNum;

            if (bugNum<1){
                no2 = 'g';
            }
            else{
                no2 = 'n';
            }
        }

        for (int g=1; g<=bugNum; g++){
            bug();
        }

        cout<<"Would you like to run the program again? (y/n): ";
        cin>>go;
    }
    while (go=='y'||go=='Y');



}
