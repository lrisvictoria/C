 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int arr[10][10];
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int num = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[i][j] > 0)
//			{
//				num += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", num);
//}
//不创建数组，直接输入数据
//int main()
//{
//	int num = 0;
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &num);
//			if (num > 0)
//			{
//				sum += num;
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//插入有序数组
//int main() {
//    int n;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d ", &arr[i]);
//    }
//    int m;
//    scanf("%d", &m);
//    int j = 0;
//    for (j = n - 1; j >= 0; j--) //找到要插入元素位置
//    {
//        if (arr[j] > m) {
//            arr[j + 1] = arr[j];//把插入位置之后的数据往后移动一位
//        }
//        else {
//            arr[j + 1] = m;
//            break;
//        }
//    }
//    if (j < 0)
//        arr[0] = m;
//    for (int i = 0; i < n + 1; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//将一个四位数，反向输出
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}
//大小写转化(多组输入）
//函数 - getchar() - 获取一个字符，输出一个字符
//     - putchar() - 打印/输出一个
//int main()
//{
//	int ch = 0;
//	//EOF - end of file - 文件结束标志 - 通常是为文件的末尾的
//	while ((ch = getchar())!=EOF)//输 入 A时，敲击回车的同时会往里面放一个\n
//	{
//		//putchar(ch + 32);//a - 97 / A - 65
//		//printf("\n");//换行
//		printf("%c\n", ch + 32);//一步搞定
//		getchar();//把\n拿走，不使用
//	}
//	return 0;
//}

//十六进制数 ABCDEF转化为十进制整数
//int main()
//{
//	printf("%15d", 0xABCDEF);
//	return 0;
//}
//包括两行： 第一行为“Hello world!” 
//第二行为printf(“Hello world!”)调用后的返回值
//1)
//int main()
//{
//    int ret = printf("Hello world!");
//    printf("\n");
//    printf("%d\n", ret);
//    return 0;
//}
//2)
//int main()
//{
//    printf("\n%d\n", printf("Hello world!"));//想打印值先调用printf函数
// 得到值为12，再换行进行打印12
//    return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//小数在内存中可能不能精确保存，此题可能原本意图让我们用float类型
//因为double类型精度过高
//int main()
//{
//    int num = 0;
//    double c_score = 0.0;
//    double m_score = 0.0;
//    double e_score = 0.0;
//    scanf("%d;%lf,%lf,%lf", &num, &c_score, &m_score, &e_score);
//    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.",
//        num, c_score, m_score, e_score);
//    return 0;
//}
//输出该字符是字母（YES）或不是（NO）
//#include<stdio.h>
//int main()
//{
//    int ch = getchar();
//    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//判断并输出
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();//处理\n
//	}
//}
//
//isalpha - 是专门用来判断一个字符是不是字母的
//是字母返回非0的值
//不是字母返回0
#include<ctype.h>//头文件
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//}
//int main()
//{
//	int arr1[20];
//	int arr2[20];
//	int n,m;
//	scanf("%d", &n);
//	scanf("%d", &m);
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				sum += arr1[i];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//void test()
//{
//	static int a = 3;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//}
//
//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}

#include<stdio.h>
//int main()
//{
//    int score = 0;
//    
//    int sum = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//    }
//    printf("%.1f", sum/5.0);
//    return 0;
//}