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


#pragma pack(4)//Ĭ�϶�����������Ϊ4
//#pragma pack(0)//Ĭ�϶�����������Ϊ1
//�൱��û�ж���������ʱstruct S��СΪ9

//ע�⣺��Ȼ֧�������޸�Ĭ�϶�������
//����Ҳ��Ҫ�����޸ģ�һ��Ĭ�϶������޸�Ϊ2^n
//�����ڶ�ȡʱ����ȡ���ֳ�Ϊ4/8���ֽڣ�
//���������ʺ϶�д�ķ������趨
//struct S
//{
//	char c;
//	double d; 
//};
//#pragma pack()
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//λ��
//λ�εĳ�Ա������int��unsigned int��signed int��char
struct AA
{
	int _a;
	int _b;
	int _c;
	int _d;
};
//����_a�Ľ���
//_aֻռ��������λ��˵��_a��ȡֵ��ΧΪ0~3
//��������λ���������
//00 01 10 11
// 0  1  2  3
//ֻҪ����ǰ��û�����֣�ȡֵ��Χ�������Χ���Ϳ���ʹ��λ��


//λ�β������ڴ����
//struct A
//{
//	int _a : 2;//_a�����Աֻռ2��bitλ
//	int _b : 5;//_b�����Աֻռ5��bitλ
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	printf("%d\n", sizeof(struct AA));//16���ĸ����Σ�Ĭ�϶�������8��16���ֽ�
//	return 0;
//}

//λ�ε��ڴ����
int main()
{

	return 0;
}