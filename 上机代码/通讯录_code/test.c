#define _CRT_SECURE_NO_WARNINGS 1 
/*����ͨѶ¼*/

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
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��>:");
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
			ShowContact(&con);//��ʾͨѶ¼
			break;
		case 6:
			system("cls");
			SortContact(&con);
			break;
		case 0:
			system("cls");
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			system("cls");
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}