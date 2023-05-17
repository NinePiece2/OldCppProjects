#include "Q2.h"
#include <bits/stdc++.h>
using namespace std;

Q2::Q2()
{
    int total=0;
    int num=1;
    while(num<=100){
        total=total+num*num;
        num++;
    }

    cout<<"The sum = "<<total<<endl;

    total=0;
    for(int i = 1; i<=100; i++){
        total+=i*i;
    }

    cout<<"The sum = "<<total<<endl;

    int i = 0;
    total=0;

    do{
        total+=i*i;
        i++;
    }
    while(i<=100);

    cout<<"The sum = "<<total<<endl;
}
