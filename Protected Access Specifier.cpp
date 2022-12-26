#include<iostream>
using namespace std;

class A
{
protected:
    int x;
};

class B : protected A
{
public:
    void setdata()
    {
        cout << "Enter the value of X:";
        cin>> x;
    }
    void display()

    {
        cout<<"X:" << x;
    }
};

int main()
{
    B o;
   // o.x=44;
    o.setdata();
    o.display();


    return 0;

}
