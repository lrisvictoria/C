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
	InitContact(&con);//��ʼ��
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			system("cls");
			printf("ѡ�����������ѡ��\n");
			break;

		}
	} while (input);
}