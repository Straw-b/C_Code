#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#include <stdio.h>
//
//int main()
//{
//	int money = 0;
//	int count = 0;//����ˮ�Ĵ���
//	int tmp = 0;//��ƿ��
//	printf("������Ǯ����");
//	scanf("%d", &money);
//	count = money;
//	tmp = money;
//	while (tmp>=2)
//	{
//		count = count + tmp / 2;
//		tmp = tmp / 2 + tmp % 2;
//	}
//	printf("%dƿ\n", count);
//	return 0;
//}


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
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
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