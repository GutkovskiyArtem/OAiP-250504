#include<stdio.h>
#include"func.h"
#include<malloc.h>
void output(int size, int* mas)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", mas[i]);
	}
}
void input(int size, int* mas)
{
	int i;
	for (i = 0; i < size; i++)
	{
		mas[i] = numinput();
	}
}
void sqrinsert(int size, int* mas)
{
	int i, cnt = 1;
	for (i = size - 1; i >= 0; i--)
	{
		mas[size * 2 - cnt] = sqr(mas[i]);
		mas[size * 2 - cnt - 1] = mas[i];
		cnt += 2;
	}
}
int* sizech(size_t size)
{
	int* mas = (int*)malloc(size * sizeof(int));
	return mas;
}
int* resize(size_t size, int* mas)
{
	mas = (int*)realloc(mas, (size * 2) * sizeof(int));
	return mas;
}
void masfree(int* mas)
{
	free(mas);
}