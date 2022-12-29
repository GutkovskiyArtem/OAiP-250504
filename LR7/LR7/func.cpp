#include"func.h"
int numinputrange(int min, int max)
{
	int var;
	while (scanf_s("%d", &var) == 0 || var < min || var>max || getchar() != '\n')
	{
		printf("wrong input! try again\n");
		rewind(stdin);
	}
	return var;
}
char *strinput()
{
	char c,*str=(char*)malloc(sizeof(char));
	int i=0;
	    //  str[i] < 32 || str[i]>32 && str[i] < 65 || str[i]>90 && str[i] < 97 || str[i]>122)    בוח צûפנ
		//  str[i]<32 || str[i]>32 &&<48 || str[i]>57 && str[i]<65 || str[i]>90 && str[i]<97 || str[i]> 122  ס צûפנאלט
	while ((c = getchar()) != '\n')
	{
		if (c < 32 || c>32 && c < 65 || c>90 && c < 97 || c>122)
		{
			printf("wrong input! try again\n");
			rewind(stdin);
			i = 0;
		}
		else
		{
			str = (char*)realloc(str, (i + 1) * sizeof(char));
			str[i] = c;
			i++;
		}
		str = (char*)realloc(str, (i + 1) * sizeof(char));
		str[i] = '\0';
	}
	return str;
}
char* wordinput()
{
	char c, * str = (char*)malloc(sizeof(char));
	int i = 0;
	while ((c = getchar()) != '\n')
	{
		if (c <= 32 || c>=32 && c < 65 || c>90 && c < 97 || c>122)
		{
			printf("wrong input! try again\n");
			rewind(stdin);
			i = 0;
		}
		else
		{
			str = (char*)realloc(str, (i + 1) * sizeof(char));
			str[i] = c;
			i++;
		}
		str = (char*)realloc(str, (i + 1) * sizeof(char));
		str[i] = '\0';
	}
	return str;
}
int str_len(char* str)
{
	int i = 0,len=0;
	while (str[i]!='\0')
	{
		len++;
		i++;
	}
	return len;
}
int ifletter(char c)
{
	int res;
	if (c <= 32 || c >= 32 && c < 65 || c>90 && c < 97 || c>122)
	{
		res = 0;
	}
	else
	{
		res = 1;
	}
	return res;
}
int comparison_word(char* str1, char* str2)
{
	int i = 0,k=0,res=0;
	int len1 = str_len(str1), len2=str_len(str2);
		for (size_t i = 0; i < len1+1; i++)
		{
			if (str2[k]==str1[i]&&ifletter(str2[k])==1&&ifletter(str1[i])==1)
			{
				k++;
			}
			else
			{
				if (k==len2 && ifletter(str1[i])==0 && ifletter(str1[i-len2-1])==0)
				{
					res++;
					k = 0;
				}
				else
				{
					k = 0;
				}
			}
		}
	return res;
}
int comparison_string(char* str1, char* str2)
{
	int i = 0, k = 0;
	int len1 = str_len(str1), len2 = str_len(str2);
	int res=0;
	for (size_t i = 0; i < len1 + 1; i++)
	{
		if (str2[k] == str1[i] && str2[k]!='\0' && str1[i]!='\0')
		{
			k++;
		}
		else
		{
			if (k == len2 )
			{
				res=1;
			}
			else
			{
				k = 0;
			}
		}
	}
	return res;
}
void masfree(char* str1, char* str2)
{
	free(str1);
	free(str2);
}
