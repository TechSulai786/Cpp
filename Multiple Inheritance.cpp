#include<iostream>
using namespace std;

class father{

public:
    void father1()
    {
        cout << "i am a business man:" << endl;
    }
};

class mother
{
public:
    void mother1()
    {
        cout << "Im a best cooker:" << endl;

    }
};

class son:public father,public mother
{
public:
    void son1()
    {
        cout << "Im the tech professional Legend:" << endl;
    }
};

int main()
{
    son obj;
    obj.father1();
    obj.mother1();
    obj.son1();

    return 0;
}
