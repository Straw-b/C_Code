#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 }, *q[4], k;
//	for (k = 0; k < 4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	return 0;
//}


//int main()
//{
//	char a;
//	int b;
//	float c;
//	double d;
//	a*b + d - c;
//	return 0;
//}


//int main()
//{
//	const char* p = "Hello!";
//	printf("%c\n", *p);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a += a *= a -= a / 3;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i < 1) continue;
//		if (i == 5) break;
//		i++;
//	}
//	printf("%d\n", i);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	if (a = 0)
//	{
//		printf("%d\n", a-10);
//	}
//	else
//	{
//		printf("%d\n", a++);
//	}
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	x = z = 2; 
//	y = 3;
//	if (x > y)
//		z = 1;
//	else if (x == y)
//		z = 0;
//	else
//		z = -1;
//	printf("%d\n", z);
//	return 0;
//}


//int main()
//{
//	char acHello[] = "hello\0world";
//	char acNew[15] = { 0 };
//	strcpy(acNew, acHello);
//	int a = strlen(acNew);
//	int b = sizeof(acHello);
//	return 0;
//}


//int main()
//{
//	char a[20];
//	char *p1 = (char *)a;
//	char *p2 = (char*)(a + 5);
//	int n = p2 - p1;
//	int x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
//	int y = 2 ;
//	int *px[10];
//	printf("%d\n", x);
//	printf("%d\n", y);
//}


//int main()
//{
//	int i = 1, sum = 0;
//	while (i < 10){
//		sum = sum + 1;
//		i++;
//	}
//	printf("i=%d,sum=%d",i, sum);
//}


//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		short a;
//		char d;
//		long b;
//		long c;
//	};
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//	struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//	return 0;
//}
//#pragma pack()


//#include<stdio.h>
//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d,", k);
//	k = fun(j, m);
//	printf("%d/n", k);
//	return;
//}


//int Change(int *pX)
//{
//	int y = 8;
//	y = y - *pX;
//	pX = &y;
//	return 0;
//}
//int main()
//{
//	int xx = 3;
//	int *pY = &xx;
//	Change(pY);
//	printf("%d\n", *pY);
//	return 0;
//}


//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}


//int fun(int x)
//{
//	int count = 0;
//	while (x){
//		count++;
//		x = x & (x - 1);
//	}
//	return count;
//}
//int main()
//{
//	printf("fun(2017)=%d\n", fun(2019));
//}


//#define CIR(r) r*r
//void main()
//{
//	int a = 1;
//	int b = 2;
//	int t;
//	t = CIR(a + b);
//	printf("%d\n", t);
//	return;
//}


//unsigned long g_ulGlobal = 0;
//void GlobalInit(unsigned long ulArg)
//{
//	ulArg = 0x01;
//	return;
//}
//void Test()
//{
//	GlobalInit(g_ulGlobal);
//	printf("%lu", g_ulGlobal);
//	return;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//int fun(int a, int b)
//{
//	if (a>b)
//		return(a + b);
//	else
//		return(a - b);
//}
//int main()
//{
//	int x = 3, y = 8, z = 6, r;
//	r = fun(fun(x, y), 2 * z);
//	printf("%d\n", r);
//	return 0;
//}


//int f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++){
//		k = f(a++);
//	}
//	printf(" % d\n", k);
//	return 0;
//}


//int x = 3;
//void inc()
//{
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d", x);
//	return;
//}
//int main()
//{
//	int i;
//	for (i = 1; i < x; i++){
//		inc();
//	}
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	for (m = 0, n = -1; n = 0; m++, n++)
//		n++;
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main(){
//	test();
//	printf("%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	if ((++i>0) || (++j>0)){
//		printf("i=%d;j=%d\n", i, j);
//	}
//}


//#include <stdio.h>
//
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//}


//#include<stdio.h>
//int main()
//{
//	int s = 0, n;
//	for (n = 0; n<4; n++)
//	{
//		switch (n)
//		{
//		default:s += 4;
//		case 1:s += 1;
//		case 2:s += 2;
//		case 3:s += 3;
//		}
//	}
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	char *pcColor = "blue1";
//	char acColor[] = "blue1";
//	printf("%d\n", strlen(pcColor));
//	printf("%d\n", strlen(acColor));
//	printf("%d\n", sizeof(pcColor));
//	printf("%d\n", sizeof(acColor));
//	
//	return 0;
//}


//int main()
//{
//	unsigned long ulA = 0x11000000;
//	printf("%x\n", *(unsigned char *)&ulA);
//	return 0;
//}


//void Func(char str_arg[2])
//{
//	int m = sizeof(str_arg);
//	int n = strlen(str_arg);
//	printf("%d\n", m);
//	printf("%d\n", n);
//}
//int main(void)
//{
//	char str[] = "Hello";
//	Func(str);
//}


//union X{
//	int x;
//	char y[4];
//}a;
//int main()
//{
//	a.x = 0x11223344;//16进制
//	return 0;
//}


//int main()
//{
//	int a, x;
//	for (a = 0, x = 0; a <= 1 && !x++; a++)
//	{
//		a++;
//	}
//	printf("%d %d", a, x);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	int* p3 = (int*)(a + 1);
//	printf("%d, %x, %d\n", p1[-1], p2[0], p3[1]);
//	return 0;
//}


//int main()
//{
//	char *str[3] = { "stra", "strb", "strc" };
//	char *p = str[0];
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%s ", p++);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int x[] = { 1, 2, 3, 4, 5, 6 }, *p = x;
//	p += 2;
//	int a = *p++;
//	return 0;
//}


//#include<stdio.h>
//char *myString()
//{
//	char buffer[6] = { 0 };
//	char *s = "Hello World!";
//	for (int i = 0; i < sizeof(buffer)-1; i++)
//	{
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//int main()
//{
//	printf("%s\n", myString());
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	printf("%d, %d\n", sizeof(i++), i);
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}


//#include<stdio.h>
//int fun(char *s)
//{
//	char *p = s;
//	while (*p != '\0'){
//		p++;
//	}
//	return(p - s);
//}
//int main()
//{
//	printf("%d\n", fun("goodbye!"));
//}


//int main()
//{
//	int arr[4] = { 0 }; 
//	int brr[4] = { 1 };
//	return 0;
//}


//int main()
//{
//	unsigned char a = 0xA5;
//	char c = (~a) >> (4 + 1);
//	unsigned char b = (~a) >> (4 + 1);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	const int i = 0;
//	int *j = (int *)&i;
//	*j = 1;
//	printf("%d,%d", i, *j);
//}


//int f(int x, int y)
//{
//	return (x&y) + ((x^y) >> 1);
//}
//int main()
//{
//	int result = f(2, 4);
//	printf("%d\n", result);
//	return 0;
//}


//void fun(int x, int y, int *c, int *d)
//{
//	*c = x + y;
//	*d = x - y;
//}
//int main()
//{
//	int a = 4, b = 3, c = 0, d = 0;
//	fun(a, b, &c, &d);
//	printf("%d %d\n", c, d);
//}


//#define MA(X,Y) (X*Y)
//int main()
//{
//	int i = 5;
//	i = MA(i, i + 1) - 7;
//	printf("%d", i);
//	return 0;
//}


//#include<stdio.h>
//#define sum(a,b,c) a+b+c
//int main()
//{
//	int i = 3;
//	int j = 2;
//	printf("%d\n", i*sum(i, (i + j), j));
//	return 0;
//}


//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//int main()
//{
//	printf("%d\n", f(1));
//}


//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j == 0; i++, j++){
//		k++;
//	}
//	return k;
//}
//int main()
//{
//	printf("%d\n", (func()));
//}


//#include <stdio.h>
//int main(void)
//{
//	int a = 2, *p1, **p2;
//	p2 = &p1;
//	p1 = &a;
//	a++;
//	printf("%d,%d,%d\n", a, *p1, **p2);
//	return 0;
//}


//int main()
//{
//	int k, j, s;
//	for (k = 2; k<6; k++)
//	{
//		s = 1;
//		for (j = k; j<6; j++)
//			s += j;
//	}
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 6, 7, 8, 9, 10 };
//	int *ptr = arr;
//	*(ptr++) += 123;
//	printf("%d,%d", *ptr, *(++ptr));
//}


//int main()
//{
//	char a[] = "123456789", *p = a;
//	int i = 0;
//	while (*p)
//	{
//		if (i % 2 == 0) *p = '!';
//		i++; p++;
//	}
//	puts(a);
//	return 0;
//}


//int main()
//{
//	char str[] = "ABCDEFG";
//	char *p1, *p2;
//	p1 = "abcd"; p2 = "efgh";
//	strcpy(str + 1, p2 + 1);
//	strcpy(str + 3, p1 + 3);
//	printf("%s\n", str);
//	return 0;
//}


//int main()
//{
//	unsigned int a = 0xFFFFFFF7;
//	unsigned char i = (unsigned char)a;
//	char *b = (char *)&a;
//	printf("%08x,%08x", i, *b);
//	return 0;
//}


//int main()
//{
//	int j = 4;
//	int i = j;
//	for (; i <= 2 * j; i++)
//	{
//		switch (i / j)
//		{
//		case 0:
//		case 1:
//			printf("*");
//			break;
//		case 2:
//			printf("#");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int x = 1, y = 012;
//	int ch = 'B' + '8' - '3';
//	printf("%d", y*x++);
//	return 0;
//}


//int main()
//{
//	unsigned short sht = 0;
//	sht--;
//	printf("%d", sht);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&arr + 1);
//	printf("%d %d\n", *(arr + 1), *(ptr - 1));
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 2) += 2;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 2));
//	return 0;
//}
//


//void main()
//{
//	char *szStr = "abcde";
//	szStr += 2;
//	printf("%lu\n", szStr);
//	return;
//}


//int main()
//{
//	int i;
//	char acNew[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//	for (i = 0; i < 10; i++){
//		acNew[i] = '0';
//	}
//	printf("%d\n", strlen(acNew));
//	return;
//}


//void foo(int b[][3])
//{
//	++b;
//	b[1][1] = 9;
//}
//void main()
//{
//	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	foo(a);
//	printf("%d", a[2][1]);
//}


//int main()
//{
//	int x = 0, y = 0, z = 0;
//	z = (x == 1) && (y = 2);
//	printf("%d ", y);
//	int i = 10;
//	long long t = sizeof(i++);
//	printf("%d", i);
//}


//#define N 3
//#define Y(n) ((N+1)*n) 
//int main()
//{
//	int z = 0;
//	z = 2 * (N + Y(5 + 1));
//	return 0;
//}


//int main()
//{
//	int i = 6;
//	if (i <= 6)
//		printf("hello\n");
//	else
//		printf("bye-bye\n");
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int x = (a = 2, b = 5, a++, b++, a + b);
//
//	printf("%d\n", x);
//}


//int main()
//{
//	int i, x, y;
//	i = x = y = 0;
//	do {
//		++i;
//		if (i % 2)
//			x += i,
//			i++;
//		y += i++;
//	} while (i <= 7);
//	printf("%d %d %d", i, x, y);
//}


//int main()
//{
//	int x = 0;
//	x = 4; 
//	x *= x +x;
//	printf("%d", x);
//}


//int main()
//{
//	int x, y = 5, *p = &x;
//	*p = &y;
//	printf("%d", x);
//}


//#include<stdio.h>
//int fun(int x)
//{
//	int count = 0;
//	while (x){
//		count++;
//		x = x &(x - 1);
//	}
//	return count;
//}
//int main()
//{
//	printf("%d\n", fun(2019));
//}


//int Func(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++){
//		k = Func(a++);
//	}
//	printf("%d\n", k);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int s = 0, n;
//	for (n = 0; n<4; n++)
//	{
//		switch (n)
//		{
//		default:s += 4;
//		case 1:s += 1;
//		case 2:s += 2;
//		case 3:s += 3;
//		}
//	}
//	printf("%d\n", s);
//	return 0;
//}