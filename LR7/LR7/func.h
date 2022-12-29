#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int numinputrange(int min, int max);
char* strinput();
char* wordinput();
int str_len(char* str);
int comparison_word(char* str1, char* str2);
int comparison_string(char* str1, char* str2);
void masfree(char* str1, char* str2);