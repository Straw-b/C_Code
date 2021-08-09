#define _CRT_SECURE_NO_WARNINGS 1


////模拟实现strlen
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
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
//	char arr[] = "abcdefgh";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//模拟实现strcpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefh";
//	char arr2[] = "xyz";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}




////模拟实现strcmp
//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "xyz";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}




//模拟实现strcat
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[] = "xyz";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}