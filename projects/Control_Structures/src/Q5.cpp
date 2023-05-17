#include "Q5.h"
#include <bits/stdc++.h>
using namespace std;

Q5::Q5()
{
    int n = 0;

    do{
        cout<<"Enter a number between 1 and 10: ";
        cin>>n;
    }
    while ((n<1)||(n>10));
}
