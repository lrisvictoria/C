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
	struct Contact* con = NULL;
	/*
	 * 由于我们并没有创建结构体变量，所以只能通过结构体指针来进行修改
	 * 直接传递pc，在函数中会创建一份临时拷贝，所以并不能改变pc的值
	 * 于是传递pc的地址，用二级指针接收，通过二级指针来对pc进行修改
	 */
	InitContact(&con);
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