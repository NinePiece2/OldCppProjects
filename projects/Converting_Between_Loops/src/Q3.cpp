#include "Q3.h"
#include <bits/stdc++.h>
using namespace std;

Q3::Q3()
{
    int a,b;
    int sum=0;
    cout<<"Enter number a"<<endl;
    cin>>a;
    cout<<"Enter number b"<<endl;
    cin>>b;

    int num=a;
    do{
        sum=sum+num;
        num++;
    }
    while(num<=b);

    cout<<"The sum= "<<sum<<endl;

    sum=0;
    for (int i = a; i<=b; i++){
        sum+=i;
    }

    cout<<"The sum= "<<sum<<endl;

    sum=0;
    while(a<=b){
        sum+=a;
        a++;
    }

    cout<<"The sum= "<<sum<<endl;
}
