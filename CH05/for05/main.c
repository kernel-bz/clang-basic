/**
    file name:  CH05/for05/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:         for문 연습 05
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int count = 0;

    ///i=1, 2, 4, 8, 16, 32, 64, 128, ...
    for (i=1; i < 100; i *= 2) {
        printf("i=%d\n", i);
        count++;
    }
    printf("count=%d\n", count);

    count = 0;
    ///i=100, 50, 25, 12, 6, 3, 1, ....
    for (i=100; i > 0; i /= 2) {
        printf("i=%d\n", i);
        count++;
    }
    printf("count=%d\n", count);

    return 0;
}
