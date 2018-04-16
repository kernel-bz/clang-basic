/**
    file name:  CH05/do_while_01/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:        do while 연습2
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///int a[20];  ///정수 배열 20개 공간 만듬
    int *a; ///배열이 시작되는 메모리 주소
    int i, total;
    float sum=0, avg;

    printf("점수를 몇개 입력할까요?");
    scanf("%d", &total);

    ///(int *)의 의미는 a배열에 주소에 정수형 데이터가 입력됩니다.
    ///a = (int *)malloc(total);  ///total개수 만큼 메모리 배열 할당
    a = (int *)calloc(total, 4);  ///total개수 만큼 메모리 배열 4바이트씩 할당
    i=0;
    do {
        printf("%d번째 점수를 입력하세요:", i+1);
        scanf("%d", &a[i]);

        sum += a[i]; ///합계 계산
        i++;
        /**
        if (i >= 20) {
                printf("초과 입력 입니다.\n");
                break;
        }
        */
    } while (i < total);

    total = i;
    printf("입력한 결과(개수=%d):\n", total);

    for (i=0; i<total; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }

    avg = sum / total;  ///평균 계산
    printf("sum=%f, avg=%f\n", sum, avg);

    free(a);    ///배열 a에 할당된 메모리 해제

    fflush(stdin);   ///키보드 버퍼 내용을 비움.
    getchar();
    return 0;
}
