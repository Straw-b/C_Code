#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "add.h"
#include <stdlib.h>


//int main()
//{
//	int a = 10;
//
//	int b = a + 1;  //1
//	int b = ++a;  //2, 带有副作用
//	return 0;
//}



//#define MAX(X, Y)     ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));替换为
//
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}




////函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
//
////宏
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int max = Max(a, b);
//	//printf("max = %d\n", max);
//	//max = MAX(a, b);
//	//printf("max = %d\n", max);
//
//	float c = 3.0f;
//	float d = 4.0f;
//	//函数在调用的时候
//	//会有函数调用和返回的开销
//	
//	float max = Max2(c, d);
//	printf("max = %d\n", max);
//	//预处理阶段就完成了替换
//	//没有函数的调用和返回的开销
//	max = MAX(c, d);
//	max = ((c) > (d) ? (c) : (d));
//	printf("max = %d\n", max);
//	
//	return 0;
//}




//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}




//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}




//#define MAX 100
//
//int main()
//{
//	printf("MAX = %d\n", MAX);
//#undef MAX
//	printf("MAX = %d\n", MAX);
//
//	return 0;
//}




//调件编译

//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}



//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("xixi\n");
//#endif
//
//	return 0;
//}



//#define DEBUG 0
//
//int main()
//{
//#if defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//
//	return 0;
//}




//头文件的包含

////#include <>
////#include ""
//
//int main()
//{
//	int ret = Add(2, 3);
//	printf("ret = %d\n", ret);
//	return 0;
//}







#include <stddef.h>

struct S
{
	char c1;
	int a;
	char c2;
};

#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)

int main()
{
	//struct S s;
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));

	return 0;
}
