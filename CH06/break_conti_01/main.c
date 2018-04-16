/**
    file name:  CH06/break_conti_01/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    기능:        break와 continue 연습 01
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, mod;

    printf("for 연습입니다.\n");
    for (i=0; i<10; i++) {
        if (i > 5) continue;
        printf("i=%d\n", i);
        ///if (i > 5) break;
    }

    printf("do while 연습입니다.\n");
    i = 0;
    do {
        i++;
        mod = i % 3; ///mode==0,1,2
        if (mod > 0) continue;
        printf("i=%d\n", i);
    } while (i < 10);

    printf("while 연습입니다.\n");
    i = 0;
    while (i < 10) {
        i++;
        mod = i % 3; ///mode==0,1,2
        if (mod > 0) continue;
        printf("i=%d\n", i);
    }

_end:
    return 0;
}
