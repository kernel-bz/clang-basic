#include <stdio.h>

#define  SUM(X, Y)  X + Y
#define  SUB(X, Y)  X - Y
#define  MUL(X, Y)  X * Y
#define  QUO(X, Y)  X / Y
#define  REM(X, Y)  X % Y

int main(int argc, char** argv)
{
	char x;
	int a, b;

	printf("\n\nEnter a character to display calculations!\n\n");
	printf("\nA : Add\tS : Subtract\tM : Multiply\tD : Divide\n");
	scanf("%c", &x);
	printf("Enter 2 numbers!\n");
	scanf("%d %d", &a, &b);

	if ((x == 'A') || (x == 'a')) {
		printf("The sum of 2 numbers is %d.\n", SUM(a, b));
	} else if ((x == 'S') || (x == 's')) {
		printf("The substraction of 2 numbers is %d.\n", SUB(a, b));
	} else if ((x == 'M') || (x == 'm')) {
		printf("The multiplication of 2 numbers is %d.\n", MUL(a, b));
	} else if ((x == 'D') || (x == 'd')) {
		printf("The quotient is %d and the reminder is %d.\n", QUO(a, b), REM(a, b));
	} else {
		printf("You enter wrong key buttons....\n");	
	}

	return 0;
}
