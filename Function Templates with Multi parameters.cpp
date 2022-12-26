#include<iostream>
using namespace std;


template <class T , class U>
U larger(T a,U d)
{
    return  a>d ?a:d;

}


int main ()
{
    int x;
    double d;
    cin>>x>>d;
    cout <<"This is larger:"<<larger(x,d);

}
