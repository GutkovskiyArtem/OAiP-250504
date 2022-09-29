#include<stdio.h>
int main()
{
	;
	int a,b,c, n;
	printf("enter the nuber N: ");
	scanf_s("%d", &n);
	printf("enter the numbers a,b,c: ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a%n!=0&&b%n!=0&&c%n!=0)
	{
		printf("no");
		return 0;
	}    
	else
	{


		if (a % n == 0)
		{
			printf("a=%d\n", a);
		}
		if (b % n == 0)
		{
			printf("b=%d\n", b);
		}
		if (c % n == 0)
		{
			printf("c=%d", c);
		}
	}
}