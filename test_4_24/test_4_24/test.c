#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////��ֵ
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
////��ַ
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//
//	printf("%d\n", s.a);*/
//	return 0;
//}




//λ�� - ������λ

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
////47bit - 6���ֽ�*8 = 48bit
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}




//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = {0};
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}




////ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
//	MALE,
//	FEMALE = 9,
//	SECRET
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//
////c���Ե�Դ����---->��ִ�г���
////#define RED 0
////#define GREEN 1
////#define BLUE 2
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = 2;//int 
//
//	//int color = RED;
//
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	return 0;
//}




////����-������-������
//
//union Un
//{
//	char c;//1
//	int i; //4
//};
////5���ֽ�
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}




//int a = 0x 11 22 33 44;
//�͵�ַ-------------------->�ߵ�ַ
//....[][][][][11][22][33][44][][][][][][][]...  ����ֽ���洢ģʽ
//....[][][][][44][33][22][11][][][][][][][]...  С���ֽ���洢ģʽ
//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//��С���ֽ�������

//int check_sys()
//{
//	int a = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return *(char*)&a;
//}
//
//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;//
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}





//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}




union Un
{
	int a;//4 8 4
	char arr[5];//5 1 8 1
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}

