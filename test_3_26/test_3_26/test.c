#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//δ��ʼ����ָ�����
//	int* p;//�ֲ���������ʼ�������Ĭ�Ϸŵ���һ�����ֵ
//	*p = 20;
//
//	return 0;
//}


////����Խ�絼�µ�Ұָ������
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
//	//int*pa = &a;//��ʼ��
//	//int* p = NULL;//NULL- ������ʼ��ָ��ģ���ָ�븳ֵ
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
//	//strlen - ���ַ�������
//	//�ݹ� - ģ��ʵ����strlen- �������ķ�ʽ1�� �ݹ�ķ�ʽ2
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
//	printf("%p\n", arr);//��ַ-��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//��ַ-��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);
//	
//	printf("%p\n", &arr);//&������ 
//	printf("%p\n", &arr + 1);
//
//	//1. &arr- &������- ������������Ԫ�صĵ�ַ-��������ʾ�������� - &������ ȡ��������������ĵ�ַ
//	//2. sizeof(arr) - sizeof(������) - ��������ʾ����������- sizeof(������)���������������Ĵ�С
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
//	int* * ppa = &pa;//ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	//int** * pppa = &ppa;
//
//	return 0;
//}



//�ú���  -- ����
//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ��
	//int arr[10];
	int* arr2[3] = {&a, &b, &c};//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}
