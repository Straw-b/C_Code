#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num=0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}


////递归
//#include <stdio.h>
//
//int Facl(int x)
//{
//	if (x > 1)
//		return x*Facl(x - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = Facl(n);
//	printf("%d\n", m);
//	return 0;
//}


////非递归
//#include <stdio.h>

//int Fac2(int x)
//{
//	int i = 0;
//	int num = 1;
//	for (i = 1; i <= x; i++)
//	{
//		num = num*i;
//	}
//	return num;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = Fac2(n);
//	printf("%d\n", m);
//	return 0;
//}


////递归
//#include <stdio.h>
//
//int Fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib1(n);
//	printf("ret = %d", ret);
//	return 0;
//}

////非递归
//#include <stdio.h>
//
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib2(n);
//	printf("ret = %d", ret);
//	return 0;
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//
//int my_string(char *str)
//{
//	if (*str != '\0')
//		return 1 + my_string(str + 1);
//	else
//		return 0;
//}
//
//void reverse_string(char* string)
//{
//	int len = my_string(string);
//	if (len >= 2)
//	{
//		char temp = string[0];
//		string[0] = string[len - 1];
//		string[len - 1] = '\0';
//		reverse_string(string + 1);
//		string[len - 1] = temp;
//	}
//	else
//		return;
//}
//
//int main()
//{
//	char arr[] = "Hello world";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//#include <stdio.h>
//
//int DigitSum(int n)
//{
//	if (n >= 10)
//		return (n % 10) + DigitSum(n / 10);
//	else
//		return n;
//}
//
//int main()
//{
//	int n;
//	printf("请输入一个非负整数：\n");
//	scanf("%d", &n);
//	int m = DigitSum(n);
//	printf("各位数之和是：%d\n",m);
//	return 0;
//}
//

#include <stdio.h>

int Fac(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else
		return n*Fac(n, (k - 1));
}

int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	printf("请输入n和k：\n");
	scanf("%d %d", &n, &k);
	ret = Fac(n, k);
	printf("ret = %d\n",ret);
	return 0;
}