#include<stdio.h>
#define chek if (ch!=1){printf("error");return 0;}
int main()
{
	int array[100], n, choice, i, ch, ind, count,del;

	printf("1.manual input\n2.random numbers\n");
	ch = scanf_s("%d", &choice);
	chek
		switch (choice)
		{
		case 1:
			goto manual;
			break;
		case 2:
			goto random;
			break;
		default:
			printf("error");
			return 0;
			break;
		}
manual:
	printf("enter the number of elements\n");
	ch = scanf_s("%d", &n);
	chek
		for (i = 0; i < n; i++)
		{
			printf(": ");
			ch = scanf_s("%d", &array[i]);
			chek
		}
	goto removal;
random:
	printf("enter the number of elements\n");
	ch = scanf_s("%d", &n);
	chek
		for (i = 0; i < n; i++)
		{
			array[i] = rand() % 201 - 100;
		}
	printf("your array =");
	for (i = 0; i < n; i++)
	{
		printf(" %d", array[i]);
	}
removal:
	printf("\nenter the indent of deleting elements\n");
	ch = scanf_s("%d", &ind);
	chek
		del = ind;
	if (ind != 1)
	{
		for (i = 0; i <= n; i++)
		{
			if (i == del-1)
			{
				for (count = i; count < n; count++)
				{
					array[count] = array[count + 1];
				}
				del+=ind-1;
				n--;
			}
		}
		printf("result =");
		for (i = 0; i < n; i++)
		{
			printf(" %d", array[i]);
		}
	}
	else
		printf("array is empty");
}