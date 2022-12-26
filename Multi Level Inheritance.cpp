#include<iostream>
using namespace std;

class grandfather{

public:
    void grandfather1()
    {
        cout << "i am a business man:" << endl;
    }
};

class father:public grandfather
{
public:
    void father1()
    {
        cout << "Im a best cooker:" << endl;

    }
};

class son:public father
{
public:
    void son1()
    {
        //grandfather::grandfather1();
        cout << "Im the tech professional Legend:" << endl;

    }

};

int main()
{
    son obj;
    obj.grandfather1();
    obj.father1();
    obj.son1();

    return 0;
}

