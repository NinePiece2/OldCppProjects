#include "Q4.h"
#include <bits/stdc++.h>
using namespace std;

Q4::Q4()
{
    int num,n;
    int even=0;
    int odd=0;

    cout<<"How many integers you want to enter?"<<endl;
    cin>>n;

    int i=0;
    while(i<n){
        cout<<"Enter an integer"<<endl;
        cin>>num;
        if (num%2==1)
            odd=odd+1;
        if (num%2==0)
            even=even+1;
        i++;
}

    cout<<"The number of odds = "<<odd<<" and the number of evens = "<<even<<"\n"<<endl;

    even=0;
    odd=0;
    for (int i = 0; i<n; i++){
        cout<<"Enter an integer"<<endl;
        cin>>num;
        if (num%2==1)
            odd=odd+1;
        if (num%2==0)
            even=even+1;
    }

    cout<<"The number of odds = "<<odd<<" and the number of evens = "<<even<<"\n"<<endl;

    i=0;
    even=0;
    odd=0;

    do{
        cout<<"Enter an integer"<<endl;
        cin>>num;
        if (num%2==1)
            odd=odd+1;
        if (num%2==0)
            even=even+1;
        i++;
    }
    while(i<n);

    cout<<"The number of odds = "<<odd<<" and the number of evens = "<<even<<"\n"<<endl;
}
