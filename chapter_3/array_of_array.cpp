#include <iostream>
#include <stdio.h>

using namespace std;

int plus1(int *array_p)
{
    cout << "*array_p : " << *array_p << endl;
    cout << "*array_p + 1 : " << *array_p + 1 << endl;
}


int main(void)
{
    int array[5][3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
	{
	    array[i][j] = i * 3 + j;
	}
    }

    cout << array[3][3] << endl;
    cout << array[2][1] << endl;

    plus1(array[2]);
}
