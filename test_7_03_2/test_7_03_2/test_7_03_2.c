#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////菜单
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play ***************\n");
//	printf("*********** 0.exit ***************\n");
//	printf("**********************************\n");
//}
////游戏实现
//void game()
//{
//	int ret = rand() % 100 + 1;
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));//只生成一次随机数
//	//选择输入
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		default:
//			printf("无选项，请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play ***************\n");
//	printf("*********** 0.exit ***************\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	srand((unsigned int)time(NULL));
//	int ret = rand();
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//n:
//	printf("hehe\n");
//	goto n;
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");//设置关机
again:
    printf("请注意，你的电脑将在一分钟内关机，输入我是猪，就取消关机\n");
    scanf("%s", input);
    //判断
    if (strcmp(input, "我是猪") == 0)
    {
        system("shutdown -a");//取消关机
    }
    else
    {
        goto again;//再给一次机会
    }
}