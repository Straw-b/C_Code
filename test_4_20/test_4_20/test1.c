#define _CRT_SECURE_NO_WARNINGS 1


//模拟实现strstr
//#include <stdio.h>
//#include <assert.h>
//
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
//		s1 = cur;//当前地址
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}






//模拟实现memcpy
//#include <stdio.h>
//#include <assert.h>
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
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	int i = 0;
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}






//模拟实现memmove
//#include <stdio.h>
//#include <assert.h>
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void * ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
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
//	my_memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
