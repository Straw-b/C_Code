#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;   //4
//	float f = 10.0; //4
//
//	//short a = 10;
//	//short int b = 10;
//	return 0;
//}



//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);
//	return 0;
//}


//int main()
//{
//	int a = 20;//4个字节-32bit
//	//00000000000000000000000000010100 - 原码
//	//00000000000000000000000000010100 - 反码
//	//00000000000000000000000000010100 - 补码
//	//0x00000014
//	int b = -10;
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//1111 1111 1111 1111 1111 1111 1111 0110 - 补码
//	//0xFFFFFFF6
//
//	return 0;
//}



//int main()
//{
//	1 - 1;
//	//1 + (-1)
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//
//	//00000000000000000000000000000001
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010
//
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	//00000000000000000000000000010100
//	//0x00 00 00 14
//	//
//	return 0;
//}




//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	//返回1，小端
//	//返回0，大端
//	return *p;
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
////指针类型的意义：
////1. 指针类型决定了指针解引用操作符能访问几个字节：char*p; *p 访问了1个字节，int*p;*p 访问4个字节
////2. 指针类型决定了指针+1，-1，加的或者减的是几个字节；
////char*p; p+1,跳过一个字符，int*p; p+1,跳过一个整形-4个字节
//
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	//int* p = &a;
//	//*p = 0;
//	char* p = &a;
//	*p = 0;
//	return 0;
//}


//输出什么？
#include <stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111111111111111111111111111
//	//
//	signed char b = -1;
//	//11111111
//	//
//	unsigned char c = -1;
//	//00000000000000000000000011111111
//	//255
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//-1 -1  255
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000-补码
//	//10000000
//	//11111111111111111111111110000000-补码
//	//
//	printf("%u\n", a);
//
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000-补码
//	//10000000
//	//11111111111111111111111110000000-补码
//	//
//	printf("%u\n", a);
//
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//
//	return 0;
//}



//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//	return 0;
//}
//
//1000000 00000000 00000000 00010100
//1111111 11111111 11111111 11101011
//1111111 11111111 11111111 11101100 - 补码
//0000000 00000000 00000000 00001010 - 补码
//1111111 11111111 11111111 11110110 - 结果
//1111111 11111111 11111111 11110101
//1000000 00000000 00000000 00001010 - -10



//#include <windows.h>
//
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}



//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}



unsigned char i = 0;//0-255

int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}
	return 0;
}


//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//
//	return 0;
//}


//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}