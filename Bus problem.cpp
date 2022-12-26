#include <iostream>
using namespace std;

int main() {
    //your code goes here
    int pass;
    cout << "Enter the passenger:";
 cin>>pass;
 pass=pass % 50;
 cout<< 50-pass;
    return 0;
}
