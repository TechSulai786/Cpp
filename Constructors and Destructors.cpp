#include<iostream>
using namespace std;

class car
{
private:
    int a,b,c;
public:
    car()
    {
        a=1;
        b=2;
   cout<<"this is constructor function automatically: A: " << a <<" this is constructor function automatically: B: "  <<b <<endl;

    }
    ~car()
    {
        cout<<"This is destructor";
    }

    void my()
    {
         c=a+b;
        cout<<"this is Total:"<<c<<endl;
    }

};
int main()
{
    car o;
  // o.my();
    return 0;

}
