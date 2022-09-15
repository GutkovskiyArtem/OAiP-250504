#include<stdio.h>
#include<locale>
int main()
{
	setlocale(LC_ALL, "ru");
	float cent[2], point1[2], point2[2];
	 printf("введите координаты центра окружности через пробел: ");
	 scanf_s("%f %f", &cent[0],&cent[1]);
	
	 printf("введите координаты точки через которую проходит окружность через пробел: ");
	 scanf_s("%f %f", &point1[0],&point1[1]);
	 
	 printf("введите координаты точки которую нужно проверить через пробел : ");
	 scanf_s("%f %f", &point2[0],&point2[1]);
	 
	 
	




		 if ((point1[0] - cent[0]) * (point1[0] - cent[0]) + (point1[1] - cent[1]) * (point1[1] - cent[1]) == (point2[0] - cent[0]) * (point2[0] - cent[0]) + (point2[1] - cent[1]) * (point2[1] - cent[1]))
		  {
			 printf("точка лежит на окружности");
		  }
		 else
		 {
			 printf("точка не лежит на окружности");
		 }

		

	 
	 
	 
		 
	 
	
}