#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}


//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//


//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}


//n = n&(n-1)
//n
//13
//1101 n
//1100 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count = count_bit_one(a);//-1
//	//-1
//	//100000000000000000000000000000001
//	//111111111111111111111111111111110
//	//111111111111111111111111111111111
//	//000000000000000000000000000000001
//	//
//
//	//13
//	//000000000000000000000000000001101
//	//
//	printf("count = %d\n", count);
//	//system("pause");//system�⺯��-ִ��ϵͳ����-pause����ͣ��
//	return 0;
//}



//int get_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	int count = 0;
//	//return count_bit_one(tmp);
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
//}



//void print(int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



//��Ŀ���ƣ�
//�ַ������򣨵ݹ�ʵ�֣�
//��Ŀ���ݣ�
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//#include <string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
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
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >=2)
//		reverse_string(arr+1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";//fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19
//DigitSum(1729)
//DigitSum(172) + 1729%10
//DigitSum(17) + 172%10 + 1729%10
//DigitSum(1) + 17%10 + ...
//1+7+2+9
//
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1729
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//double Pow(int n, int k)
//{
//	//n^k = n* n^(k-1)
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n*Pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}









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
//#include <stdio.h>
//
//int main()
//{
//	int money = 0;
//	int count = 0;//����ˮ�Ĵ���
//	int tmp = 0;//��ƿ��
//	printf("������Ǯ����");
//	scanf("%d",&money);
//	count = money / 1;
//	tmp = count;
//	while (1)
//	{
//		count = count + tmp / 2;
//		tmp = tmp / 2 + tmp % 2;
//		if (tmp == 1)
//		{
//			break;
//		}
//	}
//	printf("���Ժ�%dƿ\n",count);
//	return 0;
//}