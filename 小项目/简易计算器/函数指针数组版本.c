#define _CRT_SECURE_NO_WARNINGS 1 
/*
�ŵ㣺
1.�������ȼ���
2.���ӹ���ʱֻ��Ҫ���庯�����ں���ָ�����������Ӹú�����ַ����
ȱ�㣺
1.��Ҫ�Ժ���ָ��������һ���˽�
*/
#include<stdio.h>
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
	return x / y;
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
	//����ָ������ - ת�Ʊ� - ����һ������Ĺ���
	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };//����һ��Ԫ��0����input�������ع��ܶ�Ӧ����
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
			break;
		}
		if (input >= 1 && input <= 4)
		{
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);//pfArr[input]��������Ԫ�أ��ҵ�������ַ�����ú���
			printf("%d\n", ret);
		}
		else
		{
			printf("ѡ�����������ѡ��:>\n");
		}
	} while (input);
	return 0;
}