#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//void my_strcpy1(char* dest, char* src)
//{
//	while (*src !='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy2(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy3(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//#include <assert.h>
//
//void my_strcpy4(char* dest, const char* src)
//{
//	assert(dest != NULL);//¶ÏÑÔ
//	assert(src != NULL);//¶ÏÑÔ
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	my_strcpy4(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include <assert.h>
//
//char* my_strcpy5(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//¶ÏÑÔ
//	assert(src != NULL);//¶ÏÑÔ
//	//°ÑsrcÖ¸ÏòµÄ×Ö·û´®¿½±´µ½destÖ¸ÏòµÄ¿Õ¼ä£¬°üº¬'\0'×Ö·û
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy5(arr1, arr2));
//	return 0;
//}



//#include <assert.h>
//
//int my_strlen(const char *str)
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
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//int main()
//{
//	const int num = 10;
//	int* const p = &num;
//	*p = 20;
//	int n = 100;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}