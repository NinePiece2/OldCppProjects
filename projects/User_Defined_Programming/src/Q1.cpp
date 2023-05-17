#include "Q1.h"
#include<bits/stdc++.h>
using namespace std;

void addRoof(){
    cout<<"    /\\"<<endl;
    cout<<"   /  \\"<<endl;
    cout<<"  /    \\"<<endl;
    cout<<" /      \\"<<endl;
    cout<<" --------"<<endl;
}

void addBase(){
    cout<<" |      |"<<endl;
    cout<<" |      |"<<endl;
    cout<<" |      |"<<endl;
    cout<<" --------"<<endl;
}

void addWalk(){
    cout<<"    **"<<endl;
    cout<<"    ***********"<<endl;
}

Q1::Q1()
{
    addRoof();
    addBase();
    addWalk();
}
