#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//F5-��������-��F9���ʹ�õ�
//�ϵ� F9�л��ϵ�


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}



//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}



//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);//3 1!+2!+3! = 1+2+6=9 
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	//VC6.0 ������ <=10 ����ѭ����
//	//gcc ������  <=11 ����ѭ����
//	//VS2013    <=12 ��ѭ��
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//
//	return 0;
//}



//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}



#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}



//int main()
//{
//	const int num = 10;
//	int n = 100;
//
//	     int  *       p = &num;
//	// const ����ָ�������*���ʱ�����ε���*p,Ҳ����˵������ͨ��p���ı�*p��num����ֵ
//	// const ����ָ�������*�ұ��ǣ����ε���ָ�����p����p���ܱ��ı���
//
//	*p = 20;
//	p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}



//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤�����Ч��
//
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
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int *p = &a;
//	assert(p != NULL);
//	return 0;
//}


int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}