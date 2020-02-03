#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    string size_s;
    int size;
    int *variable_array;

    cout << "variable_arrayのサイズを入力してください。" << endl;
    cin >> size;
    variable_array = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
        variable_array[i] = i;

    for (int i = 0; i < size; i++)
        cout << variable_array[i] << endl;


    return 0;
}
