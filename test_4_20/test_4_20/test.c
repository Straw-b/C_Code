#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int strncmp(const char *string1, const char *string2, size_t count);

//int main()
//{
//	//strncmp - �ַ����Ƚ�
//	const char* p1 = "abczdef";
//	char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	
//	return 0;
//}




//strstr - �����ַ���

//#include <assert.h>
////KMP �㷨
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;//��ǰ��ַ
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}





//int main()
//{
//	//192.168.31.121   .
//	//192 168 31 121 - strtok
//	//zpw@bitedu.tech   @.
//	//zpw bitedu tech
//	
//	//char arr[] = "zpw@bitedu.tech";
//	//char*p = "@.";
//
//	//���ʮ���Ƶı�ʾ��ʽ
//	char arr[] = "123@234.@234";
//	char*p = "@.";
//
//	//zpw\0bitedu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret=strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}





//#include <errno.h>
//
//int main()
//{
//	//������  ������Ϣ
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//char*str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}





#include <ctype.h>

//int main()
//{
//	char ch = 'w';
//	int ret = islower(ch);
//	//int ret = isdigit(ch);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	//char ch = tolower('q');//��дתСд
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}






//�ڴ濽��
#include <assert.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5};
//	int arr2[5] = { 0 };
//	int i = 0;
//
//	//struct S arr3[] = { { "����", 20 }, { "����", 30 } };
//	//struct S arr4[3] = { 0 };
//
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	
//	//memcpy(arr2, arr1, sizeof(arr1));
//	//memcpy(arr4, arr3, sizeof(arr3));
//
//	//char* dest, const char*src
//	//strcpy(arr2, arr1);//err
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}





//C���Ա�׼��
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ��� - 60  - 100
//memmove �����ص��ڴ�Ŀ��� - 100

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void * ret = dest;
//	if (dest <= src || (char *)dest >= ((char *)src + num)) 
//	{
//		while (num--) 
//		{
//			*(char *)dest = *(char *)src;
//			dest = (char *)dest + 1;
//			src = (char *)src + 1;
//		}
//	}
//	else 
//	{
//		dest = (char *)dest + num - 1;
//		src = (char *)src + num - 1;
//		while (num--) 
//		{
//			*(char *)dest = *(char *)src;
//			dest = (char *)dest - 1;
//			src = (char *)src - 1;
//		}
//	}
//	return ret;
//}
//
//int  main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//my_memcpy(arr+2, arr, 20);//err
//
//	my_memmove(arr + 3, arr, 20);//�����ڴ��ص��������
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
