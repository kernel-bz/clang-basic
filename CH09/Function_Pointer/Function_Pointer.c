/* *** *** *** *** *** *** *** *** *** *** *** *** */

// This is the code for a calculation program!
// Although the code is not perfect and simple,
// but it will be very useful!

/* *** *** *** *** *** *** *** *** *** *** *** *** */

#include <stdio.h>
#include <math.h>

typedef  double  realNumber_t;
realNumber_t (* mathCalculation)(realNumber_t, realNumber_t);
int whichCalculation;
realNumber_t numberX, numberY;
char keepCalculating;

void display_Menu(void);
realNumber_t calculate_Addition(realNumber_t x, realNumber_t y);
realNumber_t calculate_Subtraction(realNumber_t x, realNumber_t y);
realNumber_t calculate_Multiplication(realNumber_t x, realNumber_t y);
realNumber_t calculate_Division(realNumber_t x, realNumber_t y);
realNumber_t calculate_Power(realNumber_t x, realNumber_t y);
realNumber_t calculate_Reminder(realNumber_t x, realNumber_t y);

int main(int argc, char** argv) {
	printf("Let\'s play calculation.\n\n\n");

	while (1) {
		display_Menu();
		scanf("%d", &whichCalculation);

		if (whichCalculation == 0) {
			printf("Goodbye!\n");
			break;
		} else if (whichCalculation == 1) {
			mathCalculation = calculate_Addition;
		} else if (whichCalculation == 2) {
			mathCalculation = calculate_Subtraction;
		} else if (whichCalculation == 3) {
			mathCalculation = calculate_Multiplication;
		} else if (whichCalculation == 4) {
			mathCalculation = calculate_Division;
		} else if (whichCalculation == 5) {
			mathCalculation = calculate_Power;
		} else if (whichCalculation == 6) {
			mathCalculation = calculate_Reminder;
		} else {

		}

		printf("\n\nAnd please enter 2 numbers. : ");
		scanf("%lf %lf", &numberX, &numberY);
		printf("\n\nThe result is %lf.\n\n", mathCalculation(numberX, numberY));
	}

	return 0;
}

void display_Menu(void)
{
	printf("Choose the number which you want!\n\n\n");
	printf("0 : Exit.\n");
	printf("1 : Addition\n");
	printf("2 : Subtraction\n");
	printf("3 : Multiplication\n");
	printf("4 : Division\n");
	printf("5 : Power\n");
	printf("6 : Reminder\n\n\n");
}

realNumber_t calculate_Addition(realNumber_t x, realNumber_t y)
{
	realNumber_t answer;
	answer = x + y;

	return answer;
}

realNumber_t calculate_Subtraction(realNumber_t x, realNumber_t y)
{
	realNumber_t answer;
	answer = x - y;

	return answer;
}

realNumber_t calculate_Multiplication(realNumber_t x, realNumber_t y)
{
	realNumber_t answer;
	answer = x * y;

	return answer;
}

realNumber_t calculate_Division(realNumber_t x, realNumber_t y)
{
	realNumber_t answer;
	answer = x / y;

	return answer;
}

realNumber_t calculate_Power(realNumber_t x, realNumber_t y)
{
	realNumber_t answer;
	answer = pow(x, y);

	return answer;
}

realNumber_t calculate_Reminder(realNumber_t x, realNumber_t y)
{
	realNumber_t answer;
	answer = fmod(x, y);

	return answer;
}
