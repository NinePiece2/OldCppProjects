#include "Q4.h"
#include<bits/stdc++.h>
using namespace std;

Q4::Q4()
{
    int sales [5];
    char restart = 'y';
    int day;
    string cont;

    for (int i=0; i<5; i++){
        cout<<"Enter the number of sales for ";
        if (i==0)
            cout<<"Monday: ";
        else if (i==1)
            cout<<"Tuesday: ";
        else if (i==2)
            cout<<"Wednesday: ";
        else if (i==3)
            cout<<"Thursday: ";
        else if (i==4)
            cout<<"Friday: ";

        cin>>sales[i];
    }

    while (restart=='y'){
        cout<<"Enter a day of the week (Monday = 1, Tuesday = 2, ...): ";
        cin>>day;

        cout<<"There were "<<sales[day-1]<<" sales on ";

        if (day==1)
            cout<<"Monday."<<endl;
        else if (day==2)
            cout<<"Tuesday."<<endl;
        else if (day==3)
            cout<<"Wednesday."<<endl;
        else if (day==4)
            cout<<"Thursday."<<endl;
        else if (day==5)
            cout<<"Friday."<<endl;

        cout<<"Do you wish to continue? ";
        cin>>cont;

        if (cont.compare("no")==0||cont.compare("No")==0)
            restart = 'j';
    }
}
