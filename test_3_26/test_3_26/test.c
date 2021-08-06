#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//未初始化的指针变量
//	int* p;//局部变量不初始化，里边默认放的是一个随机值
//	*p = 20;
//
//	return 0;
//}


////数组越界导致的野指针问题
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		//*p = i;
//		//p++;
//		*p++ = i;
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}


//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int*pa = &a;//初始化
//	//int* p = NULL;//NULL- 用来初始化指针的，给指针赋值
//	int a = 10;
//	int *pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	
//	if (pa != NULL)
//	{
//
//	}
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2;
//	}
//	return 0;
//}



//int main()
//{
//	char ch[5] = {0};
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	//printf("%d\n", &arr[9] - &ch[0]);//err
//
//	return 0;
//}


//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//
//}
//
//int main()
//{
//	//
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen- 计数器的方式1， 递归的方式2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素的地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//地址-首元素的地址
//	printf("%p\n", &arr[0]+1);
//	
//	printf("%p\n", &arr);//&数组名 
//	printf("%p\n", &arr + 1);
//
//	//1. &arr- &数组名- 数组名不是首元素的地址-数组名表示整个数组 - &数组名 取出的是整个数组的地址
//	//2. sizeof(arr) - sizeof(数组名) - 数组名表示的整个数组- sizeof(数组名)计算的是整个数组的大小
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p  ======    %p\n",p+i, &arr[i]);
//	}*/
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	//int** * pppa = &ppa;
//
//	return 0;
//}



//好孩子  -- 孩子
//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整形数组 - 存放整形
	//字符数组 - 存放字符
	//指针数组 - 存放指针
	//int arr[10];
	int* arr2[3] = {&a, &b, &c};//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}
