#include "Q5.h"
#include<bits/stdc++.h>
using namespace std;

Q5::Q5()
{
    int grades[10];
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    for (int i=0; i<10; i++){
        cout<<"Enter the grade of student "<<i+1<<": ";
        cin>>grades[i];
    }

    for (int g=0; g<10; g++){
        if(grades[g]>=0&&grades[g]<40)
            fCount++;
        else if (grades[g]>=40&&grades[g]<=49)
            dCount++;
        else if (grades[g]>=50&&grades[g]<=59)
            cCount++;
        else if (grades[g]>=60&&grades[g]<=79)
            bCount++;
        else if (grades[g]>=80&&grades[g]<=100)
            aCount++;
        else
            cout<<"Input #"<<g+1<<" is incorrect and was not used. Recomend: RESTART"<<endl;
    }

    cout<<""<<endl;
    cout<<"There are "<<aCount<<" As."<<endl;
    cout<<"There are "<<bCount<<" Bs."<<endl;
    cout<<"There are "<<cCount<<" Cs."<<endl;
    cout<<"There are "<<dCount<<" Ds."<<endl;
    cout<<"There are "<<fCount<<" Fs."<<endl;
}
