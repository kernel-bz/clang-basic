/**
    file name:  CH05/do_while_01/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:        do while 연습
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20] = {
        80, 100, 90, 60, 40,
        80,  70, 88, 65, 50,
        70,  85, 92, 55, 66,
        80,  95, 75, 87, 80
     };
    int i;
    float sum=0, avg;

    i = 0;
    do {
        sum = sum + a[i];   ///sum += a[i];
        i++;
    } while (i < 20);
    avg = sum / 20;  ///평균 계산

    printf("sum=%f, avg=%f\n", sum, avg);
    return 0;
}
