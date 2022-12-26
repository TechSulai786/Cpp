#include<iostream>
using namespace std;


template <class T>
T sum(T a,T b)
{
    return a+b;
}





int main()
{
    int x=4, y=8;
    double d=1.5, b=5.8;
    cout <<"this is Int:"<< sum(x,y)<<endl;
    cout <<"This is Double:"<<sum(d,b);


}
