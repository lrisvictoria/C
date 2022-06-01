 #define _CRT_SECURE_NO_WARNINGS  1
//小飞机第一种写法
#include<stdio.h>
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}
//手机丢了
//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;
//}
//小飞机第二种写法
int main()
{
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		printf("     **     \n");
	}
	for (i = 0; i < 2; i++)
	{
		printf("************\n");
	}
	for (i = 0; i < 2; i++)
	{
		printf("    *  *    \n");
	}
	return 0;
}