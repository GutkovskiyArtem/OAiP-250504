#include<stdio.h>
#include<math.h>
int main()
{
	float x, r, step, cost, ctg;
	int fakt, e, z = -1, i = 2, h = 1;
	printf("enter the angle x: ");
	scanf_s("%f", &x);
	while (x >= 360)
	{
		x -= 360;

	}
	if (x == 0 || x == 180)
	{
		printf("error");
		return 0;
	}
	else
	{


		r = x * 0.0174533;
		step = r * r;
		fakt = 2;
		cost = 1;
		for (e = 4; e > 0; e--)
		{
			cost = cost + z * step / fakt;
			step = step * r * r;
			z *= -1;
			i += 2;
			fakt = fakt * (i - 1) * i;
		}
		ctg = cost / sqrt(1 - cost * cost);
		printf("%f", ctg);
	}
}
