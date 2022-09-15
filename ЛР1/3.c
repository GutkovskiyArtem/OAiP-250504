#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "ru");
	float n;
	int a,b,c;
	
	printf("¬ведите число N: ");
	scanf_s("%f", &n);
	while (n!=(int)n)
	{
		n *= 10;
	}
	a = n * rand();
	b = n * rand();
	c = n * rand();
	printf("N €вл€етс€ делителем дл€ чисел\n a=%d\nb=%d\nc=%d\n",a,b,c);
}