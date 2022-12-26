#include <iostream>
using namespace std;

int main() {
    int ages[5];
   float young=ages[0];

//cout << "Enter the Age:";
    for (int i = 0; i < 5; ++i)
    {
        cin >> ages[i];
           if(young >ages[i])
       {
           young=ages[i];
       }
    }
    //your code goes here

    float price=50-(50*young/100);
    cout << price<<endl;
    return 0;
}
