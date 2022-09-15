#include<stdio.h>
#include<locale>
int main()
{
	setlocale(LC_ALL, "ru");
	float a, s, h;
	
	
	printf("введите длину сторон: ");
	scanf_s("%f", &a);
	h = a * 1.7320 / 2;
	s = a * a * 1.7320 / 4;
	printf("h=%6.3f\nS=%6.3f\n ", h, s);

}