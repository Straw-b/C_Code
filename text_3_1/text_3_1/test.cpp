#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int input1 = 0;
	int input2 = 0;
	printf("请输入两个整数：\n");
	scanf("%d %d", &input1,&input2);
	if (input1 > input2)
		printf("较大的数是%d\n", input1);
	else 
		printf("较大的数是%d\n", input2);
	return 0;
}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}