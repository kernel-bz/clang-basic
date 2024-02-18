#include <stdio.h>
#include <stdlib.h>

int _sum = 0;

// I make a pseudo-function overloading source code.
// Function overloading is in C++ computer language.

#define  SUM_4(X, ...)  		   \
			_sum += atoi(#X);

#define  SUM_3(X, ...)  		   \
			_sum += atoi(#X);	   \
			SUM_4(__VA_ARGS__)

#define  SUM_2(X, ...)			   \
			_sum += atoi(#X);	   \
			SUM_3(__VA_ARGS__)

#define  SUM_1(X, ...)			   \
			_sum += atoi(#X);	   \
			SUM_2(__VA_ARGS__)

#define  SUM(...)			   \
			SUM_1(__VA_ARGS__)

int main(int argc, char** argv)
{
	int sum[4];

	SUM(1)
	sum[0] = _sum;
	printf("The sum of 1 : %d\n", sum[0]);
	_sum = 0;

	SUM(24, 71)
	sum[1] = _sum;
	printf("The sum of 24 and 71 : %d\n", sum[1]);
	_sum = 0;

	SUM(630, 59, 882)
	sum[2] = _sum;
	printf("The sum of 630 and 59, 882 : %d\n", sum[2]);
	_sum = 0;

	SUM(94, 49, 7, 125)
	sum[3] = _sum;
	printf("The sum of 94 and 49, 7, 125 : %d\n", sum[3]);
	_sum = 0;

	return 0;
}
