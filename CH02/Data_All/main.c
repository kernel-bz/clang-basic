#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'A';   ///65
    int b = 300;
    float c = 3.14;
    long d = 20180228;  ///2천만
    unsigned long d2 = 4200000000;  ///42억
    double e = 3.141592;

    printf("char a = %c, %d\n", a, a);
    printf("int b = %d\n", b);
    printf("float c = %f\n", c);
    printf("long d = %ld\n", d);    ///long digit
    printf("long d2 = %lu\n", d2);    ///long unsigned
    printf("double e = %1.6f\n", e);

    printf("size a = %d\n", sizeof(a)); ///a데이터의 크기를 바이트 단위로 출력
    printf("size b = %d\n", sizeof(b)); ///b데이터의 크기를 바이트 단위로 출력
    printf("size c = %d\n", sizeof(c)); ///c데이터의 크기를 바이트 단위로 출력
    printf("size d = %d\n", sizeof(d)); ///d데이터의 크기를 바이트 단위로 출력
    printf("size d2 = %d\n", sizeof(d2)); ///d2데이터의 크기를 바이트 단위로 출력
    printf("size e = %d\n", sizeof(e)); ///e데이터의 크기를 바이트 단위로 출력

    return 0;
}
