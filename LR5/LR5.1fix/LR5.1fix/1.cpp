#include"arrays.h"
int main()
{
	int* mas;
	int i, size, cnt = 1;
	printf("enter the size of the array: ");
	size = numinputrange(0, 100);
	mas = sizech(size);
	printf("enter the array: ");
	input(size, mas);
	printf("array:\n");
	output(size, mas);
	mas = resize(size, mas);
	sqrinsert(size, mas);
	printf("\nresult:\n");
	output(size * 2, mas);
	masfree(mas);
}