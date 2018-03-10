/**
    file name: Minus/main.c
    author: JungJaeJoon(rgbi3307@nate.com)
    ±â´É: »¬¼À ¿¬½À
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;    ///signed

    a = 10;
    b = 20;
    c = a - b;  ///-10
    printf("result c = %d\n", c);   ///OK
    printf("result c = %u\n", c);   ///unsigned
    return 0;
}
