 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
//strcmp(str1,str2)
//<0 str1<str2
//0 ==
//>0 str1>str2
//字符串排序
//int main()
//{
//	char str[5][60];
//	char t[60];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%s", &str[i]);
//	}
//	//使用冒泡排序
//	for (int i = 0; i < 4; i++)//五行元素，四趟,n-1
//	{
//		for (int j = 0; j < 4 - i; j++)//挨着两个元素比较次数
//		{
//			if (strcmp(str[j], str[j + 1]) > 0)
//			{
//				strcpy(t, str[j]);
//				strcpy(str[j], str[j + 1]);
//				strcpy(str[j + 1], t);
//			}
//			
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	return 0;
//}

//int main()
//{
//    printf("D:\Anduin_code\anduins-code-warehouse");
//}
//void ReverseString(char* p,int size)
//{
//	int start = 0;
//	int end = size - 1;
//	char tmp = 0;
//	if (size == 0 || size == 1)
//	{
//		p = p;
//	}
//	while (start < end)
//	{
//		char tmp = p[start];
//		p[start] = p[end];
//		p[end] = tmp;
//		start++;
//		end--;
//	}
//	printf("%s", p);
//}
//
//int main()
//{
//	char str[20] = { 0 };
//	int len = 0;
//	printf("请输入一个字符串:>");
//	scanf("%s", &str);
//	len = strlen(str);
//	ReverseString(str, len);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("D:\Anduin_code\anduins-code-warehouse"));
//	return 0;
//}
//int Add(int x, int y)
//{
//    return (x + y);
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    scanf("%d%d", &num1, &num2);
//    sum = Add(num1, num2);
//    printf("%d\n", sum);
//}

//int main()
//{
//    int arr[10] = { 0 };
//    //0~9
//    //输入10个值给数组
//    int i = 0;
//    while (i < 10)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    //输出数组的10个值
//    i = 0;
//    while (i < 10)
//    {
//        printf("%d ", arr[i]);
//        i++;
//    }
//}

//#include<stdio.h>
//int global = 2019;//全局变量
//int main()
//{
//    int local = 2020;//局部变量
//    printf("global = %d\n", global);//打印结果是什么？2020
//    //当局部变量和全局变量同名的时候，局部变量优先使用。
//    return 0;
//}
//#include<stdio.h>
//int num1 = 2019;//全局变量
//int main()
//{
//    int num1 = 2020;//局部变量
//    printf("num1 = %d\n", num1);//打印结果是什么？
//    return 0;
//}

//int main()
//{
//    char arr1[] = "abcd";//此处可以结合内存来说明
//    char arr2[] = { 'a', 'b', 'c', 'd' };
//    //结合内存详细讲
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    return 0;
//}

//int main()
//{
//    char arr1[] = "abcd";
//    char arr2[] = { 'a','b','c','d' };
//    printf("%d\n", strlen(arr1));
//    printf("%d\n", strlen(arr2));//可以画图详细讲解
//}

//int main()
//{
//    //printf("%s\n", "(are you ok??)");//在老编译器上会打印(are you ok]
//    ////三字母词:??) ->]
//    //printf("%s\n", "(are you ok\?\?)");
//    //printf("%c\n", '\'');
//    //printf("%c\n", "\"");
//    //printf("\a\a\a");
//    char a[] = "abc";
//    printf("%c%c\b%c", a[0], a[1], a[2]);
//    //printf("1\t23");
//    //printf("anudin\n");
//
//    //printf("123\r");
//   // printf("hello");
//    //printf("%c\n", '\130');
//    //printf("%c\n", '\x30');//3*16+0*1
//}

int main()
{
    int line = 0;
    printf("insist codeing >\n");
    while (line < 20000)
    {
        printf("写代码\n");
        line++;
    }
    if (line == 20000)
    {
        printf("好offer\n");
    }
}