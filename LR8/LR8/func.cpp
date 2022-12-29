#include"func.h"
void maxwordlen(char**str,int argc,int *maxlen)
{
	int len1 = 0, len = 0, j = 0;
	for (size_t i = 0; i < argc; i++)
	{
		do
		{
			while (str[i][j] != ' '&& str[i][j]!='\0')
			{
				len1++;
				j++;
			}
			if (len < len1)
			{
				len = len1;
			}
			len1 = 0;
			j++;
		} while (str[i][j-1] != '\0');
		maxlen[i] = len;
		j = 0;
		len = 0;
	}
}
void ifword(char** argv,int argc)
{
	int j = 0;
	for (size_t i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j]<32 || argv[i][j]>32 && argv[i][j]<65|| argv[i][j]>90 && argv[i][j]<97 || argv[i][j]>122)
			{
				printf("wrong input. pleas check if you entered the words separated by a space");
				exit (1);
			}
			j++;
		}
		j = 0;
	}
}
void output(char** str, int argc, int* maxlen)
{
	printf("\n");
	for (size_t i = 1; i < argc; i++)
	{
		printf("\n%50s	|maximum word length=%d", str[i-1],maxlen[i-1]);
	}
}
int str_len(char** argv, int strnum)
{
	int j = 0,cnt=0;
	while (argv[strnum][j] != '\0')
	{
		cnt++;
		j++;
	}
	return cnt;
}
void copy(char** argv, int argc, char** str)
{	
	for (size_t i = 1; i < argc; i++)
	{
		str[i - 1] = (char*)malloc (str_len(argv, i) * sizeof(char));
		str[i - 1] = argv[i];
	}
}
void Insertion_sort(int n, int* maxlen,char**str)
{
	int newCharacteristic, location;
	char* newStr;
	for (int i = 1; i < n; i++)
	{
		newCharacteristic = maxlen[i];
		newStr = (char*)malloc(str_len(str, i) * sizeof(char));
		newStr = str[i];
		location = i - 1;
		while (location >= 0 && maxlen[location] < newCharacteristic)
		{
			maxlen[location + 1] = maxlen[location];
			str[location + 1] = str[location];
			location--;
		}
		maxlen[location + 1] = newCharacteristic;
		str[location + 1] = newStr;
	}
}
int* intsizech(int argc)
{
	int*maxlen = (int*)malloc(argc * sizeof(int));
	return maxlen;
}
char** charsizech(int argc)
{
	char**str = (char**)malloc((argc - 1) * sizeof(char*));
	return str;
}
void masfree(char** mas1, int* mas2)
{
	free(mas1);
	free(mas2);
}