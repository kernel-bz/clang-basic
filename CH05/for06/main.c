/**
    file name:  CH05/for06/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:         for문 연습 06
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float div3, mod;
    int count = 0;
    int digit;

    for (i=1; i <= 20; i++) {
        div3 = (float)i / 3;    ///실수
        digit = div3;           ///정수
        printf("i = %d, div3 = %f\n", i, div3);
        printf("digit = %d\n", digit);
        mod = div3 - (float)digit;
        if (mod == 0) {
            printf("3의 배수\n");
            count++;
        } else
            printf("3의 배수가 아님니다.\n");

        printf("\n");
    }
    printf("count = %d\n", count);
    return 0;
}
