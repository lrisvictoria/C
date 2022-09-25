#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("###################################\n");
	printf("############  1.play   ############\n");
	printf("############  0.exit   ############\n");
	printf("###################################\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//³õÊ¼»¯ÆåÅÌ
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');
	//²¼ÖÃÀ×
	set_mine(mine, ROW, COL);
	system("cls");
	//´òÓ¡ÆåÅÌ
	show_board(show, ROW, COL);
	//ÅÅ²éÀ×
	fine_mine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó£¬ÇëÖØĞÂÑ¡Ôñ:>\n");
			break;
		}
	} while (input);
	return 0;
}