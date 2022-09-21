#include<stdio.h>
int main()
{
	float cent[2], point1[2], point2[2];
	 printf("enter the coordinates of the center of the circle separated by a space: ");
	 scanf_s("%f %f", &cent[0],&cent[1]);
	 printf("enter the coordinates of the point wich the circle passes throught, separated by a space: ");
	 scanf_s("%f %f", &point1[0],&point1[1]);
	 printf("enter the coordinates of the point to be checked separated by a space: ");
	 scanf_s("%f %f", &point2[0],&point2[1]);
		 if ((point1[0] - cent[0]) * (point1[0] - cent[0]) + (point1[1] - cent[1]) * (point1[1] - cent[1]) == (point2[0] - cent[0]) * (point2[0] - cent[0]) + (point2[1] - cent[1]) * (point2[1] - cent[1]))
		  {
			 printf("the point belongs to the circle");
		  }
		 else
		 {
			 printf("the point does not belongs to the circle");
		 }
}