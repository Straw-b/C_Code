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




//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
#include <stdio.h>

int main()
{
	int money = 0;
	int count = 0;//喝汽水的次数
	int tmp = 0;//空瓶数
	printf("请输入钱数：");
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
	printf("可以喝%d瓶\n",count);
	return 0;
}