#include<iostream>
using namespace std;

int main()
{
    string myString = "Hello";
    cout << myString[0]<<endl;

    cout << myString[1]<<endl;
    myString[0] = 'J';
    cout << myString;
}
