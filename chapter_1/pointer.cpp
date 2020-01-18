#include <iostream>
#include <stdio.h>

int main(void)
{
    int hoge = 5;
    int piyo = 10;
    int *hoge_p;

    // それぞれの変数のアドレスを表示する
    printf("&hoge..%p\n", (void*)&hoge);
    // printf("&piyo..%p\n", (void*)&piyo);
    printf("&hoge_p..%p\n", (void*)&hoge_p);
    
    std::cout << "&hoge.." << &hoge << std::endl << std::endl;
    // std::cout << "&piyo.." << &piyo << std::endl;

    std::cout << "intのポインタ型のアドレス" << std::endl;
    std::cout << "&hoge_p.." << &hoge_p << std::endl << std::endl;

    std::cout << "intのポインタ型の値(?)。何も代入されていないのでよくわからない値になってる?" << std::endl;
    std::cout << "hoge_p..." << hoge_p << std::endl << std::endl;

    // ポインタ変数hoge_pにhogeのアドレスを代入する
    hoge_p = &hoge;
    std::cout << "intのポインタ変数hoge_pにintのhogeのアドレスを代入した後の、アドレスと値" << std::endl;
    std::cout << "&hoge_p.." << &hoge_p << std::endl;
    std::cout << "hoge_p..." << hoge_p << std::endl << std::endl;

    // hoge_pを経由してhogeの値を表示する
    std::cout << "hoge_pを経由してhogeの値を表示" << std::endl;
    std::cout << "*hoge_p.." << *hoge_p << std::endl << std::endl;

    // hoge_pを経由してhogeの値を変更する
    std::cout << "hoge_pを経由してhogeの値を変更" << std::endl;
    *hoge_p = 10;
    std::cout << "hoge.." << hoge << std::endl;
    
}

