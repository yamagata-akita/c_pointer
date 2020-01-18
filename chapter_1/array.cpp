#include <iostream>
#include <array>
#include <stdio.h>

int main(void)
{
    int array[5];
    int i;

    for (int i = 0; i < 5; i++)
    {
        array[i] = i;
    }

    std::cout << "配列の内容を表示" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << std::endl;
    }

    std::cout << "arrayの各要素のアドレスを表示" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << &array[i] << std::endl;
    }
    
    std::array<int, 5> std_array;
    for (int i = 0; i < 5; i++)
    {
        std_array[i] = i;
    }

    std::cout << "std::arrayの各要素のアドレスを表示" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << &std_array[i] << std::endl;
    }
    std::cout << "std::arrayの内容をポインタを用いて表示" << std::endl;

    for (int *array_p = &std_array[0]; array_p != &std_array[5]; array_p++)
    {
        std::cout << "*array_p : " << *array_p << std::endl;
    }

    std::cout << "ポインタ別バージョン" << std::endl;
    for (int *p = std_array.begin(); p != std_array.end(); p++)
    {
        std::cout << "*p : " << *p << std::endl;
    }

}
