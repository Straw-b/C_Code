#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	double a = 7.0 / 2;
//	printf("a = %lf\n", a);
//	return 0;
//}

//int main()
//{
//	int a = -4;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 3;/*011*/
//	int b = 5;/*101*/
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d", a, b);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	
//	printf("%d\n", count);
//	return 0;
//}








//int main()
//{
//	double a = 5 % 2;//商2余1
//	printf("a = %lf\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 16;
//	//>> -- 右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000010000
//	//
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}
//
//
//int main()
//{
//	int a = -1;
//	//
//	//整数的二进制表示有：原码、反码、补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	//& - 按2进制位与
//	/*int a = 3;
//	int b = 5;
//	int c = a&b;*/
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//printf("%d\n", c);
//	//| - 按2进制位或
//	/*int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);*/
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	
//	//按2进制位异或
//	//相同为0，相异为1
//	/*int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	*/
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int tmp = 0;//临时变量
//	printf("before: a=%d b=%d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//
//	//加减法-可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//异或的方法
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("after : a=%d b=%d\n", a, b);
//
//	return 0;
//}
//123
//
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//-1
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//
//	//32bit
//	//num&1 == 1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000000
//	//统计num的补码中有几个1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//
//
//	//printf("%d\n", count);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("呵呵\n");
//	}
//	if (!a)
//	{
//		printf("呵呵\n");
//	}
//	/*printf("%d\n", !a);*/
//
//	//a = a + 2;
//	//a += 2;//复合赋值符
//	//
//	//a = a >> 1;
//	//a >>= 1;
//
//	//a = a & 1;
//	//a &= 1;
//
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	a = -a;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p = 20;//解引用操作符
//	return 0;
//}
//


int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof 计算的变量所占内存空间的大小，单位是字节
	printf("%d\n", sizeof a);//4
	printf("%d\n", sizeof(int));//

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));//

	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(char*));//

	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int [10]));//

	return 0;
}