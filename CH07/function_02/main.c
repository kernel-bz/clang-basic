#include <stdio.h>
#include <stdlib.h>

void fn1(void)
{
    printf("함수 fn1 입니다.\n");
}

void fn2(void)
{
    printf("함수 fn2 입니다.\n");
}

void fn3(void)
{
    printf("함수 fn3 입니다.\n");
}

int main()
{
    fn3();
    fn2();
    fn1();
    return 0;
}
