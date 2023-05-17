#include "Q2.h"
#include<bits/stdc++.h>
using namespace std;

double redCost(int gallons){
    return gallons*21.95;
}

double greenCost(int gallons){
    return gallons*19.95;
}

void storeName(){
cout<<"  _____        _              _____      _       _      _____ _                 "<<endl;
cout<<" |  __ \       | |            |  __ \    (_)     | |    / ____| |                "<<endl;
cout<<" | |  | |_   _| |_   ___  __ | |__) |_ _ _ _ __ | |_  | (___ | |_ ___  _ __ ___ "<<endl;
cout<<" | |  | | | | | | | | \ \/ / |  ___/ _' | | '_ \| __|  \___ \| __/ _ \| '__/ _ |"<<endl;
cout<<" | |__| | |_| | | |_| |>  <  | |  | (_| | | | | | |_   ____) | || (_) | | |  __/"<<endl;
cout<<" |_____/ \__,_|_|\__,_/_/\_\ |_|   \__,_|_|_| |_|\__| |_____/ \__\___/|_|  \___|"<<endl;
}

double total(double redCost,double greenCost){
    return redCost + greenCost;
}

double HST(double total){
    return total*1.13;
}

void thanks(){
    cout<<"Thank you for choosing The Dulux Paint Store \nPlease come again!"<<endl;
}

Q2::Q2()
{
    char restart = 'z';
    int redGallon = 0, greenGallon = 0, amt;
    string in;

    cout<<"This program was written by Romit Sagu.\n"<<setfill('*')<<setw(10)<<endl;
    cout<<setw(50)<< setfill('*')<<'\n';
    cout<<"*The Dulux Paint Store only sells Red, Magenta, Black and Green paint"<<endl;
    cout<<setw(50)<< setfill('*')<<'\n';

    cout<<"Enter the paint colour would you like to purchase: ";
    cin>>in;
    cout<<"Enter the amount of paint would you like to purchase in gallons: ";
    cin>>amt;

    if (in.compare("red")==0||in.compare("Red")==0)
        redGallon+=amt;
    else if (in.compare("green")==0||in.compare("Green")==0)
        greenGallon+=amt;
    else
        cout<<"Sorry! We don't have that color in stock!"<<endl;

    cout<<"State if you like to add more or remove items?(y/n) :";
    cin>>in;
    if (in.compare("n")==0||in.compare("N")==0)
        restart='n';

    while (restart!='n'){

        cout<<"Enter the paint colour would you like to purchase: ";
        cin>>in;
        cout<<"Enter the amount of paint would you like to purchase in gallons (use -ve numbers so subtract the amt of paint): ";
        cin>>amt;

        if (in.compare("red")==0||in.compare("Red")==0)
            redGallon+=amt;
        else if (in.compare("green")==0||in.compare("Green")==0)
            greenGallon+=amt;
        else
            cout<<"Sorry! We don't have that color in stock!"<<endl;

        cout<<"State if you like to add more or remove items?(y/n) :";
        cin>>in;
        if (in.compare("n")==0||in.compare("N")==0)
            restart='n';
    }

    cout<<setw(50)<< setfill('*')<<'\n';
    storeName();
    cout<<setw(50)<< setfill('*')<<'\n';
    thanks();
    cout<<fixed<<setprecision(2)<<"Red Paint: "<<redCost(redGallon)<<endl;
    cout<<"Green Paint: "<<greenCost(greenGallon)<<endl;
    cout<<"Total: "<<total(redCost(redGallon),greenCost(greenGallon))<<endl;
    cout<<"Total + HST: "<<HST(total(redCost(redGallon),greenCost(greenGallon)))<<endl;


}
