#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 60)
//		printf("及格\n");
//	else
//		printf("不及格\n");
//	return 0;
//}
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score < 60)
//        printf("不及格\n");
//    else if (score >= 60 && score <= 70)
//        printf("及格\n");
//    else if (score >= 70 && score <= 85)
//        printf("良好\n");
//    else
//        printf("优秀\n");
//    return 0;
//}
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score < 60)
//        printf("不及格\n");
//        printf("请继续努力\n");//错误
//    else
//        printf("优秀\n");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
//}
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score < 60)
//        printf("不及格\n");
//    else if (score >= 60 && score < 70)
//        printf("及格\n");
//    else if (score >= 70 && score < 85)
//        printf("良好\n");
//    else
//        printf("优秀\n");
//    return 0;
//}
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score < 60)
//    {
//        printf("不及格\n");
//        printf("请继续努力\n");
//    }
//    else
//        printf("及格\n");
//    return 0;
//}
//输出1-100之间的奇数
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("输入错误\n");
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;//自增条件    
//    }
//    return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	int tmp = 0;
//	while ((tmp) = getchar() != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):>");
//	int ch = getchar();
//	if ('Y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    for (int i = 1; i <= 10; i++)
//    {
//        if (5 == i)
//            continue;
//        printf("%d ", i);
//    }
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}