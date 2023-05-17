#include "Q1.h"
#include<bits/stdc++.h>
using namespace std;

Q1::Q1()
{
    int randNumber;
    int seed(time( NULL )) ;
    srand(seed);

    for (int n=1;n<=17;n++){
        randNumber = rand();
        cout<<randNumber %25<<endl;
    }
}
