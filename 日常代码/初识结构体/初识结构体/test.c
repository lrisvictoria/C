#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
//struct Stu��һ���ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[8];
//	float score;
//}s1, s2, s3;//��ͨ���ṹ�����ʹ����ı���
////s1,s2,s3Ϊȫ�ֱ���
//
////typedef �����ض���/������
////��һ��д����
//typedef struct Stu Stu;
//
//int main()
//{
//	//s4,s5�Ǿֲ�����
//	//struct Stu���ǽṹ�����ͣ��������ʡ��struct
//	struct Stu s4;
//	struct Stu s5;
//	Stu s6; 
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[8];
//	float score;
//}Stu;
//
//int main()
//{
//	//s4,s5�Ǿֲ�����
//	//struct Stu���ǽṹ�����ͣ��������ʡ��struct
//	struct Stu s4;
//	struct Stu s5;
//	Stu s6;
//}
//�ṹ������Ķ���ͳ�ʼ��

//struct Point
//{
//	int x;
//	int y;
//}p1;
//int main()
//{
//	struct Point p;
//	return 0;
//}

//��ʼ��
//struct Point
//{
//	int x;
//	int y;
//}p1 = {1,2};
//struct S
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//void print(struct S* ps)
//{
//	printf("%c\n", ps->c);
//	printf("%d %d\n", ps->sp.x, ps->sp.y);
//	printf("%.2f\n", ps->d);
//	printf("%s\n",ps->arr);
//}
//int main()
//{
//	struct Point p = { 100,200 };
//	struct S ss = { 'x',{10,11},3.14,"anduin" };
//	/*printf("%c\n", ss.c);
//	printf("%d %d\n", ss.sp.x, ss.sp.y);
//	printf("%.2f\n", ss.d);
//	printf("%s\n", ss.arr);*/
//	int a = 1000;
//	int b = 2000;
//
//	ss.c = 'a';
//	ss.sp.x = a;
//	ss.sp.y = b;
//	ss.d = 3.14;
//	//arr����Ԫ�ص�ַ����Ϊ������ַ
//	//�ĵ�ַ���ܱ��ı䣬�������ǿ��԰�Ҫ�ĵ�����
//	//��������ַָ��Ŀռ���
//	strcpy(ss.arr, "world");
//	print(&ss);
//	return 0;
//}
//�ṹ��Ա���ʲ�����
//. �ṹ�����.�ṹ���Ա
//-> �ṹ��ָ��.�ṹ���Ա
struct Point
{
	int x;
	int y;
}p1 = { 1,2 };
struct S
{
	char c;
	struct Point sp;
	double d;
	char arr[20];
};
void print(struct S* ps)
{
	printf("%c\n", ps->c);
	printf("%d %d\n", ps->sp.x, ps->sp.y);
	printf("%.2f\n", ps->d);
	printf("%s\n", ps->arr);
}
int main()
{
	struct S ss = { 'x',{10,11},3.14,"anduin" };
	print(&ss);
	return 0;
}
   