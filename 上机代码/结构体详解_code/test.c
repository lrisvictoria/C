#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
//offsetof
//��������ṹ���Ա�������ʼλ�õ�ƫ����
#include <stddef.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	struct S1 s1;
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	return 0;
//}

//struct S3
//{
//	double d;//��0��ʼ���뵽7λ��
//	char c;//1 8 ����λ��Ϊ1�ı��������뵽8��
//	int i;//4 8 ����λ��Ϊ4�ı��������뵽12����c���˷������ֽڣ����뵽15�������ܴ�СΪ16
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S3));
//
//	return 0;
//}

//����Ĭ�϶�����
#pragma pack(4)

struct S1
{
	char c1;//��0��ʼ����
	int i;//4 1 ������Ϊ1�����뵽1λ�ô�
	char c2;//1 1 ������Ϊ1����5��ʼ����
	//��������Ϊ1�����Խṹ���СΪ1�ı�������
	//6����ʵҲ����û��
};

//�ָ�Ĭ�϶�����
#pragma pack()

int main()
{
	printf("%d\n", sizeof(struct S1));//6
	return 0;
}