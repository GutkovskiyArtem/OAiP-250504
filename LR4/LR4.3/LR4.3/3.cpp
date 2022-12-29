#include<time.h>
#include"func.h"
int main()
{
	int mat[100][100], res, size, icol, irow, choice,i;
	printf("\nenter the size of matrix: ");       
	size = numinputrange(1, 100);        
	printf("\n1.manual input\n2.random input\n: ");
	choice = numinputrange(1, 2);
	switch (choice)
	{
	case 1:
		printf("enter the matrix:\n");              
		for (irow = 0; irow < size; irow++)
		{
			for (icol = 0; icol < size; icol++)
			{
				mat[icol][irow] = numinput();
			}
		}
		printf("matrix:\n\n");
		for (irow = 0; irow < size; irow++)
		{
			for (icol = 0; icol < size; icol++)
			{
				printf("|%4d ", mat[icol][irow]);
			}
			printf("|\n");
		}
		break;
	case 2:
		srand(time(NULL));
		for (irow = 0; irow < size; irow++)          
		{
			for (icol = 0; icol < size; icol++)
			{
				mat[icol][irow] = easyrand(-100, 100);
			}
		}
		printf("matrix:\n\n");
		for (irow = 0; irow < size; irow++)
		{
			for (icol = 0; icol < size; icol++)
			{
				printf("|%4d ", mat[icol][irow]);
			}
			printf("|\n");
		}
		break;
	}
	printf("\n");
	printf("area elements: ");
		icol = size - 1;
		res = mat[size-1][0];
		for ( irow = 0; irow <= size/2-1; irow++)
		{
			for ( i = icol; i <= size-1; i++)
			{
				if (res>mat[i][irow])
				{
					res = mat[i][irow];
				}
				printf("%d, ", mat[i][irow]);
			}
			icol--;
		}
		icol = size / 2;
		for ( irow = size/2; irow <=size-1; irow++)
		{
			for ( i = icol; i <=size-1; i++)
			{
				if (res > mat[i][irow])
				{
					res = mat[i][irow];
					
				} 
				printf("%d, ", mat[i][irow]);
			}
			icol++;
		}
		printf("\nresult=%d", res);
}
