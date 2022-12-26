#include<iostream>
using namespace std;

class father
{
    public:
    void house()
    {
        cout << "i have a own House:" << endl;
    }
};

class son:public father
    {
    public:
        void cars()
        {
            cout << " I have a Own car:" << endl;
        }
    };

int main()
{
 //   father obj1;
    son obj2;
 //   obj1.house();
    obj2.house();
    obj2.cars();


    return 0;
}
