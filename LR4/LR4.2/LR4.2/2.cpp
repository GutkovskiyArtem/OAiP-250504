
#include<time.h>
#include"myfunc.h"
int main()
{
	int col, row, icol, irow, choice, colnum,rownum=-1;
	float mat[100][100];
	printf("\nenter the number of rows: ");       
	row = numinputrange(1, 100);
	printf("enter the number of columns: ");
	col = numinputrange(1, 100);                   
	printf("\n1.manual input\n2.random input\n: ");
	choice = numinputrange(1, 2);
	switch (choice)
	{
	case 1:
		printf("enter the matrix:\n");              
		for (irow = 0; irow < row; irow++)
		{
			for (icol = 0; icol < col; icol++)
			{
				mat[icol][irow] = numinput();
			}
		}
		printf("matrix:\n\n");
		output(row, col, mat);
		break;
	case 2:
		srand(time(NULL));
		for (irow = 0; irow < row; irow++)          
		{
			for (icol = 0; icol < col; icol++)
			{
				mat[icol][irow] = easyrand(-100, 100);
			}
		}
		printf("matrix:\n\n");
		output(row, col, mat);
		break;
	}
	for (irow = 0; irow < row; irow++)
	{
		for (icol = 0; icol < col; icol++)
		{
			if (mat[icol][irow]<0)
			{
				rownum = irow;
				colnum = rownum;
				printf("\nnumber of the line with negative element= %d", rownum+1);
				
					for (rownum = 0; rownum < row; rownum++)
					{
						mat[colnum][rownum] /= 2;
					}
					break;
			}
		}
	}
	if (rownum==-1)
	{
		printf("\nthere are no negative elements");
		return 0;
	}
	printf("\nresult:\n");
	for (irow = 0; irow < row; irow++)
	{
		for (icol = 0; icol < col; icol++)
		{
			if (mat[icol][irow]!=int(mat[icol][irow]))
			{
				printf("|%6.1f ", mat[icol][irow]);
			}
			else
			{
				printf("|%6.0f ", mat[icol][irow]);
			}
		}
		printf("|\n");
	}
}
