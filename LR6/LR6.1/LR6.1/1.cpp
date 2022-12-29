#include"func.h"


/*int main()
{
	int* mas1, * mas2;
	const size_t size = 30;
	double timespent = 0.0;
	mas1 = sizech(size);
	mas2 = sizech(size);
	srand(time(NULL));
	printf("1.random elements:");
	filling(mas1, size);
	output(mas1, size);
	copy(mas1, mas2, size);
	output(mas2, size);
	choicesorting(mas1, size);
	output(mas1, size);
	bubblesorting(mas2, size);
	output(mas2, size);
	printf("\n2.reverse sorted elements:");
	reversesorting(mas1, size);
	output(mas1, size);
	copy(mas1, mas2, size);
	output(mas2, size);
	choicesorting(mas1, size);
	output(mas1, size);
	bubblesorting(mas2, size);
	output(mas2, size);
}*/
int main()
{
	int* mas1, * mas2;
	const size_t size = 10000;
	double timespent = 0.0;
	mas1 = sizech(size);
	mas2 = sizech(size);
	srand(time(NULL));
	printf("1.random elements:");
	filling(mas1, size);
	copy(mas1, mas2, size);
	timespent=choicesorting(mas1, size);
	printf("\nsorting by choise elapsed time is %f seconds", timespent);
	timespent=bubblesorting(mas2, size);
    printf("\nsorting by bubble elapsed time is %f seconds", timespent);
	printf("\n2.reverse sorted elements:");
	reversesorting(mas1, size);
	copy(mas1, mas2, size);
	timespent = choicesorting(mas1, size);
	printf("\nsorting by choise elapsed time is %f seconds", timespent);
	timespent = bubblesorting(mas2, size);
	printf("\nsorting by bubble elapsed time is %f seconds", timespent);
	masfree(mas1);
	masfree(mas2);
}
