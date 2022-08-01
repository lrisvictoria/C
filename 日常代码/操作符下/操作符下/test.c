#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//编写代码实现：求一个整数存储在内存中的二进制中1的个数。
//5
//0000 0000 0000 0000 0000 0000 0000 0101
//按位与
//0000 0000 0000 0000 0000 0000 0000 0001
//结果
//0000 0000 0000 0000 0000 0000 0000 0001 - 1
//5 & 1
//num >> i位，第一次为移动0位，如果右移完的数和1按位与得到1，
//那么这个位置上就有1，因为没1的话，结果为0
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//5
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);//0101 - 2
//	return 0;
//}
//赋值操作符
//int main()
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//连续赋值
//	//y+1 -> x -> a = 21
//}
//复合赋值符
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;  
//}
单目操作符
int main()
{
	//C语言中0表示假，非0表示真
	int num = 10;
	if (num)
	{

	}
	if (!num)//num为假，num为真
	{

	}
	//等价
	if (num == 0)
	{

	}
}
#include<stdbool.h>
int main()
{
	_Bool flag = true;
	_Bool flag1 = false;
 	if (flag)
	{
		printf("yeee\n");
	}
	if(!flag1)
	{
		printf("oops\n");
	}
}
//int main()
//{
//	int a = -10;
//	int b = -a;
//	printf("%d\n", b);
//}
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	//& 取地址操作符
//	//* 解引用操作符/间接访问操作符
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	int arr[10] = { 0 };
//	&arr;//取出整个数组的地址，数组的地址应该放到数组指针中去
//
//	struct S s = { 0 };
//	struct S * ps = &s;
//}
//sizeof是一个操作符，不是函数
//计算类型创建的变量所占内存的大小，单位是字节
//int main()
//{
//	int a = 10;
//	printf("%zu\n", sizeof a);
//	printf("%zu\n", sizeof(a));
//	printf("%zu\n", sizeof(int));
//	printf("%d\n",sizeof int)//报错
//	变量可省，类型不可省
//	int arr[10] = { 0 };
//	printf("%zu\n", sizeof(arr));
//	int a = 10;
//	short s = 0;
//	printf("%zu\n", sizeof(s = a + 2));
//	sizeof()中的表达式不参与计算
//	sizefo()是在编译期间处理的
//	它不会在运行时执行表达式的值
//	printf("%d\n", s);
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//0000 0000 0000 0000 0000 0000 0000 0000
//	//1111 1111 1111 1111 1111 1111 1111 1111 - 补码
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1000 0000 0000 0000 0000 0000 0000 0001 - -1
//}
int main()
{
	int a = 11;//0000 0000 0000 0000 0000 0000 0000 1011
	//                                              1111 ?
	//										   1011|0100
	//其他位按位或0，那一位按位或1
	//1 << 2
	//a |= 4;
	a |= (1 << 2);//15
	printf("%d\n", a);
	//改回去：
	//0000 0000 0000 0000 0000 0000 0000 1111
	//按位与：1111 1111 1111 1111 1111 1111 1111 1011
	//  取反：0000 0000 0000 0000 0000 0000 0000 0100
	a &= ~(1 << 2);
	printf("%d\n", a);
}
//int main()
//{
//	int a = 3;
//	int b = ++a;
//	printf("%d\n", b);
//}
//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	printf("%d\n", a);
//}
//int main()
//{
//	if (strcmp("abccef","abcd")>0)
//	{
//		printf("hehe\n");
//	}
//
//	//比较的是首元素地址是否相等
//	//只要发现有不相等的就结束
//	return 0;
//}
//360笔试题
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	/*int a = 3;
//	int b = 0;
//	b = a > 5 ? 3:-3;
//	printf("%d\n", b);*/
//	int a = 3;
//	int b = 5;
//	int m = a > b ? a : b;
//	printf("%d\n", m);
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr[4] <=> *(arr+4) <=> *(4+arr) <=> [4]arr
//	printf("%d\n", arr[4]);
//	printf("%d\n", 4[arr]);
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(2, 3);//()函数调用操作符，操作数是：Add,2,3
//	return 0;
//}
//int main()
//{
//	char ch1 = 3;
//	char ch2 = 127;
//	
//	//0000 0000 0000 0000 0000 0000 0000 0011 - 3
//	//0000 0011 - ch1
//	//0000 0000 0000 0000 0000 0000 0111 1111 - 127
//	//0111 1111 - ch2
//	
//	char ch3 = ch1 + ch2;
//	//整形提升
//	//0000 0000 0000 0000 0000 0000 0000 0011
//	//0000 0000 0000 0000 0000 0000 0111 1111
//	//0000 0000 0000 0000 0000 0000 1000 0010
//	//1000 0010 - ch3
//	//输出为整形，整形提升
//	//第一位为符号位。用1补全32位
//	//1111 1111 1111 1111 1111 1111 1000 0010 - 补码
//	//1000 0000 0000 0000 0000 0000 0111 1101 - 取反
//	//1000 0000 0000 0000 0000 0000 0111 1110 - + 1
//	//输出结果为：-126
//	printf("%d\n", ch3);
//}
//当前编译器char <==> signed char
//char 到底是以signed or unsigned 完全取决于编译器
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//只要放到表达式中计算，就会整形提升
//int main()
//{
//	char c = 1;
//	printf("%zu\n", sizeof(c));
//	printf("%zu\n", sizeof(+c));
//	printf("%zu\n", sizeof(-c));
//}
//L - R 左 -> 右结合
//R - L 右 -> 左结合
//N - A		  无结合
//优先级从高到低