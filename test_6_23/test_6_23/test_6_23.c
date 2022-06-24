#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//BC43 及格分数
//多组输入
//>=60 输出Pass 否则输出Fail
//int main()
//{
//	int i;
//	while (scanf("%d", &i) == 1)
//	{
//		if (i >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}
//BC44 判断整数奇偶性
//多组输入
//奇数，Odd 偶数，Even
//#include<stdio.h>
//int main()
//{
//    int i;
//    while (scanf("%d", &i) == 1)
//    {
//        if (i % 2 == 1)
//        {
//            printf("Odd\n");
//        }
//        else
//        {
//            printf("Even\n");
//        }
//    }
//    return 0;
//}
//BC45 最高分数
//输入三个数字，输出最大值 
//#include<stdio.h>
//int main()
//{
//    int num1, num2, num3;
//    scanf("%d %d %d", &num1, &num2, &num3);
//    int max = 0;
//    if (num1 >= num2 && num1 >= num3)
//    {
//        max = num1;
//    }
//    else if (num2 >= num1 && num2 >= num3)
//    {
//        max = num2;
//    }
//    else
//    {
//        max = num3;
//    }
//    printf("%d\n", max);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int num1, num2, num3;
//    scanf("%d %d %d", &num1, &num2, &num3);
//    if (num1 > num2)
//    {
//        if (num1 > num3)
//        {
//            printf("%d\n", num1);
//        }
//        else
//        {
//            printf("%d\n", num3);
//        }
//    }
//    else
//    {
//        if (num2 > num3)
//        {
//            printf("%d\n", num2);
//        }
//        else
//        {
//            printf("%d\n", num3);
//        }
//    }
//    return 0;
//}

//BC46 判断是元音还是辅音
//A(a), E(e), I(i), O(o),U(u)称为元音
//多组输入，每行输入一个字母。
//A
//b
//Vowel
//Consonant
//这里用scanf(" %c",&ch)
//在%c的前面写一个空格会消化掉前面所有的空白字符，然后读取一个字符
//scanf("%c\n",&ch)//不推荐（\n会留下一个回车的效果）
//第一次输入无效，当输入突然输入t时，由于换行的原因还会输出上次的结果
//所以不推荐
//在%c的后边发给一个'\n'，其实在输入时候就会消化掉这个\n字符
//不会为下次留下空白字符的隐患
//#include<stdio.h>
//int main()
//{
//    char ch;
//    char vowel[] = "AaEeIiOoUu";
//    while (scanf("%c\n", &ch) !=EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == vowel[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//        //getchar();//吸收\n
//    }
//
//    return 0;
//}
//BC47 判断是不是字母
//多组输入，每一行输入一个字符。
//A
//6
//A is an alphabet.
//6 is not an alphabet.
//第一种做法：直接判断
//#include<stdio.h>
//int main()
//{
//    char ch;
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//        getchar();
//    }
//    return 0;
//}
//第二种做法：库函数isalpha
//判断是否为字母

//int main()
//{
//    char ch;
//    while ((ch = getchar()) != EOF)
//    {
//        if (isalpha(ch))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//        getchar();
//    }
//    return 0;
//}
//BC48 字母大小写转换
//多组输入，每一行输入一个字母。
//a -> A
//A -> a
//Z -> z
//#include<stdio.h>
//int main()
//{
//    char ch;
//    while (scanf("%c", &ch) == 1)
//    {
//        if (ch >= 'a' && ch <= 'z')
//        {
//            //ch -= 32;
//            printf("%c\n", ch-32);
//        }
//        else
//        {
//            //ch += 32;
//            printf("%c\n", ch+32);
//        }
//        getchar();//吸收
//    }
//}
#include <stdio.h>
int main()
{
	char ch = 0;
	char arr[] = "AEIOUaeiou";
	//在%c的后边发给一个'\n'，其实在输入时候就会消化掉这个\n字符
	//不会为下次留下空白字符的隐患
	while (scanf("%c\n", &ch) != EOF)
	{
			int i = 0;
		for (i = 0; i < 10; i++)
		{
			if (ch == arr[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10)
			printf("Consonant\n");
	}
	return 0;
}
