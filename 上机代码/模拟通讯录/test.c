#define _CRT_SECURE_NO_WARNINGS 1 

#include "contact.h"

int main()
{
	int input = 0;
	do
	{
		printf("��ѡ��>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������ϵ��\n");
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}