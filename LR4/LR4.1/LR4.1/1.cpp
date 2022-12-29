#include<time.h>
#include"func.h"

int main()
{
	int mat[100][100],charact[100], col, row, icol,irow,choice,i;
	
	printf("\nenter the number of rows: ");       
	row = numinputrange(1, 100);
	printf("enter the number of columns: ");
	col = numinputrange(1,100);                   
	printf("\n1.manual input\n2.random input\n: ");
	choice = numinputrange(1,2);
	switch (choice)
	{
	case 1:
		printf("enter the matrix:\n");              
			for (irow = 0; irow < row; irow++)
			{
				charact[irow] = 0;
				for (icol = 0; icol < col; icol++)
				{
					mat[icol][irow] = numinput();
					if (mat[icol][irow]>0)
					{
						charact[irow] += mat[icol][irow];  
					}
				}
			}
			printf("matrix:\n\n");
			output(row, col, mat, charact);
		break;
	case 2:
		srand(time(NULL));
		for (irow = 0; irow < row; irow++)          
		{
			charact[irow] = 0;
			for (icol = 0; icol < col; icol++)
			{
				mat[icol][irow] = easyrand(-100,100);
				if (mat[icol][irow] > 0)
				{
					charact[irow] += mat[icol][irow];  
				}
			}
		}
		printf("matrix:\n\n");
		output(row, col, mat, charact);
		break;
	}
	for (irow = 0; irow < row-1; irow++)      
	{	
		for ( i = 0; i < row-irow-1; i++)
		{
			if (charact[i] > charact[i + 1])
			{
				int tempcharact = charact[i];
				charact[i] = charact[i + 1];
				charact[i + 1] = tempcharact;
				for (icol = 0; icol < col; icol++)
				{
					int temp = mat[icol][i];
					mat[icol][i] = mat[icol][i + 1];
					mat[icol][i + 1] = temp;
				}
			}
		}
	}
	printf("result:\n\n");                      
	output(row, col, mat, charact);
}

