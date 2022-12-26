#include <iostream>

using namespace std;


int main()
{

    string cars[4]= {"ffsdf","sdffjk","jfdsi","osidjfoi"};
    for(int i=0; i<4; i++)
    {
        cout <<cars[i] <<"\n";
    }

    string carss[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 4; i++)
    {
        cout << i << ": " << carss[i] << "\n";
    }

    string letters[2][4] =
    {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << "\n";
        }
    }
    return 0;
}


