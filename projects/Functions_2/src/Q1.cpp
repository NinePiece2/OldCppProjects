#include<bits/stdc++.h>
using namespace std;
#include "Q1.h"

void hello(string name){
    cout<<"Hello, "<<name<<endl;
}

Q1::Q1()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    hello(name);
}
