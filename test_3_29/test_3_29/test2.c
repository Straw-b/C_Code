#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}


//模拟实现库函数strlen
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}



//模拟实现库函数strcpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "hello";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}



//调整数组使奇数全部都位于偶数前面
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//#include <stdio.h>
//
//void sort_arr(int* arr, int sz)
//{
//	int* start = arr;
//	int* end = arr + sz - 1;
//	int tmp = 0;
//	while (start < end)
//	{
//		while ((*start % 2) == 1)//奇数
//		{
//			start++;
//		}
//		while ((*end % 2) == 0)//偶数
//		{
//			end--;
//		}
//		if (start<end)
//		{
//			tmp = *start;
//			*start = *end;
//			*end = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	sort_arr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
