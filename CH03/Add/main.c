/**
    file name : Add/main.c
    author : JungJaeJoon(rgbi3307@nate.com) on www.kernel.bz
    기능: 덧셈처리 프로그램
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    double pi = 3.141592;
    int r = 20;
    double circle, area;

    a = 100;
    b = 200;
    c = a + b;  ///300
    printf("result c = %d\n", c);

    circle = 2 * pi * r;    ///원둘레
    area = pi * r * r;      ///원면적
    printf("circle = %f area = %f\n", circle, area);

    return 0;
}
