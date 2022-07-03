 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<math.h>
//博客代码
//时间转换：3661 1h 1m 1s
//int main()
//{
//	int seconds = 0;
//	int h, m, s;
//	scanf("%d", &seconds);
//	h = seconds / 3600;
//	m = (seconds % 3600) / 60;
//	s = (seconds % 3600) % 60;
//	printf("%d %d %d", h, m, s);
//	return 0;
//}
//int main()
//{
//    printf("%.lf\n", round(-2.9));//-3.0
//    printf("%.lf\n", round(-2.1));//-2.0
//    printf("%.lf\n", round(2.9));//3.0
//    printf("%.lf\n", round(2.1));//2.0
//}

//#include<math.h>
//int main()
//{
//    int i = -2.9;
//        int j = -2.9;
//    printf("%d\n", (int)trunc(-2.9)); //由于trunc默认接受的返回值为%f，但是我们这想输出的是整数所以用强制类型转化成int类型
//    printf("%d\n", (int)trunc(2.9));
//}

//#include<math.h>
//int main()
//{
//    printf("%.lf\n", round(-2.9));//-3
//    printf("%.lf\n", round(-2.1));//-2
//    printf("%.lf\n", round(2.5));//3
//    printf("%.lf\n", round(2.1));//2
//}
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = "abcdef";
//    if (arr1 == arr2)
//    {
//        printf("==\n");
//    }
//    else
//    {
//        printf("!=\n");
//    }
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = "abcdef";
//    if (strcmp(arr1, arr2) == 0)
//    {
//        printf("==\n");
//    }
//    else
//    {
//        printf("!=\n");
//    }
//}
//int main()
//{
//    int a = 3;
//    int b = 0;
//    int c = a && b;
//    printf("%d\n", c);//真为1，假为0
//    if (a && b)
//    {
//        printf("hehe\n");
//    }
//    if (a || b)
//    {
//        printf("haha\n");
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 0;
//    b = (a > 5 ? 3 : -3);
//    printf("%d\n", b);
//
//}

//int main()
//{
//    int a = 10;
//    int b = 0;
//    if (a > 5)
//    {
//        b = 3;
//    }
//    else
//    {
//        b = -3;
//    }
//    printf("%d\n", b);
//}
//#include<stdio.h>
//int main()
//{
//    register int a = 0;
//    printf("&a = %p\n", &a);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        getchar();
//    }
//    return 0;
//}