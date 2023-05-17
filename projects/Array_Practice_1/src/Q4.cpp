#include "Q4.h"
#include<bits/stdc++.h>
using namespace std;

Q4::Q4()
{
    int n[10];
    int square[10];

    for (int i=0; i<10; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>n[i];
        square[i]=n[i]*n[i];
    }

    cout<<"The numbers are: ";

    for (int g=0; g<10; g++){
        cout<<n[g]<<", ";
    }

    cout<<""<<endl;
    cout<<"The squares are: ";

    for (int h=0; h<10; h++){
        cout<<square[h]<<", ";
    }
}
