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


//ģ��ʵ�ֿ⺯��strlen
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



//ģ��ʵ�ֿ⺯��strcpy
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



//��������ʹ����ȫ����λ��ż��ǰ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//#include <stdio.h>
//
//void sort_arr(int* arr, int sz)
//{
//	int* start = arr;
//	int* end = arr + sz - 1;
//	int tmp = 0;
//	while (start < end)
//	{
//		while ((*start % 2) == 1)//����
//		{
//			start++;
//		}
//		while ((*end % 2) == 0)//ż��
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
