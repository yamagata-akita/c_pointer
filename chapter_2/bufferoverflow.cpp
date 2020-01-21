#include <iostream>
#include <stdio.h>

void hello()
{
    std::cout << "hello" << std::endl;
}

void func()
{
    void *buf[10];
    static int i;

    for(i = 0; i < 100; i++)
    {
        buf[i] = (void*)hello;
    }
}

int main()
{
    int buf[1000];
    buf[999] = 10;

    func();

    return 0;
}
