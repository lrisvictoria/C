#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//struct A
//{
//    int _a : 2;//表示只需要两个比特位
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

//假设a只有可能为0123四种取值，没必要开辟一整个整形，只需要2个bit位就够了
//对于bcd也是这样，如果能以最少的空间达到最大的效益，那么为什么不使用位段呢？
//高风险，高回报嘛