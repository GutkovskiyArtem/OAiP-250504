#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>
#include<Windows.h>
int easyrand(int start, int end);
int* sizech(size_t size);
void filling(int* mas, size_t size);
void output(int* mas, size_t size);
double timer(clock_t begin, clock_t end);
double choicesorting(int* mas, size_t size);
void reversesorting(int* mas, size_t size);
double bubblesorting(int* mas, size_t size);
void copy(int* mas1, int* mas2, int size);
void masfree(int* mas);
int bufsizechek(int*mas, size_t size);
