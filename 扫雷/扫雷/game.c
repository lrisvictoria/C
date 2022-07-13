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
static void flag_menu()
{
	printf("####################################\n");
	printf("######### 1.ѡ���������  ##########\n");
	printf("######### 2.����׵�λ��  ##########\n");
	printf("######### 3.ȡ���׵ı��  ##########\n");
	printf("####################################\n");
}
//����׵�λ��
static int set_flag(char show[ROWS][COLS], int row, int col,unsigned int flag)
{
	int x = 0;
	int y = 0;
	if (flag == EASY_COUNT)
	{
		printf("�������������ȣ��޷����\n");
		return ;
	}
	while (1)
	{
		printf("������������:>");
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
				printf("��λ���ѱ��Ų飬����������!\n");
				continue;
			}
		}
		else
		{
			printf("����Ƿ�������������!\n");
			continue;
		}
	}
	return flag;
}
//ȡ�����
static int cancel_flag(char show[ROWS][COLS], int row, int col, unsigned int flag)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������ȡ����ǵ�����:>");
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
				printf("��λ��δ��ǣ��޷�ȡ�����\n");
				break;
			}
		}
		else
		{
			printf("����Ƿ�������������!\n");
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
	printf("��һ�β��ף���������ģ�����ѡ!\n");
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
	int op = 0;//ѡ��
	int fch = 1;
	unsigned int flag_count = 0;
	while (win < row * col - EASY_COUNT)
	{
	again:
		flag_menu();
		scanf("%d", &op);
		if (op == 1)
		{
			printf("������Ҫ�Ų������:>");
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
						printf("���ź����㱻��ը����!\n");
						printf("��Ϸ����!\n");
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
				printf("�Ƿ����꣬����������!\n");
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
			printf("ѡ�����������ѡ��:>\n");
			goto again;
		}
	}
	if (win == row * col -EASY_COUNT)
	{
		system("cls");
		show_board(show, ROW, COL);
		printf("��ϲ�㣬ɨ�׳ɹ�!\n");
		printf("��óƺţ�����սʿ��\n");
		printf("�𰸽���:");
		show_board(mine, ROW, COL);
	}
}