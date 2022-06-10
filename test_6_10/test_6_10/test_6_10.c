 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &p);
//}
//struct Book
//{
//    char bookname[30];
//    float price;
//    char writer[20];
//};
//int main()
//{
//    struct Book s = { "chushiclanguage",1.01,"anduin" };//创建变量并初始化
//    printf("%s %.2f %s\n", s.bookname, s.price, s.writer);
//}

//struct Book
//{
//    char bookname[30];
//    float price;
//    char writer[20];
//};
//void Print(struct Book* ps)
//{
//    printf("%s %.2f %s\n", ps->bookname, ps->price, ps->writer);
//}
//int main()
//{
//    struct Book s = { "chushiclanguage",1.01,"anduin" };//创建变量并初始化
//    Print(&s);
//}
//struct Book
//{
//    char bookname[30];
//    float price;
//    char writer[20];
//};
//int main()
//{
//    struct Book s;
//    scanf("%s %f %s", s.bookname, &(s.price), s.writer);
//    printf("%s %.2f %s\n", s.bookname, s.price, s.writer);
//}
//#include<stdio.h>
////#define 定义标识符常量
//#define MAX 1000
//#define STR "abcdef"
//int main()
//{
//    printf("%d\n", MAX);
//    int a = MAX;
//    int arr[MAX] = { 0 };
//    printf("%d\n", a);
//    printf("%s\n", STR);
//    return 0;
//}

//int main()
//{
//    int a = 10;//4个字节 - 找到内存显示一列 - &a - 监视
//    //观看四个字节地址 - 当a创建好后，占用四个字节
//    //每个字节都有一个地址 - &a拿到的是第一个字节的地址 - 图例为证
//    //
//    int* pa = &a;//pa是创建出来存放地址的，pa是指针变量
//    //int *整体是一个类型，叫做整形指针类型，*说明pa是指针变量
//    //int 说明的pa指向的对象是int类型 - 画图理解
//    //char *类型举例
//}

int main()
{
    char ch = 'a';
    char* pc = &ch;
    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(short*));
    printf("%d\n", sizeof(int*));
    printf("%d\n", sizeof(long*));
    printf("%d\n", sizeof(long long*));
    printf("%d\n", sizeof(float*));
    printf("%d\n", sizeof(double*));

    return 0;
}