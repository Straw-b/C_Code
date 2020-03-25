#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);//原数组
//	reverse(arr, sz);
//	print(arr, sz);//逆置数组
//	init(arr, sz);
//	print(arr, sz);//全0数组
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("before: a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after : a=%d b=%d\n", a, b);
//	return 0;
//}



//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	int ret = 0;
//	scanf("%d %d", &m, &n);
//	ret = m^n;//异或
//	while (ret)
//	{
//		if (ret & 1 == 1)
//			count++;
//		ret = ret >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	int a = 0;
//	int b = 0;
//	printf("奇数位：");
//	for (i = 0; i < 32; i += 2)
//	{
//		a = (num >> i) & 1;//奇数位
//		printf("%d ", a);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 1; i < 32; i += 2)
//	{
//		b = (num >> i) & 1;//偶数位
//		printf("%d ", b);
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num & 1 == 1)
//			count++;
//		num = num >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}


void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p+i));
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int sz = sizeof (arr) / sizeof (arr[0]);
	print(arr,sz);
	return 0;
}