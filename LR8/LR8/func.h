#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void maxwordlen(char** str, int argc, int *maxlen);
void ifword(char** argv, int argc);
void copy(char** argv, int argc,char **str);
void output(char** str, int argc, int*maxlen);
int str_len(char** argv, int strnum);
void Insertion_sort(int n, int* maxlen, char** str);
int* intsizech(int argc);
char** charsizech(int argc);
void masfree(char** mas1, int * mas2);