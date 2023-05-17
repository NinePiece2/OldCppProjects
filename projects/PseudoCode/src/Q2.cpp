#include "Q2.h"
#include <iostream>
using namespace std;

Q2::Q2()
{
    double piecesAte;
    double jogMiles;

    cout<<"How many pieces of Pizza did you eat?: ";
    cin>>piecesAte;

    jogMiles = piecesAte * 375/100;

    cout<<"You must jog "<<jogMiles<<" miles because you ate "<<piecesAte<<" slices of pizza."<<endl;
}
