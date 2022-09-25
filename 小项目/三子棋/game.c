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
		printf("�������\n");
		printf("��ѡ������:>");
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
				printf("�������������ӣ�������ѡ��\n");
			}
		}
		else
		{
			printf("ѡ�����������ѡ��\n");
		}
	}
}
static int intelligent_computer(char board[ROW][COL], int row, int col, char ch)//chΪ'#'�������壬chΪ'*'��������
{
	//�������ܷ���ʤ��/�������
	int i = 0;
	//��
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//�жϵ�һ���͵ڶ�����Ԫ�ص����Ƿ������壬�Ե�����Ԫ�ؽ�������/����
			if (board[i][0] == board[i][1] && board[i][0] == ch && board[i][2] == ' ')
			{
				board[i][2] = '#';
				return 1;
			}
			//�жϵ�һ���͵�������Ԫ�ص����Ƿ������壬�Եڶ���Ԫ�ؽ�������/����
			if (board[i][0] == board[i][2] && board[i][0] == ch && board[i][1] == ' ')
			{
				board[i][1] = '#';
				return 1;
			}
			//�жϵڶ����͵�������Ԫ�ص����Ƿ������壬�Ե�һ��Ԫ�ؽ�������/����
			if (board[i][1] == board[i][2] && board[i][1] == ch && board[i][0] == ' ')
			{
				board[i][0] = '#';
				return 1;
			}
		}
	}
	//��
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//��һ�͵ڶ������£���/����������
			if (board[0][j] == board[1][j] && board[0][j] == ch && board[2][j] == ' ')
			{
				board[2][j] = '#';
				return 1;
			}
			//��һ�͵��������£���/�����ڶ���
			if (board[0][j] == board[2][j] && board[0][j] == ch && board[1][j] == ' ')
			{
				board[1][j] = '#';
				return 1;
			}
			//�ڶ��͵��������£���/������һ��
			if (board[1][j] == board[2][j] && board[1][j] == ch && board[0][j] == ' ')
			{
				board[0][j] = '#';
				return 1;
			}
		}
	}
	//���Խ���
	if (board[0][0] == board[1][1] && board[1][1] == ch && board[2][2] == ' ')//����/�������Խ��ߵ�����Ԫ��
	{
		board[2][2] = '#';
		return 1;
	}
	if (board[0][0] == board[2][2] && board[0][0] == ch && board[1][1] == ' ')//����/�������Խ��ߵڶ���Ԫ��
	{
		board[1][1] = '#';
		return 1;
	}
	if (board[1][1] == board[2][2] && board[1][1] == ch && board[0][0] == ' ')//����/�������Խ��ߵ�һ��Ԫ��
	{
		board[0][0] = '#';
		return 1;
	}
	//���Խ���
	if (board[0][2] == board[1][1] && board[0][2] == ch && board[2][0] == ' ')//����/�������Խ��ߵ�����Ԫ��
	{
		board[2][0] = '#';
		return 1;
	}
	if (board[0][2] == board[2][0] && board[0][2] == ch && board[1][1] == ' ')//����/�������Խ��ߵڶ���Ԫ��
	{
		board[1][1] = '#';
		return 1;
	}
	if (board[1][1] == board[2][0] && board[1][1] == ch && board[0][2] == ' ')//����/�������Խ��ߵ�һ��Ԫ��
	{
		board[0][2] = '#';
		return 1;
	}
	return 0;//���޷�Ӯ����޷�����������0
}
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	int sign1 = 0;
	int sign2 = 0;
	sign1 = intelligent_computer(board, ROW, COL, '#');//��������Ӯ��
	if (sign1 == 0)//�������޷�Ӯ�壬���������
	{
		sign2 = intelligent_computer(board, ROW, COL, '*');//�����������
		if (sign2 == 0)//��Ӯ��������������㣬������������
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
static int is_full(char board[ROW][COL], int row, int col)//�ж��Ƿ�����
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
	//�ж���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж���
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�жϸ��Խ���
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