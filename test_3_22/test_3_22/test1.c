#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int* test()
{
	int a = 10;
	return &a;
}

int main()
{
	int *p = test();
	*p = 20;

	return 0;
}