 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#define EPSILON 0.0000000001
#define NUM 64
//const int* test()
//{
//	static int g_var = 100;
//	return &g_var;
//}
//int main()
//{
//	int* p = test();
//	printf("%p\n", p);
//}

//volatile

//��ϣ�����������Ż����ﵽ�ȶ������ڴ��Ŀ��

//����ṹ�壬��������������

//struct stu
//{
//	char name[NUM / 2];
//	int age;
//	char sex;
//	char addr[NUM];
//}a,b,c;
//
//void show(struct stu* p)
//{
//	printf("%s\n", p->name);
//}
////�ṹ�岻�����屻��ֵ
//int main()
//{
//	//struct stu x = { "anduin",19,'f',"baofengcheng" };
//	struct stu x;
//	strcpy(x.name, "����");
//	x.age = 19;
//
//	//Ϊʲô�ṹ����ʻ������ַ��ʷ�ʽ 
//	//1.�ṹ�����������ʱ�������.���ӷ���
//	//2.������εĻ���ָ������������㣬һ���ṹ����ܹᴩ�������
//	//��ͬ�������� �����ָ��Ļ����ͺ��б�Ҫ�Խṹ�嵥������һ�ַ��ʷ�ʽ
//	//���ڴ���ı�д
//
//	struct stu* p = &x;
//	
//	return 0;
//}


//�սṹ�� 
//��gcc�������ϱ�����Ϊ0
//vs�ϱ಻��  


//#include <stdio.h>
//int main()
//{
//	double x = 1;
//	double y = 0.1;
//	printf("%.50f\n", x);
//	printf("%.50f\n", y);
//
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//	if (((x-0.9)-y)>-EPSILON && ((x-0.9)-y)<EPSILON)
//	{
//		printf("you can see me!\n");
//
//	}
//	else
//	{
//		printf("oops!");
//	}
//}

//int main()
//{
//	int ret = printf("%d\n", "1234");
//	printf("%d\n", ret);
//}
//int main()
//{
//	int a = 10;
//	scanf("%d", &a);
//}
//int main()
//{
//	//int c = 0;
//	while (1)
//	{
//		int c = getchar();
//		if (c == '#')
//		{
//			break;
//		}
//		printf("%c ", c);
//	}
//	
//}
int main()
{
	int i = 0;
	int p = 0;
	for (i = 1, p = 1; i <= 5; i++)
		p *= i;
}