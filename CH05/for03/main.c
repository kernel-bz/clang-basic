/**
    file name:  CH05/for03/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:         for문 연습 03
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int count = 0;

    for (i=10; i > 0; i--) {
        printf("i=%d\n", i);
        count++;
        printf("count=%d\n", count);
    }
    printf("total count=%d\n", count);
    return 0;
}
