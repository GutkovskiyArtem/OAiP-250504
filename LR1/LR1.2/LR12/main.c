#include<stdio.h>
int main()
{
	float centx,centy, point1x,point1y, point2x,point2y;
	 printf("enter the coordinates of the center of the circle separated by a space: ");
	 scanf_s("%f %f", &centx, &centy);
	 printf("enter the coordinates of the point wich the circle passes throught, separated by a space: ");
	 scanf_s("%f %f", &point1x,&point1y);
	 printf("enter the coordinates of the point to be checked separated by a space: ");
	 scanf_s("%f %f", &point2x,&point2y);
		 if ((point1x - centx) * (point1x - centx) + (point1y - centy) * (point1y - centy) == (point2x - centx) * (point2x - centx) + (point2y - centy) * (point2y - centy))
		  {
			 printf("the point belongs to the circle");
		  }
		 else
		 {
			 printf("the point does not belongs to the circle");
		 }
}