#include "Q1.h"
#include<bits/stdc++.h>
using namespace std;

Q1::Q1()
{
    int finalGrade [5];
    double avg = 0;
    double sum = 0;
    cout<<"Enter the 5 grades: ";
    for (int i=0; i<5; i++){
        cin>>finalGrade[i];
    }

    for (int g=0; g<5; g++){
        sum+=finalGrade[g];
    }

    avg = sum/5;

    cout<<fixed<<setprecision(1)<<"Your average was "<<avg<<endl;
}
