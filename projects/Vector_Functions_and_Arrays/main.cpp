#include<bits/stdc++.h>
using namespace std;

void getOrder (vector<int>&mango, vector<int>&orange, vector<int>&banana); // Prototype
void printOrder (vector<int>&mango, vector<int>&orange, vector<int>&banana);
int customers; // Global

int main()
{
    cout<<"Enter the number of customers: ";
    cin>>customers;

    vector <int> mango(customers);
    vector <int> orange(customers);
    vector <int> banana(customers);

    getOrder(mango, orange, banana);
    printOrder(mango, orange, banana);

    return 0;
}

void getOrder (vector<int>&mango, vector<int>&orange, vector<int>&banana){
    for (int i=0; i<customers; i++){
        cout<<"Enter the number of mangos bought by customer #"<<i+1<<": ";
        cin>>mango[i];
        cout<<"Enter the number of oranges bought by customer #"<<i+1<<": ";
        cin>>orange[i];
        cout<<"Enter the number of bananas bought by customer #"<<i+1<<": ";
        cin>>banana[i];
        cout<<""<<endl;
    }

}

void printOrder (vector<int>&mango, vector<int>&orange, vector<int>&banana){
    double temp;
    cout<<""<<endl;
    cout<<"******************************"<<endl;
    cout<<"Customer#      Mangos   Oranges   Bananas    Total"<<endl;
    for (int i=0; i<customers; i++){
        temp = mango[i]*0.2 + orange[i]*0.1 + banana[i]*0.05;
        cout<<right<<setw(5)<<i+1<<setw(16)<<mango[i]<<setw(10)<<orange[i]<<setw(10)<<banana[i]<<setw(5)<<"$";
        cout<<left<<setw(5)<<fixed<<setprecision(2)<<temp<<endl;
    }
}

