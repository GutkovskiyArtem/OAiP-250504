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
	while (scanf_s("%d", &var) == 0 || getchar() != '\n')
	{
		printf("wrong input! try again\n");
		rewind(stdin);
	}
	return var;
}
int easyrand(int start, int end)
{
	return start + rand() % (end - start + 1);
}
int output(int row, int col, int mat[100][100],int charact[100])
{
	int irow, icol;
	for (irow = 0; irow < row; irow++)
	{
		for (icol = 0; icol < col; icol++)
		{
			printf("|%4d ", mat[icol][irow]);
		}
		printf("|characteristic=%d\n", charact[irow]);
	}
}
