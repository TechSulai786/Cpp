#include<iostream>
using namespace std;

class car
{
private:
    string a,b;
    int c;
public:
    car(string x, string Y, int z)  // constructor
    {
        a=x;
        b=Y;
        c=z;
        cout<<"this is Total:"<<a<<endl;
        cout<<"this is Total:"<<b<<endl;
        cout<<"this is Total:"<<c<<endl;
    }
    ~car()
    {
        cout<<"This is destructor";
    }

    void my()
    {

        cout<<"this is Total:"<<a<<endl;
        cout<<"this is Total:"<<b<<endl;
        cout<<"this is Total:"<<c<<endl;
    }

};
int main()
{
    car o("BMW", "X5", 1999);
//o.my();
    return 0;

}
