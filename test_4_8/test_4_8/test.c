#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//			//Add(1, 2);
//	//printf("sum = %d\n", sum);
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	
//	return 0;
//}



////ð�ݷ�
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz-1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	//int* pa = &a;//
//	//char* pc = &a;
//
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;
//	//p++;
//
//	//p = &ch;
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� ���ܽ��н����ò���
//	//void* ���͵�ָ�� ���ܽ���+-�����Ĳ���
//
//	return 0;
//}




//void qsort(void* base, 
//	       size_t num, 
//		   size_t width, 
//		   int( *cmp)(const void *e1, const void *e2)
//		   );
//��һ���������������������Ԫ�ص�ַ
//�ڶ��������������������Ԫ�ظ���
//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��;
//           ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//



#include <stdlib.h>
#include <string.h>


//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()//��������
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int cmp_float(const void* e1, const void* e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//
//int main()//������
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//	return 0;
//}



//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int main()//�ṹ��
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//
//	return 0;
//}





//ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
//�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp( (char*)base+j*width, (char*)base+(j+1)*width ) > 0)
//			{
//				//����
//				Swap( (char*)base + j*width, (char*)base + (j + 1)*width, width );
//			}
//		}
//	}
//}
//
//
//
////int cmp_int(const void* e1, const void* e2)
////{
////	return *(int*)e1 - *(int*)e2;
////}
////
////int main()
////{
////	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
////	//��Ӧ��֪����αȽϴ����������е�Ԫ��
////	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
////
////	return 0;
////}
//
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int main()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	return 0;
//}






//int main()
//{
	//����������Ԫ�صĵ�ַ
	//1. sizeof(������) - ��������ʾ��������
	//2. &������ - ��������ʾ��������
	//
	//һά����
	//int a[] = { 1, 2, 3, 4 };//4*4 = 16
	//printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�- 16
	//printf("%d\n", sizeof(a + 0));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*a));   //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
	//printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(a[1])); //4 - ��2��Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));   //4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*&a));  //16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
	//printf("%d\n", sizeof(&a + 1));//4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	//printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ

	//�ַ�����
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr + 0));//���ֵ
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err

	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

	//printf("%d\n", sizeof(arr));//sizeof��������������С��6*1 = 6�ֽ�
	//printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8�ֽ�
	//printf("%d\n", sizeof(*arr));   //1   arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr));   //4/8 &arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ


	//return 0;
//}