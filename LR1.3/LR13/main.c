#include<stdio.h>
int main()
{
	float n;
	int a,b,c;
	printf("enter the nuber N: ");
	scanf_s("%f", &n);
	while (n!=(int)n)
	{
		n *= 10;
	}
	a = n * rand();
	b = n * rand();
	c = n * rand();
	printf("N is divisor for numbers\n a=%d\nb=%d\nc=%d\n",a,b,c);
}