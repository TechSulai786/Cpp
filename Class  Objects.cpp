#include<iostream>
using namespace std;

class myclass
{
public:
    int a;
    string s;
};

int main()
{
    myclass myobjects;
    myobjects.a=10;
    myobjects.s="im sulai the legend:";

    myclass myobjects2;     //  multiple objects
    myobjects2.a=25;
    myobjects2.s="im a tech Professional:";
    cout << myobjects.a << endl;
    cout << myobjects.s << endl;
    cout << "im old:" << myobjects2.a <<" " << myobjects2.s;


    return 0;
}
