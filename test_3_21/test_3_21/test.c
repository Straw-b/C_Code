#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	double a = 7.0 / 2;
//	printf("a = %lf\n", a);
//	return 0;
//}

//int main()
//{
//	int a = -4;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 3;/*011*/
//	int b = 5;/*101*/
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d", a, b);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	
//	printf("%d\n", count);
//	return 0;
//}








//int main()
//{
//	double a = 5 % 2;//��2��1
//	printf("a = %lf\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 16;
//	//>> -- ���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	//00000000000000000000000000010000
//	//
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}
//
//
//int main()
//{
//	int a = -1;
//	//
//	//�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢����
//	//�洢���ڴ���ǲ���
//	//10000000000000000000000000000001 - ԭ��
//	//11111111111111111111111111111110 - ����
//	//11111111111111111111111111111111 - ����
//	//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	//& - ��2����λ��
//	/*int a = 3;
//	int b = 5;
//	int c = a&b;*/
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//printf("%d\n", c);
//	//| - ��2����λ��
//	/*int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);*/
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	
//	//��2����λ���
//	//��ͬΪ0������Ϊ1
//	/*int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	*/
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int tmp = 0;//��ʱ����
//	printf("before: a=%d b=%d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//
//	//�Ӽ���-���ܻ����
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//���ķ���
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("after : a=%d b=%d\n", a, b);
//
//	return 0;
//}
//123
//
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//-1
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//
//	//32bit
//	//num&1 == 1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000000
//	//ͳ��num�Ĳ������м���1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//
//
//	//printf("%d\n", count);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("�Ǻ�\n");
//	}
//	if (!a)
//	{
//		printf("�Ǻ�\n");
//	}
//	/*printf("%d\n", !a);*/
//
//	//a = a + 2;
//	//a += 2;//���ϸ�ֵ��
//	//
//	//a = a >> 1;
//	//a >>= 1;
//
//	//a = a & 1;
//	//a &= 1;
//
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	a = -a;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ������
//	*p = 20;//�����ò�����
//	return 0;
//}
//


int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof ����ı�����ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof a);//4
	printf("%d\n", sizeof(int));//

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));//

	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(char*));//

	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int [10]));//

	return 0;
}