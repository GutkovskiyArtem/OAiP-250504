#include<stdio.h>
int main()
{
	int m , k1 , k3 , k5 ;
	printf("enter the amount of rubles m: ");
	scanf_s("%d", &m);
		if (m % 2 == 0)
		{


			for (k5 = 0; k5 <= m / 5; k5++)
				for (k3 = 0; k3 <= m / 3; k3++)
				{
					k1 = 10 - k5 - k3;
					if (k5 * 5 + k3 * 3 + k1 == m && k5 + k3 + k1 == 10 && k5 > 0 && k3 > 0 && k1 > 0)
						printf("\nfive-ruble bills=%d\nthree-ruble bills=%d\nruble bills=%d\n", k5, k3, k1);

				}
		}
		else
			printf("impossible");
}
   
