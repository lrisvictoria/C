#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//// 1
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//// 2
//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// 函数的方式
//	int m1 = Max(a, b);
//	printf("%d\n", m1);
//
//	int m2 = MAX(a, b);
//	printf("%d\n", m2);
//	
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));
//	// malloc函数的返回类型
//	return 0;
//}

//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = MALLOC(10, int);
//	
//	return 0;
//}

//#include <stdio.h>
//
//#define M 100
//
//int main()
//{
//	// 能使用
//	printf("%d\n", M);
//#undef M // 取消了
//	printf("%d\n", M);
//	return 0;
//}




//int main()
//{
//#define M 100
//	printf("%d\n", M);
//#define M 500
//	printf("%d\n", M);
//	return 0;
//}

//#define MAX // 
//// 预处理阶段优先处理注释，注释处理后，将后面的以空格替代
//// 处理完成后为`define MAX `的形式
//// MAX替换的为空格
//// 使用printf打印没有任何结果
//// 但是宏是替换成空格的，但是编译器可能会做出处理让空格消失
//int main()
//{
//	MAX printf("1232");
//	
//	return 0;
//}

//#include <stdio.h>
////#define __DEBUG__
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__ // 如果定义过下面这条语句参与编译
//			printf("%d\n", arr[i]);
//#endif // __DEBUG__
//	}
//	return 0;
//}

//#define DEBUG
//
//int main()
//{
//#ifdef DEBUG
//	printf("hello\n");
//#endif
//}

//1.
//#if 常量表达式
////...
//#endif
//
////常量表达式由预处理器求值。
//如：
//#define __DEBUG__ 1
//#if __DEBUG__
////..
//#endif
//
//2.多个分支的条件编译
//#if 常量表达式
////...
//#elif 常量表达式
////...
//#else
////...
//#endif
//
//3.判断是否被定义
//#if defined(symbol)
//#ifdef symbol
//#if !defined(symbol)
//#ifndef symbol
//
//4.嵌套指令
//#if defined(OS_UNIX) // 大的if
//#ifdef OPTION1 // 小的if 1
//unix_version_option1();
//#endif
//#ifdef OPTION2 // 小的if 2
//unix_version_option2();
//#endif
//#elif defined(OS_MSDOS) // 大的else
//#ifdef OPTION2 // 小的if 3
//msdos_version_option2();
//#endif

// 1
//int main()
//{
//#if 1 // 为真
//    printf("hehe\n");
//#endif 
//
//    return 0;
//}
//------------
//int main()
//{
//    printf("hehe\n");
//    reuturn 0;
//}
//============ =
//// 2
//int main()
//{
//#if 2 > 3 // 为假
//    printf("hehe\n");
//#endif 
//
//    return 0;
//}
//------------
//int main()
//{
//
//    return 0;
//}
//============
//// 3
//int main()
//{
//#if 1 > 2 // 为假
//    printf("hehe\n");
//#elif 2 > 3 // 为假
//    printf("haha\n");
//#else // 为真
//    printf("heihei\n");
//#endif
//
//    return 0;
//}
//// 和多分支语句相似，只要一条语句为真
//// 其他语句不参与执行
//-------------- -
//int main()
//{
//    printf("heihei\n");
//    return 0;
//}
//====================
//// 4
//int main()
//{
//#if defined(MAX) // 未定义。为假
//    printf("hehe\n");
//#endif
//}
//------------------ -
//int main()
//{
//    return 0;
//}
//====================== =
//// 5
//#define MAX 0 // #define MAX
//int main()
//{
//    // #define(宏) 固定格式
//#if defined(MAX) // 定义了。为真，不管#define的值
//    printf("hehe\n");
//#endif
//    return 0;
//}
//---------------------- -
//int main()
//{
//    printf("hehe\n");
//    return 0;
//}
//================== =
//// 6
//// #define 的反面样例
//// 编译指令成对出现，不受次数限制
//int main()
//{
//#if defined(MAX) // 为假
//    printf("haha\n");
//#endif
//
//#if !defined(MAX) // 未定义，为真
//    printf("hehe\n");
//#endif
//    return 0;
//}
//----------------------
//int main()
//{
//    printf("hehe\n");
//    return 0;
//}
//======================== =
//// 7
//// #if define(MAX)的另外一种写法
//int main()
//{
//#ifdef MAX
//    printf("hehe\n");
//#endif
//    return 0;
//}
//---------------------- -
//int main()
//{
//    return 0;
//}
//====================== =
//// 8
//// #if !define(MAX)的另外一种写法
//int main()
//{
//#ifndef MAX // 未定义，为真
//    printf("hehe\n");
//#endif
//    return 0;
//}
//-------------------------- -
//int main()
//{
//    printf("hehe\n");
//    return 0;
//}