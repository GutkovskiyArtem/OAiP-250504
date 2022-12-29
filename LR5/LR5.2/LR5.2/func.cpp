#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int numinputrange(int min, int max)
{
	int var;
	while (scanf_s("%d", &var) == 0 || var < min || var>max || getchar() != '\n')
	{
		printf("wrong input! try again\n");
		rewind(stdin);
	}
	return var;
}
int numinput()
{
	int var;
	while (scanf_s("%d", &var) == 0 || var != int(var) || var < 0 || getchar() != '\n')
	{
		printf("wrong input! try again\n");
		rewind(stdin);
	}
	return var;
}
