#include <iostream>
using namespace std;

int main()
{
    int food=10;
    int &meal=food; //Refrence
    cout<< meal <<endl;
    cout<<"this is food address:" << &food;


    return 0;
}
