#include<iostream>
using namespace std;

class myclass
{
    private:
     string s;
    int age;
      int salary;
      public:
        void setsalary(int ss)
        {
            salary=ss;
        }
        int getsalary()
        {
            return salary;
        }

};

int main()
{
    myclass obj;
    obj.setsalary(4999);
    cout<<obj.getsalary();
    return 0;
}
