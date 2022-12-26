#include<iostream>
#include<fstream>

using namespace std;


int main()
{
    fstream file("mytext.txt",ios::out);
    cout<<"Writing the text to file:"<<endl;
    file<<"Im Tech Sulai legend"<<endl;
    file<<"and im Professional in Technology:"<<endl;
    file.close();


    /* string text;
     file.open("mytext.txt",ios::in);
     while(file>>text)
         cout<<text << " ";*/

    string s;
    fstream rfile("mytext.txt");
    while(getline(rfile,s))
    {
        cout<<s<<endl;
    }
    rfile.close();
    return 0;


}
