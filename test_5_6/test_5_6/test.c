#define _CRT_SECURE_NO_WARNINGS 1

//struct S
//{
//	int n;
//	char c;
//	int arr[0];//���������Ա
//};

#include <stdio.h>

#include <stdlib.h>
//
//struct S
//{
//	int n;//4
//	int arr[];//���������Ա//40
//};
//
//int main()
//{
//	//printf("%d\n",sizeof(struct S));
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	p->n = 100;
//	for(i=0; i<10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//struct S
//{
//	int n;
//	int*arr;
//};
//
//int main()
//{
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	p->n = 100;
//	p->arr = (int*)malloc(10*sizeof(int));
//	for(i=0; i<10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//
//	free(p->arr);
//	p->arr = NULL;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//


#include <errno.h>
#include <string.h>

//int main()
//{
//	//���ļ�test.txt
//	//���·��
//	//.. ��ʾ��һ��·��
//	//.  ��ʾ��ǰ·��
//	//fopen("../../test.txt", "r")
//	//fopen("test.txt", "r");
//	
//	//����·����д��
//	//fopen("C:\\2020_code\\84��\\test_5_6\\test_5_6\\test.txt", "r");
//
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if(pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if(pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

//
//�Ӽ�������
//�������Ļ.
//����&��Ļ�����ⲿ�豸
//
//����-��׼�����豸- stdin
//��Ļ-��׼����豸- stdout
//��һ������Ĭ�ϴ򿪵��������豸
//
//stdin FILE*
//stdout FILE*
//stderr FILE*
//


int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);

	return 0;
}