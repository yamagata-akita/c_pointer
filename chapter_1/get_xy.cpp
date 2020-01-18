#include <iostream>
#include <stdio.h>

void get_xy(double *x_p, double *y_p)
{
    std::cout << "x_p : " << *x_p << std::endl;
    std::cout << "y_p : " << *y_p << std::endl;

    *x_p = 1.0;
    *y_p = 2.0;
}

int main(void)
{
    double x = 5.0;
    double y = 10.0;

    std::cout << "&x : " << &x << std::endl;
    std::cout << "&y : " << &y << std::endl;

    get_xy(&x, &y);
    
    std::cout << "x : " << x << std::endl;
    std::cout << "y : " << y << std::endl;
}
