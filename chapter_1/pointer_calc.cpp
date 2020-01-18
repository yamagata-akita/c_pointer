#include <iostream>
#include <stdio.h>

int main(void)
{
    int hoge;
    int *hoge_p;

    // hoge_pにhogeのポインタを設定
    hoge_p = &hoge;

    // hoge_pの値を表示
    std::cout << "hoge_p.." << hoge_p << std::endl;

    // hoge_pに1加算
    hoge_p++;

    // hoge_pの値を表示
    std::cout << "hoge_p.." << hoge_p << std::endl;

    // hoge_pに3加算した値を表示
    std::cout << "hoge_p.." << hoge_p + 3 << std::endl;
}
