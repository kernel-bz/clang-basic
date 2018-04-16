/**
    file name:  CH05/while_01/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:        while 연습1
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20];
    int i, total;
    float sum=0, avg;

_retry:
    printf("점수를 몇개 입력할까요?");
    scanf("%d", &total);

    if (total > 20) {
        printf("처리할 수 있는 개수 초과, 다시 입력 하세요.\n");
        ///return 0;
        goto _retry;
    }

    i=0;
    while (i < total)
    {
        printf("%d번째 점수를 입력하세요:", i+1);
        scanf("%d", &a[i]);

        sum += a[i]; ///합계 계산
        i++;
        if (i >= 20) {
            printf("초과 입력 입니다.\n");
            break;
        }
    }

    total = i;
    printf("입력한 결과(개수=%d):\n", total);

    for (i=0; i<total; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }

    avg = sum / total;  ///평균 계산
    printf("sum=%f, avg=%f\n", sum, avg);

    fflush(stdin);   ///키보드 버퍼 내용을 비움.
    getchar();

    return 0;
}
