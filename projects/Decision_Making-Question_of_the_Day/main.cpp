/*
Name: Romit Sagu
Date: 3/5/2020
Filename: main.cpp
Description: Costco supermarket awards coupons depending on how much a customer spends on groceries. For example,
if you spend $50, you will get a coupon worth ten percent of that amount. The following table shows the percent
used to calculate the coupon awarded for different amounts spent. Write a program that calculates and prints
the value of the coupon a person can receive based on groceries purchased.

Coupon Percentages:

Less Than $10: N/A%
From $10 to $60: 8%
More than $60 to $150: 10%
More than $150 to $210 :12%
More than $210: 14%
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double cost, discount, discountPrice, amountDue;

    cout<<"Enter the cost of your purchase: ";
    cin>>cost;

    if((cost>=10)&&(cost<=60)){
        discount = 0.08;
    }
    else if ((cost>60)&&(cost<=150)){
        discount = 0.1;
    }
    else if ((cost>150)&&(cost<=210)){
        discount = 0.12;
    }
    else if (cost>210){
        discount = 0.14;
    }
    else {
        discount = 0;
    }

    discountPrice = cost*discount;
    amountDue = cost - discountPrice;

    cout<<"\nYou win a discount coupon of: $"<<fixed<<setprecision(2)<<discountPrice<<" ("<<discount*100<<"% of your purchases)"<<endl;
    cout<<"Your total amount due is $"<<fixed<<setprecision(2)<<amountDue<<"."<<endl;
    return 0;
}
