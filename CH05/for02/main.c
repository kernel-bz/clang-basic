/**
    file name:  CH05/for02/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:         for문 연습 02 (짝수와 홀수만 더함)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;  ///-21억 ~ 21억
    ///unsigned int i; ///0 ~ 42억
    ///long i;         ///1800경(64비트)
    int sum = 0;

    for (i=2; i <= 10; i+=2) ///짝수만 더함
    {
        printf("i=%d\n", i);
        sum = sum + i;
    }
    printf("sum = %d\n", sum);

    sum = 0;
    for (i=1; i <= 10; i+=2) ///홀수만 더함
    {
        printf("i=%d\n", i);
        sum = sum + i;
    }
    printf("sum = %d\n", sum);

    return 0;
}
