#include "Q7.h"
#include <bits/stdc++.h>
using namespace std;

Q7::Q7()
{
    int n,m ;
    cout<<"Enter the amount of times you want the statement to be printed: ";
    cin>>n;

    m = 1;
    do{
        cout<<"Hope everyone is staying safe! Let's pray all this coronavirus pandemic ends soon."<<endl;
        m++;
    }
    while (m<=n);
}
