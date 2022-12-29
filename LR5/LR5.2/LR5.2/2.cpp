#include<stdio.h>
#include"arrays.h"
int main()
{
	int  row, irow,icol=-1,k;
	printf("\nenter the number of rows: ");
	row = numinputrange(1, 100);
	int** mas = sizech(row);
	printf("\nenter the array:\n");
	input(row, mas);
	output(row, mas);
	printf("\nenter the number of the element after which the elements will be deleted: ");
	k = numinput();
	eldelete(row, mas, k);
	printf("\nresult:\n");
	outputfin(row, mas, k);
	masfree(mas);
	
}