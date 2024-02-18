#include <stdio.h>
#include <string.h>

#define  ENROLL(INDEX, INPUT)  char INDEX ## _words[32] = "";   \
			       strcpy(INDEX ## _words, #INPUT);

int main(int argc, char** argv)
{
	ENROLL(firstAuthor, Dennis Ritchie)
	ENROLL(secondAuthor, Brian Kernighan)
	ENROLL(bookTitle, THE C PROGRAMMING LANGUAGE)

	printf("The great C book's title : %s\n", bookTitle_words);
	printf("Authors : %s and %s\n", firstAuthor_words, secondAuthor_words);
	printf("Version : 2nd Edition\n");

	return 0;
}
