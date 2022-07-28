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
	//��ʼ������
	init_board(board, ROW, COL);
	//��ӡ����
	system("cls");//����
	display_board(board, ROW, COL);
	while (1)
	{
		//�������
		player_move(board, ROW, COL);
		//��������չʾ����
		display_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		system("cls");//����
		computer_move(board, ROW, COL);
		//�������������չʾ
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��ϲ��Ӯ����Ϸ��\n");
	}
	else if (ret == '#')
	{
		printf("���ź��������ˣ�����Ӯ��\n");
	}
	else
	{
		printf("ƽ�֣�����һ�Ѱɣ�\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}