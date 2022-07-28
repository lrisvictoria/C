#define _CRT_SECURE_NO_WARNINGS 1 
#include"game.h"
void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < col; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家下棋\n");
		printf("请选择坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已有棋子，请重新选择\n");
			}
		}
		else
		{
			printf("选择错误，请重新选择\n");
		}
	}
}
static int intelligent_computer(char board[ROW][COL], int row, int col, char ch)//ch为'#'进行下棋，ch为'*'进行阻拦
{
	//检查电脑能否获得胜利/阻拦玩家
	int i = 0;
	//行
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//判断第一个和第二个的元素电脑是否已下棋，对第三个元素进行下棋/阻拦
			if (board[i][0] == board[i][1] && board[i][0] == ch && board[i][2] == ' ')
			{
				board[i][2] = '#';
				return 1;
			}
			//判断第一个和第三个的元素电脑是否已下棋，对第二个元素进行下棋/阻拦
			if (board[i][0] == board[i][2] && board[i][0] == ch && board[i][1] == ' ')
			{
				board[i][1] = '#';
				return 1;
			}
			//判断第二个和第三个的元素电脑是否已下棋，对第一个元素进行下棋/阻拦
			if (board[i][1] == board[i][2] && board[i][1] == ch && board[i][0] == ' ')
			{
				board[i][0] = '#';
				return 1;
			}
		}
	}
	//列
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//第一和第二个已下，下/阻拦第三个
			if (board[0][j] == board[1][j] && board[0][j] == ch && board[2][j] == ' ')
			{
				board[2][j] = '#';
				return 1;
			}
			//第一和第三个已下，下/阻拦第二个
			if (board[0][j] == board[2][j] && board[0][j] == ch && board[1][j] == ' ')
			{
				board[1][j] = '#';
				return 1;
			}
			//第二和第三个已下，下/阻拦第一个
			if (board[1][j] == board[2][j] && board[1][j] == ch && board[0][j] == ' ')
			{
				board[0][j] = '#';
				return 1;
			}
		}
	}
	//主对角线
	if (board[0][0] == board[1][1] && board[1][1] == ch && board[2][2] == ' ')//落子/阻拦主对角线第三个元素
	{
		board[2][2] = '#';
		return 1;
	}
	if (board[0][0] == board[2][2] && board[0][0] == ch && board[1][1] == ' ')//落子/阻拦主对角线第二个元素
	{
		board[1][1] = '#';
		return 1;
	}
	if (board[1][1] == board[2][2] && board[1][1] == ch && board[0][0] == ' ')//落子/阻拦主对角线第一个元素
	{
		board[0][0] = '#';
		return 1;
	}
	//副对角线
	if (board[0][2] == board[1][1] && board[0][2] == ch && board[2][0] == ' ')//落子/阻拦副对角线第三个元素
	{
		board[2][0] = '#';
		return 1;
	}
	if (board[0][2] == board[2][0] && board[0][2] == ch && board[1][1] == ' ')//落子/阻拦副对角线第二个元素
	{
		board[1][1] = '#';
		return 1;
	}
	if (board[1][1] == board[2][0] && board[1][1] == ch && board[0][2] == ' ')//落子/阻拦副对角线第一个元素
	{
		board[0][2] = '#';
		return 1;
	}
	return 0;//若无法赢棋或无法阻拦，返回0
}
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	int sign1 = 0;
	int sign2 = 0;
	sign1 = intelligent_computer(board, ROW, COL, '#');//电脑智能赢棋
	if (sign1 == 0)//若电脑无法赢棋，则进行阻拦
	{
		sign2 = intelligent_computer(board, ROW, COL, '*');//阻拦玩家下棋
		if (sign2 == 0)//若赢棋和阻拦都不满足，电脑自行下棋
		{
			int x = 0;
			int y = 0;
			while (1)
			{
				x = rand() % row;
				y = rand() % col;
				if (board[x][y] == ' ')
				{
					board[x][y] = '#';
					break;
				}
			}
		}
	}
}
static int is_full(char board[ROW][COL], int row, int col)//判断是否满格
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char is_win(char board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断主对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断副对角线
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';
}