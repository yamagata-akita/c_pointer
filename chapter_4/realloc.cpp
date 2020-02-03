#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int *variable_array;
    int size1;
    int size2;

    cout << "サイズを入力してください。" << endl;
    cin >> size1;

    variable_array = (int *)malloc(sizeof(int) * size1);
    for (int i = 0; i < size1; i++)
        variable_array[i] = i;

    for (int i = 0; i < size1; i++)
        cout << variable_array[i] << endl;

    cout << "再度サイズを入力してください。" << endl;
    cin >> size2;

    variable_array = (int *)realloc(variable_array, sizeof(int) * size2);
    for (int i = 0; i < size2; i++)
        variable_array[i] = i + 10;

    for (int i = 0; i < size1; i++)
        cout << variable_array[i] << endl;

    return 0;
}
