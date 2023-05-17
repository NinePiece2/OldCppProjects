#include "Q6.h"
#include <bits/stdc++.h>
using namespace std;

Q6::Q6()
{
    int num, numbers;
    int sum=0;
    double avg;

    cout<<"Enter the number of numbers : ";
    cin>>num;
    cout<<"Enter numbers\n";

    for(int i=1; i<=num; i++){
        cin>>numbers;
        sum=sum+numbers;
    }

    avg=sum/num;
    cout<<"The sum = "<<sum<<endl;
    cout<<"The average = "<<avg<<endl;

}
