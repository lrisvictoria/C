#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////�˵�
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play ***************\n");
//	printf("*********** 0.exit ***************\n");
//	printf("**********************************\n");
//}
////��Ϸʵ��
//void game()
//{
//	int ret = rand() % 100 + 1;
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));//ֻ����һ�������
//	//ѡ������
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		default:
//			printf("��ѡ�����������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play ***************\n");
//	printf("*********** 0.exit ***************\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	srand((unsigned int)time(NULL));
//	int ret = rand();
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ���������������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//n:
//	printf("hehe\n");
//	goto n;
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");//���ùػ�
again:
    printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������������ȡ���ػ�\n");
    scanf("%s", input);
    //�ж�
    if (strcmp(input, "������") == 0)
    {
        system("shutdown -a");//ȡ���ػ�
    }
    else
    {
        goto again;//�ٸ�һ�λ���
    }
}