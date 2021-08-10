#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>

//模拟实现strncpy

////库函数
//char * __cdecl strncpy(char * dest, const char * source, size_t count)
//{
//	char *start = dest;
//
//	while (count && (*dest++ = *source++))    /* copy string */
//		count--;
//
//	if (count)                              /* pad out with zeroes */
//	while (--count)
//		*dest++ = '\0';
//
//	return(start);
//}

//#include <stdio.h>
//
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	char* str = dest;
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//	if (count)
//	while (--count)
//	{
//		*dest++ = '\0';
//	}
//	return str;
//}
//
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}





//模拟实现strncat

////库函数
//char * __cdecl strncat(char * front, const char * back, size_t count)
//{
//	char *start = front;
//	while (*front++)
//		;
//	front--;
//	while (count--)
//	if (!(*front++ = *back++))
//		return(start);
//	*front = '\0';
//	return(start);
//}

//#include <stdio.h>
//
//char* my_strncat(char* front, const char* back, size_t count)
//{
//	char* str = front;
//	while (*front)
//	{
//		front++;
//	}
//	while (count--)
//	if (!(*front++ = *back++))
//		return str;
//	*front = '\0';
//	return str;
//}
//
//int main()
//{
//	char arr1[100] = "hello\0";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}




//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//#include<stdio.h>
//#include<stdlib.h>
//
//int Find(int arr[], int len)
//{
//	int i, j, k;
//	for (i = 0; i<len; i++)
//	{
//		k = 0;
//		for (j = 0; j<len; j++)
//		{
//			if (arr[j] == arr[i])
//			{
//				k++;
//			}
//		}
//		if (k == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find(arr, sz);
//	return 0;
//}