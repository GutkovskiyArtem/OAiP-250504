#include <stdio.h>


int main()
{
	char str[20], inf[] = "exam, test", cult[] = "test", math[] = "exam, test", foreign[] = "exam, test", eco[]="exam";
	printf(": ");
	scanf_s("%s", &str, sizeof(str));
	if (str[0] == 'i' && str[1] == 'n'||str[0]=='I'&&str[1]=='n')
	{
		printf("%s",inf);
	}
	else if (str[0] == 'c' & str[1] == 'u' || str[0] == 'C' && str[1] == 'u')
	{
		printf("%s",cult);
		
	}
	else if (str[0] == 'm' & str[1] == 'a' || str[0] == 'M' && str[1] == 'a')
	{
		printf("%s",math);
	}
	else if (str[0] == 'f' & str[1] == 'o' || str[0] == 'F' && str[1] == 'o')
	{
		printf("%s",foreign);
	}
	else if (str[0] == 'e' & str[1] == 'c' || str[0] == 'E' && str[1] == 'c')
	{
		printf("%s",eco);
	}
	else
	{
		printf("error! wrong input");
	}
	return 0;
}



	
	
	