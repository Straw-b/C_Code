#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = 
//	{ 
//		{ 9801, "zhang", 20 },
//		{ 9802, "wang", 19 },
//		{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}




//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
#include <stdio.h>

int main()
{
	int money = 0;
	int count = 0;//����ˮ�Ĵ���
	int tmp = 0;//��ƿ��
	printf("������Ǯ����");
	scanf("%d",&money);
	count = money / 1;
	tmp = count;
	while (1)
	{
		count = count + tmp / 2;
		tmp = tmp / 2 + tmp % 2;
		if (tmp == 1)
		{
			break;
		}
	}
	printf("���Ժ�%dƿ\n",count);
	return 0;
}