///
///
/**
    file name: Data_Flat/main.c
    author: 정재준 (rgbi3307@nate.com)
    설명: 이 프로그램은 C언어 float 데이터를 이해하기 위한 예제.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float car = 3.14;   ///실수
    char apple = 3.14;  ///잘못된 데이터
    int beta = 3.14;    ///잘못된 데이터


    printf("car=%f, apple=%d, beta=%d\n",
           car, apple, beta);
    return 0;
}
