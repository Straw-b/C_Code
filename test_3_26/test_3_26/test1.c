#define _CRT_SECURE_NO_WARNINGS 1


//дһ����������������һ���ַ��������ݡ�
//#include <string.h>
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "Hello World!";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int Sn = 0;
//	printf("������һ�����֣�");
//	scanf("%d", &n);
//	for (i = 0; i < 5; i++)
//	{
//		j = j + n;
//		Sn = Sn + j;
//		n = n * 10;
//	}
//	printf("Sn = %d\n", Sn);
//	return 0;
//}



//���0��100000֮������С�ˮ�ɻ������������
//#include <stdio.h>
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d \n", i);
//		}
//	}
//	return 0;
//}




//��C��������Ļ���������ͼ��
#include <stdio.h>

int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);//7
	for (i = 0; i<line; i++)
	{
		int j = 0;
		for (j = 0; j<line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i<line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}