#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>
int easyrand(int start, int end)
{
	return start + rand() % (end - start + 1);
}
int* sizech(size_t size)
{
	int* mas = (int*)malloc(size * sizeof(int));
	return mas;
}
void filling(int* mas, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		mas[i] = easyrand(-100, 100);
	}
}
void output(int* mas, size_t size)
{
	printf("\n\n");
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", mas[i]);
	}
}
double timer(clock_t begin, clock_t end)
{
	double time_spent = 0.0;
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	return time_spent;
}
double choicesorting(int* mas, size_t size)
{
	clock_t begin = clock();
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < 0)
		{
			int minPosition = i;
			for (int j = i + 1; j < size; j++)
				if (mas[minPosition] > mas[j])
					minPosition = j;
			int tmp = mas[minPosition];
			mas[minPosition] = mas[i];
			mas[i] = tmp;
		}
	}
	clock_t end = clock();
	double timespent=timer(begin, end);
	return timespent;
}
void stop()
{
	printf("\n\nenter 1 to continue\n\n");
	while (1)
	{
		Sleep(1);
		if (getchar() == '1')
		{
			rewind(stdin);
			break;
		}
	}
}
int bufsizechek(int* mas, size_t size)
{
	int cnt = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i]<0)
		{
			cnt += 1;
		}
	}
	return cnt;
}
double bubblesorting(int* mas, size_t size)
{
	
	int tmp, cnt = 0, buf;
	bool noSwap;
	buf=bufsizechek(mas, size);
	int* buff = (int*)malloc(buf * sizeof(int));
	clock_t begin = clock();
	int j=0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i]<0)
		{
			buff[j] = mas[i];
			j++;
		}
	}
	for (int i = buf - 1; i >= 0; i--)
	{
			noSwap = 1;
			for (int j = 0; j < i; j++)
			{
				
				if (buff[j] > buff[j + 1])
				{
					tmp = buff[j];
					buff[j] = buff[j + 1];
					buff[j + 1] = tmp;
					noSwap = 0;
				}
			}
			if (noSwap == 1)
				break;
	}
	j = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i]<0)
		{
			mas[i] = buff[j];
			j++;
		}
	}
	clock_t end = clock();
	double timespent = timer(begin, end);
	return timespent;
}
void copy(int* mas1, int* mas2, int size)
{
	for (int i = 0; i < size; i++)
	{
		mas2[i] = mas1[i];
	}
}
void masfree(int* mas)
{
	free(mas);
}
void reversesorting(int* mas, size_t size)
{
	int tmp, cnt = 0, buf;
	bool noSwap;
	buf = bufsizechek(mas, size);
	int* buff = (int*)malloc(buf * sizeof(int));
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < 0)
		{
			buff[j] = mas[i];
			j++;
		}
	}
	for (int i = buf - 1; i >= 0; i--)
	{
		noSwap = 1;
		for (int j = 0; j < i; j++)
		{

			if (buff[j] < buff[j + 1])
			{
				tmp = buff[j];
				buff[j] = buff[j + 1];
				buff[j + 1] = tmp;
				noSwap = 0;
			}
		}
		if (noSwap == 1)
			break;
	}
	j = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < 0)
		{
			mas[i] = buff[j];
			j++;
		}
	}
}

