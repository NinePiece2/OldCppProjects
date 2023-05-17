#include "Q2.h"
#include <iostream>
using namespace std;

string name;
int age;
string address;
int phone;


Q2::Q2()
{

    string name;
    int age;
    string address;
    int phone;

    cout<<"Enter your Name:"<<endl;
    getline(cin, name);
    cout<<"Enter your Age:"<<endl;
    cin>>age;
    cin.ignore();
    cout<<"Enter your Address:"<<endl;
    getline(cin, address);
    cout<<"Enter your Phone Number:"<<endl;
    cin>>phone;

    cout<<"Your name is: "<<name<<endl;
    cout<<"Your age is: "<<age<<endl;
    cout<<"Your phone number is: "<<phone<<endl;
    cout<<"Your age address is: "<<address<<endl;
}
