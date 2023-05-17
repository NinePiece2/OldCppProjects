#include "Q1.h"
#include<bits/stdc++.h>
using namespace std;

Q1::Q1()
{
    int sum [11];

    for (int i=0; i<10; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>sum[i];
    }

    for (int g=0; g<10; g++){
        sum[10]+=sum[g];
    }

    cout<<"The sum of the numbers are "<<sum[10]<<endl;
}
