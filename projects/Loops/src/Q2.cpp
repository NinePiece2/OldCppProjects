#include "Q2.h"
#include <bits/stdc++.h>
using namespace std;

Q2::Q2()
{
    int sum1=0;
    int n1;
    for(int i=0; i<=4; i++){
        cout<<"Enter a number"<<endl;
        cin>>n1;
        sum1=sum1+n1;
        }
    cout<<"The sum = "<<sum1<<endl;
}
