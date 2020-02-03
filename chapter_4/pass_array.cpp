#include <stdio.h>
#include <iostream>
#include <array>

using namespace std;

void func(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << endl;
}


int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    func(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
