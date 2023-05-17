#include "Q1.h"
#include<bits/stdc++.h>
using namespace std;

Q1::Q1()
{
    int total = 0;
    int in;
    for (int i=0; i<5; i++){
        cout<<"Enter a number: ";
        cin>>in;

        if (in%2==0){
            total+=in;
        }
    }
    cout<<total<<endl;
}
