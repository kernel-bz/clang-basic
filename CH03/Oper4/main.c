#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 10;
    int b = 300;
    float c = 3.14;     ///원주율
    long d = 2018;
    double e = 2.72828; ///exp
    int sum;
    unsigned int min;   ///논리적 오류 가능성 있음(뺄셈에서)
    float mul;
    double div;

    sum = a + b;    ///10 + 300 == 310
    min = a - b;    ///10 - 300 == -290
    mul = a * c;    ///10 * 3.14 == 31.4 <-- 논리 오류
    div = d / e;    ///2018 / 2.72828 == 739 <-- 논리 오류

    printf("sum=%d, min=%u, mul=%2.1f, div=%3.10f\n",
           sum, min, mul, div);
    return 0;
}
