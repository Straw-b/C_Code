#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


//
//int main()
//{
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	//int *p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//	//
//
//	//int *p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}

#include <windows.h>
//
//int main()
//{
//	//1. ��NULLָ������ò���
//	//int *p = malloc(40);
//	////p������ص��ж�
//	//*p = 10;//malloc���ٿռ�ʧ��-��NULLָ�������
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	//int *p = (int*)malloc(40);//10��int 0-9
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	////Խ��
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//
//	//free(p);
//	//p = NULL;
//
//	//3. �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	//int a = 10;
//	//int *p = &a;
//	////...
//	////�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	//free(p);
//	//p = NULL;
//
//	//4. ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//int*p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////���տռ�
//	//// ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//free(p);
//	//p =NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	//p = NULL;
//
//	//free(p);
//
//	//6.��̬�����ڴ������ͷţ��ڴ�й©��
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//
//
//	return 0;
//}
//

//
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	//char*str = "abcdef";
//	//printf("%s\n", str);
//	//printf(str);
//	//printf("abcdef");
//
//	return 0;
//}


//����1
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����2
//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//


//int* test()
//{
//	//static int a = 10;//��̬��
//	int a = 10;//ջ�� 
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	*p = 20;//
//	return 0;
//}

//int* test()
//{
//	int *ptr = malloc(100);//����
//	return ptr;
//}
//
//int main()
//{
//	int *p = test();
//
//	return 0;
//}
//
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//��
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}
//
//


//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
//{
//	int n;
//	int arr[];//δ֪��С��
//};
//
//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S*ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//������С
	int *ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}