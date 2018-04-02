/**
    file name: Input_Output/main.c
    author: JungJaeJoon(rgbi3307@naver.com)
    기능: 입력과 출력에 대해서 이해한다.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    ///1.입력한다
    printf("Input a:");
    scanf("%d", &a);
    ///2.처리한다
    a = a + 1;
    a++;    ///증가연산(a=a+1)
    a = a - 1;
    a--;    ///감소연산(a=a-1)
    printf("a=%d\n", a);

    a = a + 2;
    a += 2;     ///a = a + 2;
    a = a - 2;
    a -= 2;
    printf("a=%d\n", a);

    a = a * 10;
    a *= 10;
    printf("a=%d\n", a);

    a = a / 10;
    a /= 10;

    ///3.출력한다.
    printf("a=%d\n", a);
    return 0;
}
