#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//�ṹ����ڴ����
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
////6 ����err
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
////������Ƕ��٣�Z
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};//������Ƕ��٣�
//
////offsetof - ��
////�ṹ���Ա�������ʼλ�õ�ƫ����
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};//�ṹ��Ƕ������£�����Ƕ��٣�
//#include <stddef.h>
//
//int main()
//{
//	/*printf("%u\n", offsetof(struct S3, d));
//	printf("%u\n", offsetof(struct S3, c));
//	printf("%u\n", offsetof(struct S3, i));*/
//
//	//struct S1 s1;
//	//struct S2 s2;
//	//struct S3 s3;
//	//printf("%d\n", sizeof(s1));//12
//	//printf("%d\n", sizeof(s2));//8
//	//printf("%d\n", sizeof(s3));//
//
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}


//Ϊʲô������ڴ����
//1.ƽ̨ԭ��
//2.����ԭ��

//�ٸ�����
//struct S
//{
//	char c;
//	int i;
//};
//�����Ƕ���
//���Ƕ���

//�����ռ任ȡʱ��

//��ƽṹ��ʱ����������룬�ֽ�ʡ�ռ䣬����ռ�ÿռ�С�ĳ�Ա����������һ��

//�޸�Ĭ�϶�����
//vs��Ĭ�϶�������8

struct S
{
	char c;
	double d; 
};
int main()
{
	struct S s;
	return 0;
}