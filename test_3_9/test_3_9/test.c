#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			n = i*j;
			printf("%d*%d=%-2d ", j, i, n);
		}
		printf("\n");
	}
	return 0;
}



//#include <stdio.h>
//int main() 
//{
//	int i = 0;
//	int arr[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//	int max = arr[0];
//	printf("������10��������\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);//����ʮ�������ֱ����arr��
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("10�����������ֵΪ��%d\n", max);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	double add = 0.0;
//	while (a <= 99)
//	{
//		add = add + (1.0 / a);//����������
//		a = a + 2;
//	}
//	while (b <= 100)
//	{
//		add = add - (1.0 / b);//����ż����
//		b = b + 2;
//	}
//	printf("1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵΪ��%lf\n",add);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//��λ����9
//			n++;
//		else if (i / 10 == 9)//ʮλ����9����������λ����9
//			n++;
//	}
//	printf("1��100�������г�������9�ĸ���Ϊ��%d\n", n);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//			//== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}
//


//int main()
//{
//	//welcome to bit!!!!!!
//	//####################
//	//w##################!
//	//we################!!
//	//wel##############!!!
//	//...
//	//welcome to bit!!!!!!
//	//
//	//char arr[] = "abc";
//	//[a b c \0]
//	// 0 1 2 3
//	//4-2
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;//err
//	int right = strlen(arr1)-1;
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls - �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



//int main()
//{
//	int arr[] = {1,2,3,4,5,6,8,9,10,11};
//	int k =	7;
//
//	int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//����һ˫Ь��500
//1 2 3 4 5 6 ... 500
//250 375
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		if(k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if(i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	for(n=1; n<=10; n++)
//	{
//		ret = ret * n;
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//
//	printf("sum = %d\n", sum);
//	return 0;
//}



//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret * i;
//		}
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	//ret = 1*1 = 1
//	//ret = 1*1*2 = 2
//	//ret = 1*1*2*3 = 6
//
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);//100
//	for(i=1; i<=n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}

//
//int main()
//{
//	//1-10
//	int i = 1;
//	do
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while(i<=10);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for(; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	//10*10 == 100 
//	return 0;
//}

//
//int  main()
//{
//	for(;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	//10 ��ѭ��
//	//10 �δ�ӡ
//	//10 ��Ԫ��
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		if(i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	//��ʼ�� �ж�   ����
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 1;//��ʼ��
//
//	while(i<=10)//�ж�
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;//����
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//
//int main()
//{
//	/*
//	int ch = 0;
//	//EOF - end of file �ļ�������־
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s", password);//�������룬�������passsword������
//	//��������ʣ��һ��'\n'
//	//��ȡһ��'\n'
//	while((ch=getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if(ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//	//printf("%d\n", '\n');
//	return 0;
//}