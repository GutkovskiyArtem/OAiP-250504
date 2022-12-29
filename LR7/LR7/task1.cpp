#include"task1.h"
void task1(void)
{
	printf("enter the string: ");
	char* str1 = strinput();
	printf("enter the word: ");
	char* word = wordinput();
	int res = comparison_word(str1, word);
	printf("%d", res);
	masfree(str1, word);
}

