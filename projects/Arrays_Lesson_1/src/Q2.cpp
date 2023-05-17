#include "Q2.h"
#include<bits/stdc++.h>
using namespace std;

Q2::Q2()
{
    int randNumber [10];
    int seed(time( NULL )) ;
    srand(seed);
    int num = 0;

    for (int n=0;n<10;n++){
        randNumber[n] = rand();
        randNumber[n] = randNumber[n] %(10-1 +1)+1;
    }

    for (int i=0; i<10; i++){
        cout<<randNumber[i]<<", ";
    }

    cout<<""<<endl;

    for (int g=9; g>=0; g--){
        cout<<randNumber[g]<<", ";
    }

    for (int j=0; j<10; j++){
        if (randNumber[j]%2==0)
            num++;
    }

    cout<<"\nThere are "<<num<<" even number(s)."<<endl;
}
