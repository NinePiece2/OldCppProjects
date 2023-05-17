#include "Q3.h"
#include<bits/stdc++.h>
using namespace std;

Q3::Q3()
{
    int n[5];
    int square[5];

    for (int i=0; i<5; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>n[i];
        square[i]=n[i]*n[i];
    }

    for (int g=0; g<5; g++){
        cout<<n[g]<<", ";
    }

    cout<<""<<endl;

    for (int h=0; h<5; h++){
        cout<<square[h]<<", ";
    }
}
