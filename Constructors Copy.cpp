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

    car (car &x)
    {
        a=x.a;
        b=x.b;
        c=x.c;
    }
    ~car()
    {
        cout<<"This is destructor"<<endl;
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
    car o2(o);
    o2.my();
//o.my();
    return 0;

}
