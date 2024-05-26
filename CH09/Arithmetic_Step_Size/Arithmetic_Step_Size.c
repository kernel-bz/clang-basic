#include <stdio.h>

int main(int argc, char** argv) {
	char char_val[3] = {'A', 'B', 'C'};
	short short_val[3] = {27, 64, 125};
	int int_val[3] = {216, 512, 1000};

	char* char_ptr = NULL;
	short* short_ptr = NULL;
	int* int_ptr = NULL;

	char_ptr = &char_val[1];
	short_ptr = &short_val[1];
	int_ptr = &int_val[1];

	// In pointers, multiplication, division are impossible. But addition and subtraction are possible.

	printf("Pointer \'char_ptr\' has a %lu byte size.\n\n", sizeof(char_ptr));
	printf("\'char_ptr\'s value is %u and the address of \'char_val[1]\' is %u.\n", (unsigned int)char_ptr, (unsigned int)&char_val[1]);
	printf("The value that \'char_ptr\' has is %c and matches with the value of \'char_val[1]\'. They are same.\n\n", *(char_ptr));
	printf("\'char_ptr - 1\'s value is %u and the address of \'char_val[0]\' is %u.\n", (unsigned int)(--char_ptr), (unsigned int)&char_val[0]);
	printf("The value that \'char_ptr - 1\' has is %c and matches with the value of \'char_val[0]\'. They are same.\n\n", *(char_ptr));
	char_ptr++;
	printf("\'char_ptr + 1\'s value is %u and the address of \'char_val[2]\' is %u.\n", (unsigned int)(++char_ptr), (unsigned int)&char_val[2]);
	printf("The value that \'char_ptr + 1\' has is %c and matches with the value of \'char_val[2]\'. They are same.\n\n", *(char_ptr));
	printf("In \'char\' variable, the arithmetic step size is 1 Byte.\n\n\n");

	printf("Pointer \'short_ptr\' has a %lu byte size.\n\n", sizeof(short_ptr));
	printf("\'short_ptr\'s value is %u and the address of \'short_val[1]\' is %u.\n", (unsigned int)short_ptr, (unsigned int)&short_val[1]);
	printf("The value that \'short_ptr\' has is %hd and matches with the value of \'short_val[1]\'. They are same.\n\n", *(short_ptr));
	printf("\'short_ptr - 1\'s value is %u and the address of \'short_val[0]\' is %u.\n", (unsigned int)(--short_ptr), (unsigned int)&short_val[0]);
	printf("The value that \'short_ptr - 1\' has is %hd and matches with the value of \'short_val[0]\'. They are same.\n\n", *(short_ptr));
	short_ptr++;
	printf("\'short_ptr + 1\'s value is %u and the address of \'short_val[2]\' is %u.\n", (unsigned int)(++short_ptr), (unsigned int)&short_val[2]);
	printf("The value that \'short_ptr + 1\' has is %hd and matches with the value of \'short_val[2]\'. They are same.\n\n", *(short_ptr));
	printf("In \'short\' variable, the arithmetic step size is 2 Byte.\n\n\n");

	printf("Pointer \'int_ptr\' has a %lu byte size.\n\n", sizeof(int_ptr));
	printf("\'int_ptr\'s value is %u and the address of \'int_val[1]\' is %u.\n", (unsigned int)int_ptr, (unsigned int)&int_val[1]);
	printf("The value that \'int_ptr\' has is %d and matches with the value of \'int_val[1]\'. They are same.\n\n", *(int_ptr));
	printf("\'int_ptr - 1\'s value is %u and the address of \'int_val[0]\' is %u.\n", (unsigned int)(--int_ptr), (unsigned int)&int_val[0]);
	printf("The value that \'int_ptr - 1\' has is %d and matches with the value of \'int_val[0]\'. They are same.\n\n", *(int_ptr));
	int_ptr++;
	printf("\'int_ptr + 1\'s value is %u and the address of \'int_val[2]\' is %u.\n", (unsigned int)(++int_ptr), (unsigned int)&int_val[2]);
	printf("The value that \'int_ptr + 1\' has is %d and matches with the value of \'int_val[2]\'. They are same.\n\n", *(int_ptr));
	printf("In \'int\' variable, the arithmetic step size is 4 Byte.\n\n\n");

	return 0;
}
