#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	for (n = 100; n <= 200; n++)
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
				break;
		}
		if (n == i)
			printf("%d ", n);
	}
	return 0;
}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	for (n = 1000; n <= 2000; n++)
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		//��4�ı����Ҳ���100�ı�����������400�ı���
//		printf("%d�� ", n);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a,b;
//	int n = 0;
//	printf("����������������\n");
//	scanf("%d %d",&a,&b);
//	if (a < b)
//	{
//		n = a;
//		a = b;
//		b = n;//ʹb��Ϊ��С����
//	}
//	for (n = b; n>0; n--)
//	{
//		if (a % n == 0 && b % n == 0)
//		{
//			printf("���Լ���ǣ�%d\n", n);
//			break;
//		}		
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	while (n <= 100)
//	{
//		if (n % 3 == 0)
//			printf("%d ", n);
//		n++;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a,b,c;
//	int n = 0;
//	printf("����������������\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		n = a;
//		a = b;
//		b = n;//����a,b��ֵ
//	}
//	if (a < c)
//	{
//		n = a;
//		a = c;
//		c = n;//����a,c��ֵ
//	}
//	if (b < c)
//	{
//		n = b;
//		b = c;
//		c = n;//����b,c��ֵ
//	}
//	printf("�������Ӵ�С�ֱ��ǣ�%d %d %d\n",a,b,c);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl + z
//	//EOF - end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();
//
//	//putchar(ch);
//	//printf("%c\n", ch);
//	return 0;
//}

//
//int main()
//{
//	/*while(1)
//		printf("hehe\n");*/
//
//	int i = 1;
//
//	while(i<=10)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	//while(i<=10)
//	//{
//	//	if(i == 5)
//	//		break;
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
//	return 0;
//}

//#include <stdio.h>
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:	m++;
//	case 2: n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);//8
//	switch(day)
//	{
//	case 1:
//		if(n == 1)
//			printf("hehe\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	/*switch(day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}*/
//	//....
//	/*if(1 == day)
//	printf("����1\n");
//	else if(2 == day)
//	printf("����2\n");
//	else if(3 == day)
//	printf("����3\n");
//	else if(4 == day)
//	printf("����4\n");*/
//	//..
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//// 	while(i<=100)
//// 	{
//// 		if(i%2 != 0)
//// 			printf("%d ", i);
//// 		i++;
//// 	}
//	return 0;
//}

// 
// int main()
// {
// 	int num = 4;
// 	if(5 == num)
// 	{
// 		printf("hehe\n");
// 	}
// 	//if(num = 5)// = ��ֵ == �ж����
// 	//{
// 	//	printf("�Ǻ�\n");
// 	//}
// 
// 	return 0;
// }
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}


//
//int main()
//{
//	int age = 10;
//	if(age<18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else 
//	{
//		if(age>=18 && age<28)
//			printf("����\n");
//		else if(age>=28 && age<50)
//			printf("׳��\n");
//		else if(age>=50 && age<90)
//			printf("����\n");
//		else
//			printf("�ϲ���\n");
//	}
//
//	/*int age = 100;
//	if(age<18)
//	printf("δ����\n");
//	else if(age>=18 && age<28)
//	printf("����\n");
//	else if(age>=28 && age<50)
//	printf("׳��\n");
//	else if(age>=50 && age<90)
//	printf("����\n");
//	else
//	printf("�ϲ���\n");*/
//
//	//if(age<18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//
//	//if(age<18)
//	//	printf("δ����\n");
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	;//�����-�����
//
//	return 0;
//}
//

//�ṹ��
//char int double ....
//�� = 3.14
//'w'
//�� - ���Ӷ���
//
//����+���+����+��ݺ���+....
//����+����+������+����+���....
//���Ӷ��� -- �ṹ�� - �����Լ����������һ������
//
//#include <string.h>
//
////����һ���ṹ������
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = {"C���Գ������", 55};
//	strcpy(b1.name, "C++");//strcpy-string copy -�ַ�������-�⺯��-string.h
//	printf("%s\n", b1.name);
//	//b1.price = 15;
//	//struct Book* pb = &b1;
//	//����pb��ӡ���ҵ������ͼ۸�
//	//.    �ṹ�����.��Ա
//	//->   �ṹ��ָ��->��Ա
//
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//
//	/*printf("����:%s\n", b1.name);
//	printf("�۸�:%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
//	return 0;
//}


//
//int main()
//{
//	printf("%d\n", sizeof(char*));//
//	printf("%d\n", sizeof(short*));//
//	printf("%d\n", sizeof(int*));//
//	printf("%d\n", sizeof(double*));//
//
//	//double d = 3.14;
//	//double* pd = &d;//32-4    64-8
//	//printf("%d\n", sizeof(pd));//
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//
//	//int a = 10; //������4���ֽڵĿռ�
//	////printf("%p\n", &a);
//	//int* p = &a;//p��һ������-ָ�����
//	////printf("%p\n", p);
//	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	//printf("a = %d\n", a);
//	return 0;
//}