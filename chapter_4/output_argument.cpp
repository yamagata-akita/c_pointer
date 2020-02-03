#include <stdio.h>
#include <iostream>

using namespace std;

void func(int *a, double *b)
{
    *a = 3;
    *b = 3.5;
}

int main()
{
    int a;
    double b;
    func(&a, &b);

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}

