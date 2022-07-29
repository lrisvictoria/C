#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
//pow函数的递归模拟实现
//注意负数
//plan1：
//double power(double x, int y)
//{
//	if (y < 0)
//		return 1.0 / (x * power(x, - y - 1));
//	else if (y == 0)
//		return 1;
//	else
//		return x * power(x, y - 1);
//}
//int main()
//{
//	double n = 0;
//	int k = 0;
//	scanf("%lf %d", &n, &k);
//	double ret = power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//plan2：
//double power(double x, double y)
//{
//	if (y < 0)
//		return 1.0 / power(x, -y);
//	else if (y == 0)
//		return 1;
//	else
//		return x * power(x, y - 1);
//}
//int main()
//{
//	double n = 0;
//	int k = 0;
//	scanf("%lf %d", &n, &k);
//	double ret = power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//逆序字符串
//plan1：下标法
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//plan2:双指针
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//strlen是库函数
//sizeof是操作符

//strlen是计算字符串长度，只针对字符串，关注\0的位置
//sizeof是计算数据占用内存的大小，单位是字节，不在乎内存中存放的是什么

 //*str + 1，将str所指向的那块空间的值 + 1，str的值并没有被改变
//str + 1，str的地址 + 1，向后偏移一个字符指针的大小，一个字节

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long sum = 0;
//	sum = (1 + n) * n / 2;
//	printf("%lld", sum);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",sizeof(arr));
//}
//#include<string.h>
//int main()
//{ 
//	char arr[] = "abcdef";
//	memset(arr+1, 'x', 3);
//	printf("%s\n", arr);
//	return 0;
//}
//矩阵转置
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int arr[50][50] = { 0 };
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//plan1：
//	//for (j = 0; j < m; j++)//m行
//	//{
//	//	for (i = 0; i < n; i++)//n列
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//plan2：
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//左移操作符：左边丢弃，右边补0，二进制位往高位移动，有*2的效果
//a << 1 ，a并没有改变，相当于a + 1
//int main()
//{
//	//int a = 4;
//	int a = -4;
//	//0000 0000 0000 0000 0000 0000 0000 0100
//	//0000 0000 0000 0000 0000 0000 0000 1000
//	int b = a << 1;
//	//1000 0000 0000 0000 0000 0000 0000 0100
//	//1111 1111 1111 1111 1111 1111 1111 1011
//	//1111 1111 1111 1111 1111 1111 1111 1100
//	//1111 1111 1111 1111 1111 1111 1111 1000 - 左移后的补码
//	//1111 1111 1111 1111 1111 1111 1111 0111
//	//1000 0000 0000 0000 0000 0000 0000 1000 - 8
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//右移操作符：
//算数右移：右边丢弃，左边补符号位
//逻辑右移：右边丢弃，左边补0
//int main()
//{
//	int a = -4;
//	int b = a >> 1;
//	//1111 1111 1111 1111 1111 1111 1111 1100
//	//1111 1111 1111 1111 1111 1111 1111 1110 - 右移后的补码
//	//1111 1111 1111 1111 1111 1111 1111 1101
//	//1000 0000 0000 0000 0000 0000 0000 0010 - 原码
//	//-2
//
//	//vs上采用算数右移
//	return 0;
//}
//& - 按(二进制)位与
int main()
{
	int a = 3;
	int b = -5;
	int c = a & b;//3
	//0000 0000 0000 0000 0000 0000 0000 0011 -  3的补码
	//1000 0000 0000 0000 0000 0000 0000 0101 - -5的原码
	//1111 1111 1111 1111 1111 1111 1111 1010 - -5的反码
	//1111 1111 1111 1111 1111 1111 1111 1011 - -5的补码
	//

	//0000 0000 0000 0000 0000 0000 0000 0011
	//1111 1111 1111 1111 1111 1111 1111 1011
	//按位与：有一个为0，就为0；两个都为1，则为1
	//0000 0000 0000 0000 0000 0000 0000 0011

	int d = a | b;//-5
	//0000 0000 0000 0000 0000 0000 0000 0011 -  3的补码
	//1111 1111 1111 1111 1111 1111 1111 1011 - -5的补码
	//按位或：有一个为1，就为1；两个都为0，则为0
	//1111 1111 1111 1111 1111 1111 1111 1011 - 补码
	//1111 1111 1111 1111 1111 1111 1111 1010
	//1000 0000 0000 0000 0000 0000 0000 0101 - -5

	int e = a ^ b;//-8
	//0000 0000 0000 0000 0000 0000 0000 0011 -  3的补码
	//1111 1111 1111 1111 1111 1111 1111 1011 - -5的补码
	//按位异或：相同为0，相异为1
	//1111 1111 1111 1111 1111 1111 1111 1000 - 补码
	//1111 1111 1111 1111 1111 1111 1111 0111
	//1000 0000 0000 0000 0000 0000 0000 1000 - -8
	printf("%d %d %d", c, d, e);
	return 0;
}