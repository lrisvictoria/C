#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	char buf[100] = { 0 };// ��д�����ݵ��ַ���
//	struct S s = { "��̫��", 10086, 114.514f };
//	// �ܷ������ṹ������ݣ�ת�����ַ���
//	// "��̫�� 10086 114.514"
//	sprintf(buf, "%s %d %.3f", s.name, s.age, s.score);// ����ʽ������д���ַ���
//	// ���ַ�����ʽ��ӡ
//	printf("%s\n", buf);// ��д���ʽ�����ݵ��ַ���
//
//	// �ܷ�buf�е��ַ�����ԭ��һ���ṹ�����ݣ�
//	struct S tmp = { 0 };// ��ԭ�Ľṹ��
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	// ���ַ����ж�ȡ���ݵ��ṹ��tmp��
//
//	// �Խṹ����ʽ��ӡ
//	printf("%s %d %.3f", tmp.name, tmp.age, tmp.score);
//
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	// ���ļ�


	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}