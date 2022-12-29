#include"task2.h"
void task2(void)
{
	printf("enter the first string: ");
	char* str1 = strinput();
	printf("enter the second string: ");
	char* str2 = strinput();
	int res = comparison_string(str1, str2);
	if (res==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	masfree(str1, str2);
}