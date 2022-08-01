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
////联合体内成员每一个都是第一个元素
////联合体内所有成员起始地址都是一样的
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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
//几乎等价于整形
//枚举常量具有自描述性，变量之间具有相关性，自行语法检查
int main()
{
	enum color c = RED;
	printf("%d\n", RED);
	printf("%d\n", BLACK);
}