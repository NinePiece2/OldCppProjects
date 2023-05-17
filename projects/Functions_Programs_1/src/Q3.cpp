#include "Q3.h"

#include<bits/stdc++.h>
using namespace std;

int avg(){
    int avg;
    cout<<"Enter your average mid term mark in C++ Programming: ";
    cin>>avg;
    return avg;
}

Q3::Q3()
{
    int average = avg();

    if (average>=65){
        cout<<"You are passing."<<endl;
    }
    else{
        cout<<"Hook up with a smart classmate and STUDY!"<<endl;
    }
}
