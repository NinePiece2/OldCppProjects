/*A program that displays how many tasks per second a computer can process in the next two decades since 1980 where it was 1 task/sec.
The power of available computer technology increases by a factor of four every three years.
The program output should look similar to:

1980     1
1983     4
1986    16
1989    64
1992   256
1995  1024
1998  4096
2001 16384
.............
.............
2019 67108864

*/

#include "Q10.h"
#include <iostream>
using namespace std;
#include <iomanip>

Q10::Q10()
{
    int staringYear, startingTasks, year, tasks;

    staringYear = 1980;
    startingTasks = 1;

    cout<<staringYear;
    cout.width(14);
    cout<<startingTasks<<endl;

    year = staringYear+3;
    tasks = startingTasks*4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;


    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;

    year+=3;
    tasks*=4;

    cout<<year;
    cout.width(14);
    cout<<tasks<<endl;


}
