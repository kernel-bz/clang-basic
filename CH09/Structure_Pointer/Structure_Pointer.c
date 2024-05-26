#include <stdio.h>
#include "Students_Grades.h"

student_t S;

int main(int argc, char** argv)
{
	printf("This is Paul\'s school story!\n\n");

	input_Scores(&S);
	calculate_Average(&S);
	decide_Grade(&S);
	printf("\nPaul\'s Grade : %c\n\n", (&S)->grade);

	if ((&S)->grade != 'F') {
		printf("Paul passes this semester.\n");
	} else {
		printf("Paul fails to pass this semester....\n");
	}

	return 0;
}
