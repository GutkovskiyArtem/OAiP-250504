#include"func.h"
int main(int argc, char** argv)
{
	char** str=charsizech(argc);
	int* maxlen=intsizech(argc);
	ifword(argv, argc);
	copy(argv, argc, str);
	maxwordlen(str, argc-1, maxlen);
	output(str, argc,maxlen);
	Insertion_sort(argc-1, maxlen, str);
	output(str, argc,maxlen);
	masfree(str, maxlen);
}
