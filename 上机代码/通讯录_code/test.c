#define _CRT_SECURE_NO_WARNINGS 1 
/*测试通讯录*/

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

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			AddContact(&con);
			break;
		case 2:
			system("cls");
			DelContact(&con);
			break;
		case 3:
			system("cls");
			SearchContact(&con);
			break;
		case 4:
			system("cls");
			ModifyContact(&con);
			break;
		case 5:
			system("cls");
			ShowContact(&con);//显示通讯录
			break;
		case 6:
			system("cls");
			SortContact(&con);
			break;
		case 0:
			system("cls");
			printf("退出通讯录\n");
			break;
		default:
			system("cls");
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}