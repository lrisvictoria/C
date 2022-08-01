#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	double x = 3.6;
//	printf("%.50lf\n", x);
//	return 0;
//}
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//	if ((x - 0.9) == 0.1)
//	{
//		printf("==");
//	}
//	else
//	{
//		printf("!=");
//	}
//	return 0;//画图讲解
//}
//浮点数在进行比较的时候，绝对不能直接使用==来进行比较！！！
//浮点数本身有精度损失，进而导致各种结果可能有细微的差别。

//两个浮点数相减，如果两个值相减，如果它的有效范围在-EPS ~ EPS的误差范围内，
//就说明x和y相等

//观察fabs函数，cpp上

//#define EPS 0.00000000000001//自定义方案
//#define DBL_EPSILON//系统提供的精度 可以转到定义观察一下，是一个非常小的值
//#include<float.h>
//#include<math.h>
//int main()
//{
//	double x = 1.0;
//	double y = 0.1; 
//	printf("%.50lf\n", x - 0.9);
//	printf("%.50lf\n", y);
//	//if (fabs((x - 0.9) - y) < EPS)//判断x-0.9是否和y相等
//	if (fabs((x - 0.9) - y) < DBL_EPSILON)
//	{
//		printf("==\n");//==，可以截图
//	}
//	else
//	{
//		printf("!=\n");
//	}
//	return 0;
//}
//那么对于浮点型数据对0比较呢？
#include<float.h>
#include<stdio.h>
#include<math.h>
int main()
{
	double x = 0.0;
	if (fabs(x) < DBL_EPSILON)//fabs(x - 0)
	//if(x > -DBL_EPSILON && x < DBL_EPSILON)
	{
		printf("yes\n");//一个浮点数和0比较，只要保证它的绝对值在精度范围内就相等
	}
	return 0;
}
//float也可以提一句
//#include<float.h>
//#include<math.h>
//int main()
//{
//	double x = 0.0000000000000001;
//	//和零值比较要不要相等？
	////精度是引起x变化的最小值
	////但是精度 + x依旧能引起精度变化如果写成
	////fab(x) <= DBL_EPSILON
	////这时x等于对应的精度
	////double y + x != y;//也就是加上x(精度)会引起变化
	////相当于double y + DBL_EPSILON ！= y
	////y + 0.0 == y;
	////这就违背了精度定义的初衷，就不能严格意义上看做'0'的概念
	////写法比较矛盾
	////不建议写上等号
//	/*if (x > -DBL_EPSILON && x < DBL_EPSILON)
//	{
//
//	}*/
//	if (fabs(x) < DBL_EPSILON)
//	{
//		printf("you can see me! x == 0.0\n");
//	}
//	else
//	{
//		printf("oops!\n");
//	}
//}

//总结一下：
//1. 浮点数存储的时候，是有精度损失的
//2. 浮点数是不能进行==比较的
//3. if(fabs(a - b) < DBL_EPSILON)
//4. 要不要<=细节