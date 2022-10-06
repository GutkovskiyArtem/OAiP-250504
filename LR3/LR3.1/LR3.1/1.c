#include<stdio.h>
#define chek if (ch!=1){printf("error");return 0;}
int main()
{
	int array[100], n, choice,i,ch,max=0,maxn=0,sum=0;

	printf("1.manual input\n2.random input\n");
	ch=scanf_s("%d", &choice);
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
		ch=scanf_s("%d", &array[i]);
		chek
	}
	goto max;
random:
	printf("enter the number of elements\n");
	ch = scanf_s("%d", &n);
	chek
	for ( i = 0; i < n; i++)
	{
		array[i] = rand()%201-100;
	}
	printf("array =");
	for (i = 0; i < n; i++)
	{
		printf(" %d", array[i]);
	}

	max:
	for ( i = 0; i < n; i++)
	{
		if (abs(array[i])>abs(max))
		{
			max = array[i];
			maxn = i+1;
		}
	}
	printf("\nthe number of the maximum modulo element=%d", maxn);
	for ( i = 0; i < n; i++)
	{
		if (array[i]>0)
		{
			for ( i ; i < n-1; i++)
			{
				sum = sum + array[i + 1];
			}
			printf("\nsum=%d", sum);
			return 0;
		}
	}
}