#include <stdio.h>

int sum(int a)
{
	int c = 0;
	static int b = 3;
    c += 1;
	b += 2;
	return (a + b + c);
}

int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));
	}
}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;//* - �����ò�����
//	printf("a = %d\n", a);
//
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//printf("%p\n", &a);
//
//	return 0;
//}



//#define �����ʶ������
//#define MAX 100
//#define ���Զ����-������

//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//
//int  main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}



//1. static ���ξֲ�����
//�ֲ��������������ڱ䳤
//2. static ����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ����
//3. static���κ���
//Ҳ�Ǹı��˺�����������-��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ�������� -> �ڲ���������s

//�����ⲿ����
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//extern - �����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a ��һ����̬�ľֲ�����
//	a++;
//	printf("a = %d\n", a);//2 3 4 5 6
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	//int float;//err
//	//typedef - ���Ͷ��� - �����ض���
//	//���� -- С�� -- 
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}


//int main()
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int;
//	unsigned int num = 1;
//	//struct - �ṹ��ؼ���
//	//union - ������/������
//
//	return 0;
//}
//
//int main()
//{
//	auto int a = 10;//�ֲ�����-�Զ�����
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}


//-1 -- ���� -32
//1  -- ���� -32
//[1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]
//[0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]
//
//�з�����
//
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����--ԭ��,���룬���� ��ͬ
//����:
//ԭ��                     --->              ����        --- >     ����
//ֱ�Ӱ�������            ԭ��ķ���λ����                ����+1
//д���Ķ���������        ����λ��λȡ���õ�   
//-2
//10000000000000000000000000000010 - ԭ��
//11111111111111111111111111111101 - ����
//11111111111111111111111111111110 - ����


//int  main()
//{
////	int arr[10] = { 0 };
////	arr[4];//[] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-- �������ò�����
//
//	return 0;
//}



//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	//��  - ��0
//	//��  -  0
//	//&& - �߼���
//	//|| - �߼���
//	int a = 3;
//	int b = 5;
//	//int c = a && b;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return  0;
//}


//int main()
//{
//	int a = (int)3.14;//double --> int
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//int b = a--;//����--����ʹ�ã���--
//	int b = --a;//ǰ��--����--����ʹ��
//	printf("a = %d b = %d\n", a, b);//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~a;//b���з��ŵ����Σ�
//	//~ -- ����2���ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4=24 --> int[6]
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//err
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//6
//	return 0;
//}
//
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", num2);
//
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}


//int main()
//{
//	//�ַ����Ľ�����־��'\0'
//	//"abcdef";
//	//'\0'-ת���ַ�-0
//	//0->����0
//	//'0' -> 48
//	//'a' 'b' 'c' '0' '1' '2'
//	//	EOF - end of file - �ļ�������־ -1
//
//	return 0;
//}