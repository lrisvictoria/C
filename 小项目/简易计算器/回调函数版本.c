#define _CRT_SECURE_NO_WARNINGS 1 
/*
�ŵ㣺
1.��װcalc������ͨ����switch...case����е���calc�����ݺ����ĵ�ַ��
  ��calc��ͨ������ָ����ö�Ӧ�ĺ���ʱ���ú����ͱ���Ϊ�ص�����
  �磬ͨ������ָ��pȥ����ָ��ָ���Add����ʱ��Add�ͱ���Ϊ�ص�����
  ���ûص������������˴�������࣬�������
ȱ�㣺
1.��Ҫ�Իص�������һ���˽�
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
void calc(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("����������������:>");
	scanf("%d %d", &x, &y);
	ret = p(x, y);//pΪ����ָ�룬Ϊ�����ĵ�ַ�����ú���
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);//����Add�����ĵ�ַ
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
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