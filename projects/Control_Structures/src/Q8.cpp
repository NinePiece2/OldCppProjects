#include "Q8.h"
#include <bits/stdc++.h>
using namespace std;

Q8::Q8()
{
    int n,total = 0;
    int m;
    double avg;

    do{
       cout<<"Enter a grade (0 to stop and calc the average): ";
       cin>>m;
       if (m!=0){
            total+=m;
            n++;
       }
    }
    while(m!=0);

    avg = total/n;
    cout<<fixed<<setprecision(1)<<avg<<endl;
}
