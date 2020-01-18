#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int global_variable;
static int file_static_variable;

void func1(void)
{
    int func1_variable;
    static int local_static_variable;

    std::cout << "&func1_variable : " << &func1_variable << std::endl;
    std::cout << "&local_static_variable : " << &local_static_variable << std::endl;
}

void func2(void)
{
    int func2_variable;
    std::cout << "&func2_variable : " << &func2_variable << std::endl;
}


int main(void)
{
    int *p;

    // 関数へのポインタの表示
    printf("func1 : %p\n", (void*)func1);
    printf("func2 : %p\n", (void*)func2);

    // 文字列リテラルのアドレスの表示
    std::cout << "string literal : " << &"abc" << std::endl;

    // グローバル変数のアドレスの表示
    std::cout << "&global_variable : " << &global_variable << std::endl;

    // ファイル内static変数のアドレスの表示
    std::cout << "&file_static_variable : " << &file_static_variable << std::endl;

    // ローカル変数のアドレスの表示
    func1();
    func2();

    // mallocにより確保した領域のアドレス
    p = (int*)malloc(sizeof(int));
    std::cout << "malloc address : " << p << std::endl;

    return 0;
}
