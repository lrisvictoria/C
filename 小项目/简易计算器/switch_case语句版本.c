#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
/*
�ŵ㣺
1.�뷨�򵥣�����ʵ�֣������׶�����
ȱ�㣺
1.������������Ĳ�������switch����ⲿʱ����������������Ϊ0�Ի����������������
  �˳�������ǰ��Ҳ����ʾ��������������Ա��������������ŵ�case����ڲ�����ɴ�������
2.������Խ��Խ���ӣ��������ݵ��޸ķ��ȴ�switch����е�case���Խ��Խ�࣬ʹ���벻�����޸ĺ��Ķ�
*/
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x % y;
}
void menu()
{
	printf("*************************\n");
	printf("****** 1.add 2.sub ******\n");
	printf("****** 3.mul 4.div ******\n");
	printf("********* 0.exit ********\n");
	printf("*************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			int ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ�����������ѡ��:>\n");
			break;
		}
	} while (input);
	return 0;
}