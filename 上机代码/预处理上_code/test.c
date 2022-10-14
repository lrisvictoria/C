#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
//
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __FILE__);// 进行编译的源文件
//	printf("%d\n", __LINE__);// 行号
//	printf("%s\n", __DATE__);// 日期
//	printf("%s\n", __TIME__);// 时间
//
//	printf("%d\n", __STDC__);
//	return 0;
//}

//#define MAX 100
//#define STR "anduin"
//
//// 死循环 
//#define do_forever for(;;)
//int main()
//{
//	// 知晓两个标识符的类型，直接打印
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//
//	do_forever;
//	return 0;
//}

//#define MAX 100;
//
//int main()
//{
//	printf("%d\n", MAX);
//	// 实际上为：
//	// printf("%d\n", 100;);
//	// 所以错误
//	return 0;
//}

//#define MAX 100);
//
//int main()
//{
//	printf("%d\n", MAX
//	return 0;
//}

//#define MAX 100;
//
//int main()
//{
//	int m = 0;
//	if (3 > 5)
//	{
//		m = MAX;
//	}
//	else
//		m = -1;
//	
//	printf("%d\n", m);
//
//	return 0;
//}

// 函数表示
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = Max(a, b);
//
//	printf("%d\n", m);
//	return 0;
//}

// 宏表示
//#define MAX(x, y) (x > y ? x : y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = MAX(a, b);
//
//	printf("%d\n", m);
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	//printf("%d\n", SQUARE(5)); 
//	printf("%d\n", SQUARE(5 + 1));
//
//	return 0;
//}

//#define SQUARE(X) ((X) * (X))
//
//int main()
//{
//    printf("%d\n", SQUARE(5 + 1));
//
//    return 0;
//}

#define SQUARE(X) ((X) * (X))

//#define DOUBLE(X) (X) + (X)
//int main()
//{
//    printf("%d\n", DOUBLE(6));// 没问题
//    printf("%d\n", DOUBLE(6 + 1));// 也没问题
//    printf("%d\n", 10 * DOUBLE(6));// ?
//    // 10 * (6) + (6)
//    // 又出现了优先级问题
//    // 所以还是加上括号，避免出错！！！
//
//    return 0;
//}

//#define M 10
//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//	int m = MAX(2 + 3, M);
//
//	return 0;
//}


//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//	// 前面是一个字符串，后面是一个字符串，合成一个字符串
//
//	return 0;
//}

//#define PRINT(val, format) printf("the value of "#val" is "format"\n", val)
//
//int main()
//{
//	int a = 10;
//	PRINT(a, "%d");
//
//	int b = 20;
//	PRINT(b, "%d");
//
//	float f = 5.5f;
//	PRINT(f, "%f");
//
//	return 0;
//}

//#define CAT(A, B) A##B
//int main()
//{
//    int Class107 = 100;
//
//    printf("%d\n", CAT(Class, 107));
//    // 宏通过##将两个符号拼接成一个符号
//    // 变成了Class107，根据这个格式化数据
//    // 就可以根据格式化字符串打印出该变量的结果
//
//    return 0;
//}

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main()
{
	int a = 3;
	int b = 4;
	int m = MAX(++a, ++b);
	// int m = ((++a) > (++b) ? (++a) : (++b));
	// 从左往后计算，++a --> a = 4, ++b --> 5
	// 4 > 5 为假，结果为 ++b ，++a不计算，++b --> b = 6
	
	printf("m = %d a = %d b = %d\n", m, a, b);
	// m = 6 , a = 4 , b = 6
	
	return 0;
}