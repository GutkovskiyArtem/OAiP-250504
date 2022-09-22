#include<stdio.h>
int main()
{
	float a, s, h;
	printf("enter the sides: ");
	scanf_s("%f", &a);
	h = a * 1.7320 / 2;
	s = a * a * 1.7320 / 4;
	printf("h=%6.3f\nS=%6.3f\n ", h, s);

}