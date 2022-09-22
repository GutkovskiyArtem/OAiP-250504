#include<stdio.h>
int main()
{
	int i;
	printf("1.informatics\n2.cultural studies\n3.math\n4.foreign language\n5.economy\n");
	scanf_s("%d", &i);
	switch (i)
	{
	case 1:
		printf("exam, test");
		break;
	case 2:
		printf("test");
		break;
	case 3:
		printf("exam, test");
		break;
	case 4:
		printf("exam, test");
		break;
	case 5:
		printf("exam");
		break;
	}
}