#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//BC37 ����
//KiKi�ǳ�ϲ��������
//��������ǡ�˫11����11��11�գ�������·���7�ۣ�
//��˫12�� ��12��12�գ�������·���8�ۣ�
//������Ż�ȯ���Զ����50Ԫ
//�Ż�ȯֻ����˫11��˫12ʹ��)

//���ݷ�Χ���·��۸����� 1 \le val \le 100000 \1��val��100000
//����������
//һ�У��ĸ����֣���һ������ʾС�����е��·��۸�
//�ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ
//�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ���� ע���������ڱ�ֻ֤�С�˫11���͡�˫12����
//���������
//һ�У�С��ʵ�ʻ���Ǯ����������λС������
//����ʾ����Ҫָ���̼ҵ�����Ǯ��
int main()
{
	float price = 0.0;
	int mouth, day, flag;
	scanf("%f %d %d %d", &price, &mouth, &day, &flag);
	if (mouth == 11 && day == 11)
	{
		price *= 0.7;
		if (flag == 1)
		{
			price -= 50;
		}
	}
	if (mouth == 12 && day == 12)
	{
		price *= 0.8;
		if (flag == 1)
		{
			price -= 50;
		}
	}
	if (price <= 0)
		price = 0.0;
	//���������������priceС��0
	//ע��������Ϊ�������̼Ҳ������Ǯ
	printf("%.2f", price);
}