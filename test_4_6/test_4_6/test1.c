#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print(char *str)
{
	printf("hehe:%s", str);
}

void test( void (*p)(char*) )
{
	printf("test\n");
	p("bit");
}

int main()
{
	test(print);
	return 0;
}