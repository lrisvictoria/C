#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//BC71 新年快乐
//输入：无
//输出：Happy New Year*2019*
//int main()
//{
//    printf("Happy New Year*2019*");
//    return 0;
//}
//BC72 平均身高
//输入：五个浮点数
//输出：平均值，保留两位小数
//1.68 1.75 1.82 1.60 1.92
//1.75
//#include<stdio.h>
//int main()
//{
//    double h = 0.0;
//    double sum = 0.0;
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%lf", &h);
//        sum += h;
//    }
//    printf("%.2lf", sum / 5);
//    return 0;
//}
//BC73 挂科危险
//输入：一行，一个整数（0~30），表示KiKi挂的科目累计的学分。
//输出：一行，输出相应学习情况（Danger++，Danger，Good）
//14 Danger++
//1 Good
//5 Danger
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n >= 0 && n <= 3)
//        printf("Good");
//    else if (n >= 4 && n <= 9)
//        printf("Danger");
//    else
//        printf("Danger++");
//    return 0;
//}
//BC74 HTTP状态码
//输入：多组输入，一行，一个整数（100~600），表示HTTP状态码
//输出：对应的http状态码
//200-OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
//思路：不用if，用switch
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}
//BC76 公务员面试
//输入：每一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
//输出：每一行，输出去掉最高分和最低分的平均成绩，
//小数点后保留2位，每行输出后换行。
//注意是多组输入
//思路：一开始我没发现是多组输入于是按照平常的思路做没通过
//在两次尝试后我还是决定用冒泡排序做，比较适合我
//#include<stdio.h>
//void Sort(int arr[], int sz)
//{
//    sz = 7;
//    for (int i = 0; i < sz - 1; i++)
//    {
//        for (int j = 0; j < sz - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[7] = { 0 };
//    int sum = 0;
//    while (~scanf("%d %d %d %d %d %d %d",
//        &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7]))
//    {
//        Sort(arr, 7);
//        for (int i = 0; i < 7; i++)
//        {
//            if (i != 0 && i != 6)
//                sum += arr[i];
//        }
//        printf("%.2lf\n", sum / 5.0);
//        sum = 0;
//        //注意这里和要归0，因为sum的值被改变了，
//        //下一次进入循环时sum应该还是从0开始。
//    }
//    return 0;
//}
//BC77 有序序列插入一个数
//没错，又是这道题目，我又忘了，而且我上次做的方法有一个隐藏的错误
//输入：第一行输入一个整数(0≤N≤50)。
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//第三行输入想要进行插入的一个整数。
//输出为一行，N+1个有序排列的整数。
//5
//2 3 4 5 6
//1
//上述例子就是我错误的地方
//如果经过排序后，并没有找到比数组元素大的元素
//从而不能进入else部分，那么这个数组最终输出会变成这样
//2 2 3 4 5 6
//所以要考虑到这种情况，真是惭愧...
//
//int main()
//{
//	int arr[50] = { 0 };
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num;
//	scanf("%d", &num);
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > num)
//		{
//			arr[i + 1] = arr[i];//向后移动一位
//		}
//		else
//		{
//			arr[i+1] = num;
//			break;
//		}
//	}
//	if (arr[0] > num)
//		arr[0] = num;//要插入的元素小于所有的元素
//	for (int i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//BC78 筛选法求素数(个人感觉较难）
//筛选法：用筛选法求n以内的素数。
//将2~n之间的正整数放在数组内存储，
//将数组中2之后的所有能被2整除的数清0，
//再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。
//数组中不为0 的数即为素数。
//输入：多组输入，每行输入一个正整数（不大于100）。
//输出：输出两行，第一行，输出n之内（包括n）的素数，用空格分隔，
//第二行，输出数组中2之后被清0 的个数。每行输出后换行。
//20
//2 3 5 7 11 13 17 19
//11
//实现：
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int arr[101];//对应下标
//		for (int i = 2; i <= n; i++)
//		{
//			arr[i] = i;//存元素
//		}
//		for (int i = 2; i <= n; i++)
//		{
//			//i之后的元素进行取模，故i+1开始
//			for (int j = i + 1; j <= n; j++)
//			{
//				if (arr[j] % i == 0)
//					arr[j] = 0;//整除改0
//			}
//			int count = 0;
//			for (int i = 2; i <= n; i++)
//			{
//				if (arr[i] != 0)
//					printf("%d ", arr[i]);//不为0输出
//				else
//					count++;//为0，count自增
//			}
//			printf("\n%d\n", count);//控制格式
//		}
//	}
//	return 0;
//}
//求素数，试除法
//int main()
//{
//	int n;
//	while (scanf("%d", &n) == 1)
//	{
//		int count = 0;
//		int i = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 2; j < i; j++)//i-1个
//			{
//				if (i % j == 0)//判断是否整除
//				{
//					count++;//整除++，直接跳出
//					break;
//				}
//			}
//			if (j == i)//跳出循环，即无法整除，这时j和i相等，为素数
//				printf("%d ", i);
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}
//BC79 图像相似度
//第一行包含两个整数m和n，表示图像的行数和列数，用单个空格隔开。
//1≤m≤100, 1≤n≤100。之后m行，每行n个整数0或1，
//表示第一幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开。
//之后m行，每行n个整数0或1，
//表示第二幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开。
//输出描述：一个实数，表示相似度(以百分比的形式给出)，
//精确到小数点后两位。
//3 3
//1 0 1
//0 0 1
//1 1 0
//1 1 0
//0 0 1
//0 0 1
//44.44（注意）
//int main()
//{
//	int m, n;
//	int arr1[100][100];
//	int arr2[100][100];
//	scanf("%d %d", &m, &n);
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//				count++;
//		}
//	}
//	printf("%.2lf", 100.0 * count / (m * n));
//	return 0;
//}
//BC80 登录验证
//描述：（用户名：admin，密码：admin），
//用户输入用户名和密码，判断是否登录成功。
//多组测试数据，每行有两个用空格分开的字符串，第一个为用户名，第二个为密码。
//针对每组输入测试数据，输出为一行，
//一个字符串（“Login Success!”或“Login Fail!”）。
//思路：字符串进行比较用库函数strcmp而不是==
#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    char s3[] = "admin";
    while (~scanf("%s %s", s1, s2))
    {
        if (strcmp(s1, s3) == 0 && strcmp(s2, s3) == 0)
            printf("Login Success!\n");
        else
            printf("Login Fail!\n");
    }
    return 0;
}