/**
    file name: if01/main.c
    author: JungJaeJoon(rgbi3307@naver.com)
    기능: if 조건문에 대해서 이해한다.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Input your age:");
    scanf("%d", &age);

    if (age > 29)
        printf("You are office worker.");   ///if 조건이 참(True)
    else if (age > 19)
        printf("You are university student.");   ///if 조건이 참(True)
    else
        printf("Your are child.");  ///if 조건이 거짓(False)

    return 0;
}
