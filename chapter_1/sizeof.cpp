#include <iostream>
#include <stdio.h>

int main(void)
{
    printf("bool..%d\n", (int)sizeof(bool));
    std::cout << "bool.." << (int)sizeof(bool) << std::endl;
}
