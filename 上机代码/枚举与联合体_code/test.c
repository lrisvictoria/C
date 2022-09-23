#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
//
//enum Color
//{
//	RED = 3,
//	GREEN = 3,
//	BLUE = 10
//};
//
//int main()
//{
//	enum Color color = 5;
//	
//	return 0;
//}

#define GREEN 7
#define BLUE 10

//#define 定义的标识符是没有类型的，它就是一个符号
//以后除字符串和注释中出现的任意标识符都会被替换为宏定义的数据

//他在预处理阶段就会完成替换，而不会像枚举定义的枚举常量一样具有类型

//int main()
//{
//	enum Color color = RED;
//	return 0;
//}

//enum
//{
//	RED
//};
//
//enum Color
//{
//	RED
//};

//#define RED 5
//#define RED 7

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	return 0;
//}

//union Un
//{
//    char c;
//    int i;
//    double d;
//};
//int main()
//{
//    union Un un;//联合变量
//    /*printf("%d\n", sizeof(union Un));
//    printf("%d\n", sizeof(un));*/
//    printf("%p\n", &un);
//    printf("%p\n", &(un.c));
//    printf("%p\n", &(un.i));
//    printf("%p\n", &(un.d));
//    return 0;
//}

//union Un
//{
//    char arr[5];//5
//    int i;//4
//};
//int main()
//{
//    printf("%d\n", sizeof(union Un));
//    return 0;
//}

//#define RED 5
//#define GREEN 7
//#define BLUE 10
//--------------
//#define定义常量需要多次
//--------------
//enum Color
//{
//    RED = 5,
//    GREEN = 7,
//    BLUE = 10
//};
//------------ -
//枚举可以定义多个常量

//int check_sys()
//{
//    int num = 1;
//    return *(char*)&num;
//}
//int main()
//{
//    int ret = check_sys();
//    if (ret == 1)
//    {
//        printf("小端\n");
//    }
//    else
//    {
//        printf("大端\n");
//    }
//    return 0;
//}

int check_sys()
{
    union//匿名(只在函数中使用一次)
    {
        char c;
        int i;
    }
    u.i = 1;
    return u.c;
}
int main()
{
    int ret = check_sys();
    if (ret == 1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    return 0;
}