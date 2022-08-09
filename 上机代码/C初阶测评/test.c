#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	fib(8);
//	printf("%d\n", cnt);
//	return 0;
//}

//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%d\n", x++);
//	} while (x--);
//}

//int i = 1;
//int j;
//j = i++;//先使用后++，j = 1;i = 2

//int i = 10;
//int j = 20;
//int k = 3;
//k *= i + j;//*=的优先级低，先计算i+j，在进行*=

//#include<stdio.h>
//int a = 1;
//void test()
//{
//	int a = 2;//
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//ture || ()//为真
//int main()
//{
//	int /*hehe*/ a = 10;//注释可以在任何位置
//}

//int main()
//{
//	for (int x = 0, y = 0; (y = 123) && (x < 4); x++)
//		;
//
//	return 0;
//}
// 0 1 2 3 
//3++变成4，不符合条件，退出循环

//若有定义语句，int year=1009，*p=&year;以下不能让year中的值增值1010的语句是？
//* p += 1;

//(*p)++;

//++(*p);

//*p++;

//11|10
//1011
//1010
//只要有1个1则为1，两个都为0才为0
//1011 - 11

//char a;int b;float c;double;
//表达式a*b+d-c的类型？

//求一个数的最小公倍数
//试除法和辗转相除法就不用了
//换一种思路
//k/a = i;
//k/b = i;
//int main()
//{
//	long long a = 0;
//	long long b = 0;
//	scanf("%lld %lld", &a, &b);
//	int i = 1;
//	// 5 7
//	//5能被5*i整除，7能被5*i整除
//	//循环的停止条件为：7能被5*i整除
//	//而最大公倍数为5*i，所以5也能被5*i整除
//	//这样的方法很快
//	while (a * i % b != 0)//5*i%7 != 0
//	{
//		i++;
//	}
//	printf("%lld\n", a * i);
//	return 0;
//}

#include<stdio.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
//int main()
//{
//	char arr[1001] = { 0 };
//	scanf("%[^\n]", arr);
//	char* cur = arr;
//	while (*cur != '\0')
//	{
//		char* start = cur;
//		char* end = cur;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			cur = end + 1;
//		else
//			cur = end;
//			//break;//直接break也可以
//
//	}
//	reverse(arr, arr + strlen(arr) - 1);
//	printf("%s\n", arr);
//}
//int main()
//{
//	char arr[1001] = { 0 };
//	scanf("%[^\n]", arr);
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	reverse(left, right);
//	char* str = arr;
//	char* start = arr;
//	while (*str != '\0')
//	{
//		while (*str != ' ' && *str != '\0')
//		{
//			str++;
//		}
//		reverse(start, str - 1);
//		start = str + 1;
//		str++;
//	}
//	printf("%s\n", arr);
//}
//int main()
//{
//	char arr[1001] = { 0 };
//	scanf("%[^\n]", arr);
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	reverse(left, right);
//	char* str = arr;
//	while (*str != '\0')
//	{
//		char* start = str;
//		while (*str != ' ' && *str != '\0')
//		{
//			str++;
//		}
//		reverse(start, str - 1);
//		//start = str + 1;
//		str+=1;
//	}
//	printf("%s\n", arr);
//}

//递归写法
void print()
{
	char arr[101] = { 0 };
	while (scanf("%s", arr) != EOF)
	{
		print();
		printf("%s ", arr);
	}
}
int main()
{
	print();
	return 0;
}