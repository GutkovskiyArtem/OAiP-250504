#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
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
	while (scanf_s("%d", &var) == 0 || var != int(var) || getchar() != '\n')
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
int** sizech(int row,int col)
{
	int i;
	int** mas = (int**)malloc(row * sizeof(int*));
	for ( i = 0; i < row; i++)
	{
		mas[i] = (int*)malloc(col * sizeof(int));
	}
	return mas;
}
void output(int** mas,int row, int col)
{
	int irow, icol;
	printf("\narray:\n");
	for (irow = 0; irow < row; irow++)
	{
		for (icol = 0; icol < col; icol++)
		{
			printf("|%6.0d ", mas[irow][icol]);
		}
		printf("|\n");
	}
}
void input(int** mas, int row, int col)
{
	int choice, irow,icol;
	choice = numinputrange(1, 2);
	switch (choice)
	{
	 case 1:
		for ( irow = 0; irow < row; irow++)
		{
			for ( icol = 0; icol < col; icol++)
			{
				mas[irow][icol] = numinput();
			}
		}
		break;
	 case 2:
		 for ( irow = 0; irow < row; irow++)
		 {
			 for ( icol = 0; icol < col; icol++)
			 {
				 mas[irow][icol] = easyrand(-100, 100);
			 }
		 }
		 break;
	}
}
void sort(int** mas, int row, int col)
{
	int i, j, step, icol;
	int tmp;
	int* sum = (int*)malloc(col * sizeof(int));
	int* temp = (int*)malloc(col * sizeof(int));
	for (i = 0; i < row; i++)
	{
		sum[i] = 0;
		for (j = 1; j <= col; j++)
		{
			if (j % 2 == 0)
			{
				sum[i] += mas[i][j - 1];
			}
		}
	}
	for (step = row * col / 2; step > 0; step /= 2)
	{
		for (i = step; i < row; i++)
		{
			tmp = sum[i];
			for (icol = 0; icol < col; icol++)
			{
				temp[icol] = mas[i][icol];
			}
			for (j = i; j >= step; j -= step)
			{
				if (tmp > sum[j - step])
				{
					sum[j] = sum[j - step];
					for (icol = 0; icol < col; icol++)
					{
						mas[j][icol] = mas[j - step][icol];
					}
				}
				else
					break;
			}

			sum[j] = tmp;
			for (icol = 0; icol < col; icol++)
			{
				mas[j][icol] = temp[icol];
			}

		}

	}
}
void masfree(int** mas)
{
	free(mas);
}
