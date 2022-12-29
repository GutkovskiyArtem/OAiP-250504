#include"func.h"
void input(int row, int col, int** mas)
{
	int irow, icol;
	for (irow = 0; irow < row; irow++)
	{
		for (icol = 0; icol < col; icol++)
		{
			mas[irow][icol] = numinput();
		}
	}
}
void output(int row, int col, int** mas)
{
	int irow, icol;
	for (irow = 0; irow < row; irow++)
	{
		for (icol = 0; icol < col; icol++)
		{
			printf("%5d ", mas[irow][icol]);
		}
		printf("\n");
	}
}
int eldelete(int row, int col, int** mas)
{
	int k, cnt = 0, icol, irow, j;
	k = col;
	for (icol = 0; icol < k; icol++)
	{
		cnt = 0;
		for (irow = 0; irow < row; irow++)
		{
			if (mas[irow][icol] < 0)
			{
				cnt++;
			}
		}
		if (cnt == row)
		{
			k--;
			for (irow = 0; irow < row; irow++)
			{
				for (j = icol; j < col - 1; j++)
				{
					mas[irow][j] = mas[irow][j + 1];
				}
			}
			icol--;
		}
	}
	return icol;
}
int** sizech(size_t row, size_t col)
{
	int irow;
	int** mas = (int**)malloc(row * sizeof(int*));
	for (irow = 0; irow < row; irow++)
	{
		mas[irow] = (int*)malloc(col * sizeof(int));
	}
	return mas;
}
int** resize(size_t row, size_t icol, int** mas)
{
	int irow;
		for (irow = 0; irow < row; irow++)
		{
			mas[irow] = (int*)realloc(mas[irow], (icol) * sizeof(int));
		}
		return mas;
}