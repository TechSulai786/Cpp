#include<iostream>
using namespace std;
int main()
{
    int i;
    float f;
    char c;
    wchar_t wh;
    char16_t c16;
    char32_t c32;
    double d;
    string s;
    cout << "this is int size: " << sizeof(int) <<"\n";
    cout << "This is float size: " << sizeof(float) << "\n";
    cout << "This is char size: " << sizeof(char) << endl;
    cout << "This is wchar_t size: " << sizeof(wchar_t) << endl;
    cout << "This is char16_t size: " << sizeof(char16_t) << endl;
    cout << "This is char32_t size: " << sizeof(char32_t) << endl;
    cout << "This is double size: " << sizeof(double) << endl;
    cout << "This is string size: " << sizeof(string) << " bytes";
    return 0;
}
