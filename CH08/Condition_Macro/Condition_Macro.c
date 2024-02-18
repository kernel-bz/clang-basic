#include <stdio.h>

/* You can make a below source code a comment.  */
#define  GREETING_MODE

/* Select the language you want please! */
/*       First language is English.     */
/*       Second language is French.     */
/*       Third language is Deutsch.     */
/*       Forth language is Dansk.       */
/*       Fifth language is Korean.      */
/*      Which language do you want?     */
#define  LANGUAGE  3

int main(int argc, char** argv)
{
#ifdef  GREETING_MODE
	#if    LANGUAGE == 1
		printf("Hello.\n");
		printf("Nice to meet you.\n");
	#elif  LANGUAGE == 2
		printf("Bonjour.\n");
		printf("Enchante!\n");
	#elif  LANGUAGE == 3
		printf("Hallo!\n");
		printf("Ich freue mich.\n");
	#elif  LANGUAGE == 4
		printf("Hej.\n");
		printf("Jeg kommer fra Danmark.\n");
	#elif  LANGUAGE == 5
		printf("Annyeong\n");
		printf("Bangabseubnida.\n\n\n");
		printf("I wrote Korean sentences in Roma alphabet.\n");
	#else
		printf("There is no setting for any language.....\n");
	#endif
#endif
	printf("Program is terminated.\n");

	return 0;
}
