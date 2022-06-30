#define _CRT_SECURE_NO_WARNINGS 1 
//BC109 杨辉三角
//6
//1
//1    1
//1    2    1
//1    3    3    1
//1    4    6    4    1
//1    5   10   10    5    1
//域宽：5
//思路：第一列和对角线都是1
//其余元素是其上方元素，和左上方元素的和
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    int arr[30][30] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (j == 0 || i == j)
//                arr[i][j] = 1;
//            if (i >= 2 && j >= 1)
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//BC110 井字棋
//如果KiKi获胜，输出“KiKi wins!”；
//如果BoBo获胜，输出“BoBo wins!”；
//如果没有获胜，输出“No winner!”。
//K O B
//O K B
//B O K
//KiKi wins!
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    char arr[3][3] = { 0 };
//    char flag = '0';
//    for (i = 0; i < 3; i++)//布置棋盘
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf(" %c", &arr[i][j]);//吸收空格
//        }
//    }
//    for (i = 0; i < 3; i++)
//    {
//        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')//行
//        {
//            flag = arr[i][1];
//            break;
//        }
//        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'O')//列
//        {
//            flag = arr[1][i];
//            break;
//        }
//        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')//主对角线
//        {
//            flag = arr[1][1];
//            break;
//        }
//        if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')//副对角线
//        {
//            flag = arr[1][1];
//            break;
//        }
//    }
//    if (flag == 'K')
//        printf("KiKi wins!\n");
//    else if (flag == 'B')
//        printf("BoBo wins!\n");
//    else
//        printf("No winner!\n");
//    return 0;
//}
//BC111 小乐乐与进制转换
//十进制转化为六进制
//6 %6=0 6/6=1 1%6=1
//10(六进制)
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[40];
//	int i = 0;
//	while (n > 0)
//	{
//		arr[i] = n % 6;//存
//		i++;//自增
//		n /= 6;//位次上升
//	}
//	for (i--; i >= 0; i--)//自增后-1
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//BC112 小乐乐求和
//等差数列求和公式
//数值大用longlong来存储，避免数据溢出
//int main()
//{
//	long long int n = 0;
//	scanf("%lld", &n);
//	long long sum = 0;
//	sum = (1 + n) * n / 2;
//	printf("%lld\n", sum);
//	return 0;
//}
//BC113 小乐乐定闹钟
int main()
{
	int h = 0;
	int m = 0;
	int k = 0;
	scanf("%d:%d %d", &h, &m, &k);
	h = ((m + k) / 60 + h) % 24;
	m = (m + k) % 60;
	printf("%d:%d", h, m);
	return 0;
}