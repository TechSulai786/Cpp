#include<iostream>
using namespace std;

class myclass
{
public:
    void methods()          // function defining
    {
    cout<<"hello world:";
    }
    void method(); //declaration
};
void myclass::method()   // function defining
{
    cout<< " im so cool:";

}

int main()
{

    myclass myobjects;
    myobjects.methods();        // method call
    cout << "\n";
    myobjects.method();
    return 0;
}
