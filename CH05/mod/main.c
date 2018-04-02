/**
    file name:  CH05/mod/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:         나머지 연산자 연습
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mod1, mod2, mod3, mod4, mod5, mod6;
    int i, count = 0;

    mod1 = 1.0 / 3.0;   ///0.3333..
    mod2 = 1 % 3;   ///정수1을 정수3으로 나누면 몫은 0, 나머지 1
    mod3 = 2.0 / 3.0;   ///0.666...
    mod4 = 2 % 3;   ///정수2를 정수3으로 나누면 몫은 0, 나머지 2
    mod5 = 3.0 / 3.0;   ///1.0
    mod6 = 3 % 3;   ///정수3을 정수3으로 나누면 몫은 1, 나머지 0(3의배수)

    printf("mod1=%f, mod2=%f, mod3=%f, mod4=%f, mod5=%f, mod6=%f\n"
           , mod1, mod2, mod3, mod4, mod5, mod6);

    printf("\n");
    for (i=1; i <= 20; i++) {
        mod1 = i % 5;
        printf("i = %d, mod1 = %f\n", i, mod1);
        if (mod1 == 0) {
            printf("5의 배수\n");
            count++;
        } else
            printf("5의 배수가 아님니다.\n");

        printf("\n");
    }
    printf("count = %d\n", count);
    return 0;
}
