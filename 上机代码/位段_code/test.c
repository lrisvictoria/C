#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//struct A
//{
//    int _a : 2;//��ʾֻ��Ҫ��������λ
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//int main()
//{
//    printf("%d\n", sizeof(struct A));//8
//    return 0;
//}
//
//struct S
//{
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
//};
//int main()
//{
//    printf("%d", sizeof(struct S));
//    struct S s = { 0 };
//    s.a = 10;
//    s.b = 12;
//    s.c = 3;
//    s.d = 4;
//    return 0;
//}

struct S
{
	int a;
	int b;
	int c;
	int d;
};

struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

//����aֻ�п���Ϊ0123����ȡֵ��û��Ҫ����һ�������Σ�ֻ��Ҫ2��bitλ�͹���
//����bcdҲ������������������ٵĿռ�ﵽ����Ч�棬��ôΪʲô��ʹ��λ���أ�
//�߷��գ��߻ر���