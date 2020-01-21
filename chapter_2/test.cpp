#include <iostream>
#include <stdio.h>


char *int_to_str(int int_value)
{
    static char buf[20];

    sprintf(buf, "%d", int_value);

    return buf;
}

int main(void)
{
    std::string str1 = int_to_str(5);
    std::string str2 = int_to_str(10);

    std::cout << "str1" << str1 << std::endl;
    std::cout << "str2" << str2 << std::endl;
}
