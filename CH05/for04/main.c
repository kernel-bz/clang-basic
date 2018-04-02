/**
    file name:  CH05/for04/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:         for문 연습 04(반복문으로 다양한 모양 만들기)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i=0; i < 5; i++) {
        printf("*****\n");
    }

    printf("\n");
    for(i=0; i < 5; i++) {
        for(j=0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        printf("i=%d, j=%d\n", i, j);
    }

    return 0;
}
