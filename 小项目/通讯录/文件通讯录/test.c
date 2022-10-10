#define _CRT_SECURE_NO_WARNINGS 1 

#include "contact.h"
void menu()
{
	printf("**************************************\n");
	printf("*****   1. add      2. del       *****\n");
	printf("*****   3. search   4. modify    *****\n");
	printf("*****   5. show     6. sort      *****\n");
	printf("*****   0. exit                  *****\n");
	printf("**************************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

int main()
{
	int input = 0;
	struct Contact con;
	InitContact(&con);//初始化
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			system("cls");
			AddContact(&con);
			break;
		case DEL:
			system("cls");
			DelContact(&con);
			break;
		case SEARCH:
			system("cls");
			SearchContact(&con);
			break;
		case MODIFY:
			system("cls");
			ModifyContact(&con);
			break;
		case SHOW:
			system("cls");
			ShowContact(&con);
			break;
		case SORT:
			system("cls");
			SortContact(&con);
			break;
		case EXIT:
			system("cls");
			SaveContact(&con);
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			system("cls");
			printf("选择错误，请重新选择\n");
			break;

		}
	} while (input);
}