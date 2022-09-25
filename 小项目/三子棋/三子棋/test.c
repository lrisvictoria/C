#define _CRT_SECURE_NO_WARNINGS 1 
#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("************* 1.play *************\n");
	printf("************* 0.exit *************\n");
	printf("**********************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	init_board(board, ROW, COL);
	//打印棋盘
	system("cls");//清屏
	display_board(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		player_move(board, ROW, COL);
		//玩家下棋后展示棋盘
		display_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		system("cls");//清屏
		computer_move(board, ROW, COL);
		//电脑下棋后棋盘展示
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你赢得游戏！\n");
	}
	else if (ret == '#')
	{
		printf("很遗憾，你输了，电脑赢了\n");
	}
	else
	{
		printf("平局，再来一把吧！\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}