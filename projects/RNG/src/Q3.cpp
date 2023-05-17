#include "Q3.h"
#include<bits/stdc++.h>
using namespace std;

Q3::Q3()
{
    int w;
    int seed(time( NULL )) ;
    srand(seed);

    for (int n=1;n<=11;n++){
        w = rand();
        cout<<2*(w %(49-1)+2)<<endl;
    }
}
