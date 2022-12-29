#include"func.h"
#include<malloc.h>
void input(int row, int** mas)
{
	int irow, icol = -1;
	for (irow = 0; irow < row; irow++)
	{
		mas[irow] = (int*)malloc(sizeof(int));
		do
		{
			icol++;
			mas[irow] = (int*)realloc(mas[irow], (icol + 1) * sizeof(int));
			mas[irow][icol] = numinput();
		} while (mas[irow][icol] != 1);
		icol = -1;
	}
}
void output(int row, int** mas)
{
	int icol = -1, irow;
	for (irow = 0; irow < row; irow++)
	{
		do
		{
			icol++;
			printf("%5d ", mas[irow][icol]);
		} while (mas[irow][icol] != 1);
		icol = -1;
		printf("\n");
	}
}
void eldelete(int row, int** mas, int k)
{
	int irow;
	for (irow = 0; irow < row; irow++)
	{
		mas[irow] = (int*)realloc(mas[irow], k * sizeof(int));
	}
}
void outputfin(int row, int** mas, int k)
{
	int irow, icol;
	for (irow = 0; irow < row; irow++)
	{
		icol = -1;
		do
		{
			icol++;
			printf("%5d ", mas[irow][icol]);
		} while (mas[irow][icol] != 1 && icol + 1 < k);
		printf("\n");
	}
}
int** sizech(size_t size)
{
	int** mas = (int**)malloc(size * sizeof(int*));
	return mas;
}
void masfree(int** mas)
{
	free(mas);
}