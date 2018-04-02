#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float pi;

    printf("Please Input Digit: ");
    scanf("%d", &a);    ///Input:입력장치(키보드)로부터 데이터 입력 --> a

    printf("Please Input Float: ");
    scanf("%f", &pi);

    printf("You input the digit a = %d\n", a);  ///Output
    printf("You input the float pi = %f\n", pi);  ///Output

    return 0;
}
