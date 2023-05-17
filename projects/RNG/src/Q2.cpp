#include "Q2.h"
#include<bits/stdc++.h>
using namespace std;

Q2::Q2()
{
    int r;
    int seed(time( NULL )) ;
    srand(seed);

    for (int n=1;n<=24;n++){
        r = rand();
        cout<<(2*r+1) %(100-1+1)<<endl;
    }
}
