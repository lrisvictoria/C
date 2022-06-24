#define _CRT_SECURE_NO_WARNINGS 1
//BC46的补充做法
//用%s来获取，可以不用getchar()来吸收
//并且对于字符串aaaaa不会重复打印
//这种做法就是可以如果这个babbaab
//也是会输出Vowel的
//因为我检查了所有的元素，有元音，就打印Vowel
//也可以说是根据单词来判断是否有元音
//#include<stdio.h>
//int main()
//{
//	char buf[1024] = { 0 };
//	char a[] = "AaEeIiOoUu";
//	while (scanf("%s", buf) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (buf[i] == a[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//	}
//}
//BC48的补充做法
//运用库函数
//islower - 检查字母是否为小写
//toupper - 小写转化为大写
//tolower - 大写转化为小写
//#include<stdio.h>
//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		else
//		{
//			printf("%c\n", tolower(ch));
//		}
//		getchar();
//	}
//}