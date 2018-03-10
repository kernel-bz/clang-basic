#include <stdio.h>
#include <stdlib.h>

int main()
{
    char apple=-128, banna=127, car=250;   ///8bit(1Byte): -128 ~ 127
    unsigned char count=-128, adding=127, subt=250;    ///8bit(1Byte): 0 ~ 255
    char A = 'A';   ///65
    char a = 'a';   ///127

    printf("A=%c, %d\n", A, A);
    printf("a=%c, %d\n", a, a);

    printf("apple=%d, banna=%d, car=%d\n", apple, banna, car);
    printf("count=%d, adding=%d, subt=%d\n", count, adding, subt);

    count = apple + banna;  ///-128 + 127 == -1 (X)
    adding = apple + banna + car;   ///-128 + 127 + 250 = 249 (O)
    subt = apple - banna;   ///-128 - 127 == -255 (X)

    printf("count=%d, adding=%d, subt=%d\n", count, adding, subt);
    return 0;
}
