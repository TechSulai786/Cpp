#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;

    //your code goes here

    for(int i=1;i<=n;n--)
    {
        cout<< n <<endl;
        if(n%5==0)
        cout<<"Beep" << endl;
    }

    return 0;
}
