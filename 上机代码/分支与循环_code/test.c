#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//		count++;
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int day = 0;
//again:
//	scanf("%d", &day);
//	switch(day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//		case 7:
//			printf("��Ϣ��\n");
//			break;
//		default:
//			printf("�������\n");
//			goto again;
//	}
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//}
//int main()
//{
//	char password[20];
//	int tmp = 0;
//	scanf("%s", password);
//	while ((tmp = getchar()) != '\n')
//		;
//	printf("��ȷ������(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//}
//����1��:Ϊʲôch����Ϊint��
//��getchar()�����ܵķ���ֵ����Ϊint
//��char����ֻ�а˸�����λ��EOF����ֵΪ-1
//�޷���ĳЩ�������
//����2��Ϊʲôch = getchar()Ҫ��()��������
//��!=�����ȼ�����=����getchar()��Ҫ�з���ֵ����
//��û��()��getchar�ͻ��Ⱥ�EOF����ƥ�䣬�Ӷ����½ṹ����
//����3��ch�Ƿ���\n��ȡ��
//�𣺻ᣬÿ�л��һ���ַ���һ��\n��Ȼ�����
//���������ַ���������һ���
int main()
{
	char password[20] = { 0 };
	scanf("%s", password);
	int tmp = 0;
	getchar();
	/*while ((tmp = getchar()) != '\n')
	{
		;
	}*/
	int ch = getchar();
	if (ch == 'a')
		printf("yes");
}
//����1������Ϊʲô��ѭ������
//�����������пո�ʱ���ַ�����ȡ�ո�֮ǰ�����ݣ�
//getcharֻ��ȡһ���ַ����������ݷ����ڻ�����
//��������һ��getcharʱ���������ﻹ�����ݣ���ȡһ��
//����ʹ���
//��ѭ������������������ַ�
//����2������� !='\n'��ʲô��˼��
//��getcharһ�ζ�ȡһ���ַ���ֱ������\n��Ҫֹͣ����Ϊ����ûԪ����
//�ж�һ��

//������ʦ������Ļش�
//����1������˵����getchar()����ֵ�������������int��char����ʧ�ܵİ�������û�о����ʧ�ܰ�����
//����Щ�ַ����ܻ����ռλ�Ƚ϶������������ı�����˵�е��ַ�����һ���ֽڣ���������Ŀ�ﲢ�����õ�
//����2���������ʽ��(ch = getchar()) != EOF���Ұ�����ȥ������getchar() !=EOF��ִ�У����к������Ľ������ô�����ģ�
//��getchar()���Ⱥ�!=EOF���м��㣬���Ϊ���٣�Ȼ�����ٵ�ֵ����ch
//����3��3.��scanf("%s", password)��ȡ�ַ���ʱ��Ϊʲô�����\n��Ϊ�ַ���һ�����ȥ�أ�
//��scanf��ȡ���ݣ��Կհ��ַ�Ϊ��β�������հ��ַ��Ὣ����Ϊ�����β�������ȡ\n���Ʊ�����ո�ȿհ��ַ� 