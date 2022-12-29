#include"arrays.h"
int main()
{
	int row, col, irow, icol,cnt=0,i,j,k;
	int** mas;
	printf("enter the number of rows: ");
	row = numinputrange(1, 100);
	printf("enter the number of columns: ");
	col = numinputrange(1, 100);
	mas=sizech(row, col);
	printf("\nenter the array:\n");
	input(row, col, mas);
	printf("the array:\n");
	output(row, col, mas);
	icol=eldelete(row, col, mas);
	mas=resize(row, icol, mas);
	printf("result:\n");
	output(row, icol, mas);
	
}