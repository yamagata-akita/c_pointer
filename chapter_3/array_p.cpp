#include <iostream>
#include <array>

using namespace std;

int main(void)
{
    int array[3];
    int (*array_p)[3];

    array_p = &array;

    int *int_p;
    int_p = array;

    cout << "array_p : "  << array_p << endl;
    cout << "int_p : "  << int_p << endl;
    cout << "array_p++ : "  << array_p++ << endl;
    cout << "int_p++ : "  << int_p++ << endl;
}
