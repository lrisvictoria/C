 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
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
//	return 0;
//}

//union un
//{
//	int a;
//	char b;
//};
////�������ڳ�Աÿһ�����ǵ�һ��Ԫ��
////�����������г�Ա��ʼ��ַ����һ����
// 
//int main()
//{
//	union un x;
//	printf("%p\n", &x);
//	printf("%p\n", &(x.b));
//	printf("%p\n", &(x.a));
///*	x.a = 10;
//	
//	union un* p = &x;
//	p->a;*/      
//	//printf("%d\n", sizeof(union un));
//
//	return 0;
//}

//union un
//{
//	int a;
//	char b;
//};
//int main()
//{
//	union un x;
//	x.a = 1;
//	if (x.b == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//}

//union un
//{
//	int i;
//	char a[2];
//}*p,u;
//
//int main()
//{
//	p = &u;
//	p->a[0] = 0x39;
//	p->a[1] = 0x38;
//	p->a[2] = 0x37;
//	p->a[3] = 0x36;
//	printf("%x", p->i);  
//}
enum color
{
	RED,
	YELLOW,
	BLUE,
	BLACK,
	WHITE,
	GREEN,
	BROWN
};
//�����ȼ�������
//ö�ٳ��������������ԣ�����֮���������ԣ������﷨���
int main()
{
	enum color c = RED;
	printf("%d\n", RED);
	printf("%d\n", BLACK);
}