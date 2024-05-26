#include <stdio.h>

#define  ARRAY_ROW        11
#define  CHARACTER_ARRAY  0
#define  INTEGER_ARRAY    1
#define  DOUBLE_ARRAY     2

char char_array[ARRAY_ROW] = {'K', 'E', 'R', 'N', 'E', 'L', 'S', 'T', 'U', 'D', 'Y'};
int int_array[ARRAY_ROW] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121};
double double_array[ARRAY_ROW] = {3.3, 3.33, 3.333, 3.3333, 3.33333, 3.333333, 3.33333, 3.3333, 3.333, 3.33, 3.3};

char keepPlaying;
int selectedArray;
char* charPointer;
int* intPointer;
double* doublePointer;

// The below function can accept several pointer variables.
void display_Array(void* _arrayPointer);

int main(int argc, char** argv)
{
	while (1) {
		printf("Do you wanna play displaying some arrays? : ");
		scanf("%c", &keepPlaying);

		if ((keepPlaying == 'Y') || (keepPlaying == 'y')) {
			printf("1. Character\t2. Interger\t3. Double\n\n");
			printf("Which array do you wanna show? : ");
			scanf("%d", &selectedArray);

			if ((selectedArray - 1) == CHARACTER_ARRAY) {
				display_Array(char_array);
			} else if ((selectedArray - 1) == INTEGER_ARRAY) {
				display_Array(int_array);
			} else if ((selectedArray - 1) == DOUBLE_ARRAY) {
				display_Array(double_array);
			} else {

			}
		} else if ((keepPlaying == 'N') || (keepPlaying == 'n')) {
			break;
		} else {

		}

		printf("\n");
		gets();
	}

	return 0;
}

void display_Array(void* _arrayPointer)
{
	int i;

	if ((selectedArray - 1) == CHARACTER_ARRAY) {
		charPointer = _arrayPointer;
		printf("\n");
		for (i = 0; i < ARRAY_ROW; i++) {
			printf("%c", *(charPointer + i));

			if (i != ARRAY_ROW - 1) {
				printf(" ");
			} else {
				printf("\n");
			}
		}
	} else if ((selectedArray - 1) == INTEGER_ARRAY) {
		intPointer = _arrayPointer;
		printf("\n");
		for (i = 0; i < ARRAY_ROW; i++) {
			printf("%d", *(intPointer + i));

			if (i != ARRAY_ROW - 1) {
				printf(" ");
			} else {
				printf("\n");
			}
		}
	} else if ((selectedArray - 1) == DOUBLE_ARRAY) {
		doublePointer = _arrayPointer;
		printf("\n");
		for (i = 0; i < ARRAY_ROW; i++) {
			printf("%lf", *(doublePointer + i));

			if (i != ARRAY_ROW - 1) {
				printf(" ");
			} else {
				printf("\n");
			}
		}
	} else {

	}
}
