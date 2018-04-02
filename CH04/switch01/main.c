#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

input_age:

    printf("Input your age:");
    scanf("%d", &age);

    switch (age) {
        case 0:
            printf("GoodBye~~\n");
            return 0;
        case 10:
            printf("You are baby!");
            return 0;
        case 40:
            printf("You are adult.\n");
            break;
        case 30:
            printf("You are office worker.\n");
            break;
        case 20:
            printf("You are university student.\n");
            break;
        default:
            printf("Your are child.\n");
    }
    printf("Your age is %d\n", age);
    goto input_age;

    return 0;
}
