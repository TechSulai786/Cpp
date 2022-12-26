#include<iostream>
using namespace std;



int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw 2.4;
        }
    }
   catch (string myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Error number: " << myNum;
    }
    catch (float myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Error number: " << myNum;
    }
    catch (...)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        //cout << "Error number: " << myNum;
    }
    return 0;
}

