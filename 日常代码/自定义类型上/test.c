#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//c���Խ������ڼ��������޷��������Ӷ����
//����������Ҫ�Զ����������������������

//�Զ������Ͱ����ṹ�壬ö�٣�������

//struct tag
//{
//	member - list;//��Ա�б�
//}variable-list;//�����б�(ȫ�ֱ���)

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//}s1, s2, s3;
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[12];
//};
//
////�����ṹ�� ���ʹ�ã�
//struct
//{
//	char name[20];
//	float price;
//	char id[12];
//}sw;//ֻ��ʹ��һ�Σ�ֻ�������ﴴ�������������Ϊȫ�ֱ���
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20],*p;//�ṹ�����飬�ṹ��ָ��
//struct
//{
//	int a;
//	char b;
//	float c;
//}ss;
////�����ṹ��ĳ�Ա���һ�����ڱ���������Ҳ�ǲ�ͬ���͵Ľṹ��
//int main()
//{
//	struct Stu s1, s2;
//	struct Book p1;
//
//	p = &ss;//����˵�ṹ��ĵ�ַ�ŵ��ṹ��ָ�룬������Ϊ�����ṹ�壬���ܻ���ͬ
//	//����һ�£��������������ṹ��������Ͳ�����ͬ
//	return 0;
//}

//��һ���ṹ��ֻ����һ��ʱ�Ϳ���ʹ�������ṹ��

//�ṹ���������
//struct Node
//{
//	int data;//����
//	struct Node* next;//��һ���ڵ�ĵ�ַ
//};


//typedef struct Node//typdef��struct Node ��������������
//{
//	int data;
//	struct Node* next;
//}Node, *pNode;//������������ΪNode
//
////pNode --> struct Node*
//
////�����ṹ�������������
//typedef struct
//{
//	int data;
//	//Node* next;//���� �����õ��Ƕ���������֮������ͣ���ʱ�����ṹ�廹δ����
//}name;
//int main()
//{
//	struct Node n1;
//	Node n2;//ok
//	
//	name q1;//�����ṹ���������󴴽�����
//	return 0;
//}


//�����ṹ�����
struct Book
{
	char name[20];
	float price;
	char id[12];
}s = {"clanguage", 38.8f, "ad1001"};//ȫ��

//�ṹ��Ƕ��
struct Node
{
	struct Book b;
	struct Node* next;
};
int main()
{
	struct Book s2 = { "datastruct", 66.6f, "in2001" };//�ֲ�
	struct Node n = { {"country", 78.8f, "un3001"}, NULL };//Ƕ����ʽ�ĳ�ʼ��
	
	return 0;
}