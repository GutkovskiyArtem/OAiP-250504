#include"func.h"
int main()
{
	srand(time(NULL));
	int row, col, irow, icol;
	printf("enter the number of rows: ");
	row = numinputrange(0, 100);
	printf("enter the number of culumns: ");
	col = numinputrange(0, 100);
	int** mas = sizech(row, col);
	printf("\n1.manual input:\n2.random input:\n");
	input(mas, row, col);
	output(mas, row, col);
	sort(mas, row, col);
	output(mas, row, col);
	masfree(mas);
}