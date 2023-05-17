/* Write a program that takes inputs from the user by using getline displays user’s fullname, class, and school
address. The program output should be similar to:

Your grade
Your Full Name
JASS Secondary School
500 Elbern Markell Dr, Brampton, ON L6X 5L3

*/

#include "Q4.h"
#include <iostream>
using namespace std;

Q4::Q4()
{
    int grade;
    string name, school, address;

    cout<<"Enter your full name: ";
    getline(cin, name);
    cout<<"Enter the name of your school: ";
    getline(cin, school);
    cout<<"Enter the address of your school: ";
    getline(cin, address);
    cout<<"Enter your grade: ";
    cin>>grade;

    cout<<"\n"<<name<<endl;
    cout<<"Grade "<<grade<<endl;
    cout<<school<<endl;
    cout<<address<<endl;

}
