#include <iostream>
#include <stdio.h>

using namespace std;

struct Hoge
{
    char char1;
    int int1;
    char char2;
    double double1;
    char char3;
};

int main(void)
{
    Hoge hoge;
    cout << "Hoge size: "  <<  sizeof(Hoge) << endl;
    cout << "hoge     : " << &hoge << endl;
    cout << "char1    : " << (void*)&hoge.char1 << endl;
    cout << "int1     : " << (void*)&hoge.int1 << endl;
    cout << "char2    : " << (void*)&hoge.char2 << endl;
    cout << "double1  : " << (void*)&hoge.double1 << endl;
    cout << "char3    : " << (void*)&hoge.char3 << endl;
    return 0;
}
