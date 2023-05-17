#include "Q2.h"
#include<bits/stdc++.h>
using namespace std;

Q2::Q2()
{
    int n[10] = {1,2,3,4,5,6,7,8,9,10};
    int temp;
    int revers = 9;

    for (int i=0; i<5; i++){
        temp = n[i];
        n[i] = n[revers];
        n[revers] = temp;
        revers--;

    }

    for (int g=0; g<10; g++){
        cout<<n[g]<<", ";
    }
}
