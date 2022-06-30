#define _CRT_SECURE_NO_WARNINGS 1 
//BC114 小乐乐排电梯
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int s = 0;
//	s = (n / 12) * 4 + 2;
//	printf("%d\n", s);
//	return 0;
//}
//BC115 小乐乐与欧几里得
//求最大公倍数和最小公约数的和
//避免溢出，用long long
//思路：辗转相除法
//额外存储一份n和m用于计算最大公倍数
//避免值被改变导致出错
//#include<stdio.h>
//int main()
//{
//    long long int n = 0;
//    long long int m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long int n2 = n;
//    long long int m2 = m;
//    long long int max = 0;
//    long long int min = 0;
//    long long int tmp = 0;
//    while (tmp = n % m)
//    {
//        n = m;
//        m = tmp;
//    }
//    max = m;
//    min = (n2 * m2) / max;
//    printf("%lld\n", max + min);
//    return 0;
//}
//BC116 小乐乐改数字
//想把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，
//如果是偶数，那么就把它变成0。
//222222
//0
//思路：这里数组存储并不可以，因为输出的是结果
//0就是0，而不是00000
//所以，用另一种思路
//int main()
//{
//	long long int n = 0;
//	scanf("%lld", &n);
//	long long int sum = 0;
//	long long int m = 0;
//	int i = 0;
//	while (n)
//	{
//		m = n % 10;//先处理最后一位
//		if (m % 2 == 1)//改数字
//			m = 1;
//		else
//			m = 0;
//		sum += m * pow(10, i);//和
//		i++;
//		n /= 10;//处理每一位
//	}
//	printf("%lld\n", sum);
//	return 0;
//}
//BC117 小乐乐走台阶
//小乐乐上课需要走n阶台阶，每次可以选择走一阶或者走两阶，
//那么他一共有多少种走法？
//n=1 1
//n=2 2
//n=3 3 1+2
//n=4 5 2+3
//斐波那契数列：1 2 3 5 8 13 21....
//使用递归算法
#include<stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return n;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}