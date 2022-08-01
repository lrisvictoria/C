#define _CRT_SECURE_NO_WARNINGS 1 
//BC104 最高身高
//描述：KiKi想从n行m列的方阵队列中找到身高最高的人的位置，
//输入：第一行包含两个整数n和m，表示这个方阵队列包含n行m列。
//从2到n+1行，每行输入m个整数（范围-231~231-1），
//用空格分隔，共输入n*m个数，
//表示方阵中的所有人的身高（保证输入身高都不相同）。
//(1≤x≤n≤10，1≤y≤m≤10)
//输出：一行，输出两个整数，用空格分隔，
//表示方阵中身高最高的人所在的行号和列号。
//思路：数字可以不存，在判断最大值时记录坐标
//输出结果+1即可
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[10][10];
//	int max = 0;
//	int x = 0;
//	int y = 0;
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
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d", x + 1, y + 1);
//	return 0;
//}
//BC105 矩阵相等判定
//描述：KiKi得到了两个n行m列的矩阵，他想知道两个矩阵是否相等，
//(当两个矩阵对应数组元素都相等时两个矩阵相等)。
//输入：第一行输入两个整数，用空格分隔
//输入两个矩阵,n行m列
//输出：一行，如果两个矩阵相等输出"Yes"并换行，否则输出"No"并换行。
// 2 2
//1 2
//3 4
//1 2
//3 4
//Yes
//思路：定义一个flag如果不相等直接break就可以了
//最后通过flag的值来判断是否相等
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10];
//    int arr2[10][10];
//    int flag = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = 1;
//                break;
//            }
//        }
//    }
//    if (flag == 0)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}
//BC106 上三角矩阵判定
//判断是否为上三角矩阵，
//即对角线及上方都不为0
//对角线下方为0
//思路：观察下标发现对角线下方的都是横坐标大于纵坐标
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10][10];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i > j)//横坐标>纵坐标
//			{
//				if (arr[i][j] != 0)//不为0
//				{
//					printf("NO\n");
//					return 0;//跳出整个循环
//				}
//			}
//		}
//	}
//	if (i == n)//遍历完整个数组
//		printf("YES\n");
//	return 0;
//}
//BC108 矩阵交换
//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    for (int i = 0; i < n; i++)//存
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    scanf("%d", &k);
//    char t = 0;
//    int a = 0;
//    int b = 0;
//    for (int i = 0; i < k; i++)//换
//    {
//        scanf(" %c %d %d", &t, &a, &b);
//        if (t == 'r')
//        {
//            for (int j = 0; j < m; j++)//取决于列数
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (t == 'c')
//        {
//            for (int j = 0; j < n; j++)//取决于行数
//            {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}