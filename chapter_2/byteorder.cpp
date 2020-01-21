#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    int hoge = 0x12345678;
    unsigned char *hoge_p = (unsigned char*)&hoge;
    
    cout << (int)hoge_p[0] << endl;
    cout << (int)hoge_p[1] << endl;
    cout << (int)hoge_p[2] << endl;
    cout << (int)hoge_p[3] << endl;

    printf("%x\n", hoge_p[0]);
    printf("%x\n", hoge_p[1]);
    printf("%x\n", hoge_p[2]);
    printf("%x\n", hoge_p[3]);
}
