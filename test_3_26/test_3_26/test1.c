#define _CRT_SECURE_NO_WARNINGS 1


//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//�������ʼ��0
//	Print(arr, sz);//��ӡ
//	Reverse(arr, sz);
//	Print(arr, sz);//��ӡ
//	return  0;
//}



//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}



//#include <stdio.h>
//int i;//ȫ�ֱ���-����ʼ��-Ĭ����0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//
//	if (i > sizeof(i))//sizeof()-�������/������ռ�ڴ�Ĵ�С >=0 �޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}







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
//#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	for (i = 0; i<line; i++)
//	{
//		int j = 0;
//		for (j = 0; j<line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i<line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}