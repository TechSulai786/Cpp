#include<iostream>
using namespace std;

class myclass
{
    private:

    int Age;
    string s;
    public:
        void getdata()
        {
        cout << "enter  the Age and name:" << endl;
        cin>> Age;
        cin>>s;
        }
void display()
    {
    cout<<"Age:" << Age <<endl;
    cout<<"Name:" << s << endl;
    }
};

int main()
{
    myclass obj;

     obj.getdata();
   cout<<"THis is all:" <<endl ;
   obj.display();


    return 0;
}
