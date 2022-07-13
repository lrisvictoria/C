#define _CRT_SECURE_NO_WARNINGS 1 
#include"game.h"
void init_board(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
void show_board(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("------------扫雷------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("------------扫雷------------\n");
}
static void flag_menu()
{
	printf("####################################\n");
	printf("######### 1.选择非雷区域  ##########\n");
	printf("######### 2.标记雷的位置  ##########\n");
	printf("######### 3.取消雷的标记  ##########\n");
	printf("####################################\n");
}
//标记雷的位置
static int set_flag(char show[ROWS][COLS], int row, int col,unsigned int flag)
{
	int x = 0;
	int y = 0;
	if (flag == EASY_COUNT)
	{
		printf("标记数和雷数相等，无法标记\n");
		return ;
	}
	while (1)
	{
		printf("请输入标记坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (show[x][y] == '*')
			{
				show[x][y] = '#';
				flag++;
				break;
			}
			else
			{
				printf("该位置已被排查，请重新输入!\n");
				continue;
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
			continue;
		}
	}
	return flag;
}
//取消标记
static int cancel_flag(char show[ROWS][COLS], int row, int col, unsigned int flag)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入取消标记的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (show[x][y] == '#')
			{
				show[x][y] = '*';
				flag--;
				break;
			}
			else
			{
				printf("该位置未标记，无法取消标记\n");
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
			continue;
		}
	}
	return flag;
}
static void change_place(char mine[ROWS][COLS], int row, int col, int x, int y)
{
	x = rand() % row + 1;
	y = rand() % col + 1;
	mine[x][y] == '1';
	printf("第一次踩雷，可真有你的，重新选!\n");
}
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			if (mine[x + i][y + j] == '1')
				count++;
		}
	}
	return count;
}
//爆炸展开
static void boom_board(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int* p)
{
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		int ret = get_mine_count(mine, x, y);
		if (ret == 0)
		{
			(*p)++;
			show[x][y] = ' ';
			int i = 0;
			for (i = -1; i <= 1; i++)
			{
				int j = 0;
				for (j = -1; j <= 1; j++)
				{
					if (show[x + i][y + j] == '*')
						boom_board(mine, show, row, col, x + i, y + j, p);
				}
			}
		}
		else
		{
			(*p)++;
			show[x][y] = ret + '0';
		}
	}
}
void fine_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int* p = &win;
	int op = 0;//选项
	int fch = 1;
	unsigned int flag_count = 0;
	while (win < row * col - EASY_COUNT)
	{
	again:
		flag_menu();
		scanf("%d", &op);
		if (op == 1)
		{
			printf("请输入要排查的坐标:>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && y >= 1 && x <= row && y <= col)
			{
				if (fch == 1 && mine[x][y] == '1')
				{
					change_place(mine, row, col, x, y);
					fch++;
				}
				else
				{
					if (mine[x][y] == '1')
					{
						system("cls");
						printf("很遗憾，你被雷炸死了!\n");
						printf("游戏结束!\n");
						show_board(mine, row, col);
						break;
					}
					else
					{
						boom_board(mine, show, row, col, x, y, p);
						system("cls");
						show_board(show, row, col);
					}
					fch++;
				}
			}
			else
			{
				printf("非法坐标，请重新输入!\n");
				continue;
			}
		}
		else if (op == 2)
		{
			flag_count = set_flag(show, row, col, flag_count);
			system("cls");
			show_board(show, row, col);
		}
		else if (op == 3)
		{
			flag_count = cancel_flag(show, row, col, flag_count);
			system("cls");
			show_board(show, row, col);
		}
		else
		{
			printf("选择错误，请重新选择:>\n");
			goto again;
		}
	}
	if (win == row * col -EASY_COUNT)
	{
		system("cls");
		show_board(show, ROW, COL);
		printf("恭喜你，扫雷成功!\n");
		printf("获得称号，排雷战士！\n");
		printf("答案揭晓:");
		show_board(mine, ROW, COL);
	}
}