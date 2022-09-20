#define _CRT_SECURE_NO_WARNINGS 1 

#include "contact.h"

int main()
{
	int input = 0;
	do
	{
		printf("请选择>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("增加联系人\n");
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
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}