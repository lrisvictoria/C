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
	printf("------------ɨ��------------\n");
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
	printf("------------ɨ��------------\n");
}
//����׵�λ��
void mark_mine(char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������Ҫ���λ�õ�����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				show[x][y] = '!';
				break;
			}
			else
			{
				printf("��λ�ò��ܱ���ǣ�����������!\n");
			}
		}
		else
		{
			printf("����Ƿ�������������!\n");
		}
	}
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
//��ըչ��
void boom_board(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int* p)
{
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		int ret = get_mine_count(mine, x, y);
		if (ret == 0)
		{
			(*p)++;
			show[x][y] = ' ';
			int i = 0;
			int j = 0;
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')    //���Ƶݹ���������ֹ�Ѿ��Ų���������ٴεݹ飬�Ӷ�������ݹ�
						boom_board(mine, show, row, col, i, j, p);
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
	char ch = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų��׵�����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻��ը����!\n");
				show_board(mine, ROW, COL);
				break;
			}
			else
			{
				if (show[x][y] != '*')
				{
					printf("���������Ų飬����������!\n");
					continue;
				}
				else
				{
					boom_board(mine, show, row, col, x, y, p);
					show_board(show, ROW, COL);
					printf("��Ҫ��ǵĻ�������#���������������:>");
					scanf(" %c", &ch);
					if (ch == '#')
					{
						mark_mine(show, row, col);
						show_board(show, row, col);
					}
					else
					{
						continue;
					}
				}
			}
		}
		else
		{
			printf("�Ƿ����꣬����������!\n");
		}
	}
	if (win == row * col -EASY_COUNT)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�!\n");
		printf("��óƺţ�����սʿ��\n");
		show_board(show, ROW, COL);
	}
}