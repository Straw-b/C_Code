#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int* p;
//	*p = 20;
//	int* p = NULL;
//	return 0;
//}


int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	if (end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}