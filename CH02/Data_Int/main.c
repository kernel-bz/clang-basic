#include <stdio.h>
#include <stdlib.h>

int main()
{
    int apple=-128, banna=127, car=250;
    ///32bit(4Byte): -21¾ï ~ 21¾ï
    unsigned int count=-128, adding=127, subt=250;
    ///32bit(4Byte): 0 ~ 42¾ï

    printf("apple=%d, banna=%d, car=%d\n", apple, banna, car);
    printf("count=%d, adding=%d, subt=%d\n", count, adding, subt);

    count = apple + banna;  ///-128 + 127 == -1 (X)
    adding = apple + banna + car;   ///-128 + 127 + 250 = 249 (O)
    subt = apple - banna;   ///-128 - 127 == -255 (X)

    printf("count=%d, adding=%d, subt=%d\n", count, adding, subt);
    return 0;
}
