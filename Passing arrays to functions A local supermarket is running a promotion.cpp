#include<iostream>
#include <string>
using namespace std;

//complete the function
void winners(string costumers[],int size,int n)
{
    int k=1;
    for (int i=0 ; i<=size ; i++ )
    {
        if ( (n*k-1)<=13 && n!=0)
        {
            cout<<costumers[(n*k)-1]<<endl;
            k++;
        }
        if (n<=0)
            cout<<0;
    }
}

int main()
{

    string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    //getting the lucky number as input
    int n;
    cin >> n;
    //call function
    winners(customers, 13, n);
    return 0;
}
