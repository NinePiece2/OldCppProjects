#include "Q1.h"
#include<bits/stdc++.h>
using namespace std;

void FindDigits(int num){
    int first,second,third;

    first=num/100; // Calculates the first, second and third digit
    second=(num-(first*100))/10;
    third= num-(first*100)-(second*10);

    cout<<"The first digit is: "<<first<<endl; // Tells the user the first, second and their digit and their sum
    cout<<"The second digit is: "<<second<<endl;
    cout<<"The third digit is: "<<third<<endl;
}

Q1::Q1()
{
    int num;
    cout<<"Enter a three digit number: "; //Ask the user for a 3 digit number
    cin>>num;

    FindDigits(num);
}
