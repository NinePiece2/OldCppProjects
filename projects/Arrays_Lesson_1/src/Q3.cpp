#include "Q3.h"
#include<bits/stdc++.h>
using namespace std;

Q3::Q3()
{
    int age [20];
    int num = 0;
    for (int i=0; i<20; i++){
        cout<<"Enter age #"<<i+1<<": ";
        cin>>age[i];
        if (age[i]>15)
            num++;
    }

    cout<<"There are "<<num<<" people over the age of 15."<<endl;
}
