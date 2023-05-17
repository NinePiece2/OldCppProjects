#include "Q1.h"
#include <bits/stdc++.h>
using namespace std;

Q1::Q1()
{
    int total = 0;
    for(int i=2; i<101; i=i+2)
        total = total + i;

    // Display the result.
    cout<<"The total of the even numbers from 2 to 100 is "<<total<<endl;

    total = 0;
    int i = 2;
    while(i<=100){
        total+=i;
        i+=2;
    }

    // Display the result.
    cout<<"The total of the even numbers from 2 to 100 is "<<total<<endl;

    total = 0;
    i = 0;
    do{
        total+=i;
        i+=2;
    }
    while(i<=100);

    // Display the result.
    cout<<"The total of the even numbers from 2 to 100 is "<<total<<endl;
}
