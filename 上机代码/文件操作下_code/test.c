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

//int main()
//{
//	// ��ǰ�ļ����ݣ�abcdef
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	// ���ļ�
//	fseek(pf, 3, SEEK_SET);// ����ʼλ��ƫ������λ�ö�ȡ
//	int ch = fgetc(pf);// d
//	printf("%c\n", ch);
//
//	fseek(pf, -3, SEEK_END);// �ӽ�βλ����ǰƫ��3��λ��(�൱�����-3��λ��)��ȡ
//	ch = fgetc(pf);//d 
//	printf("%c\n", ch);
//
//	// ��fgetc��d����ȡ���ļ�ָ��ƫ�ƣ���ǰ�ļ�ָ��ָ��e
//
//	fseek(pf, 1, SEEK_CUR);// �ӵ�ǰλ�����ƫ��1��λ�ö�ȡ
//	ch = fgetc(pf);// f
//	printf("%c\n", ch);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	// ��ǰ�ļ����ݣ�abcdef
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	// ���ļ�
	int ch = fgetc(pf);// ��ȡ��ָ��b
	ch = fgetc(pf);// ��ȡ��ָ��c
	ch = fgetc(pf);// ��ȡ��ָ��d

	int pos = ftell(pf);// d�������ʼλ��ƫ����Ϊ3
	printf("%d\n", pos);

	rewind(pf);
	printf("%d\n", ftell(pf));

	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}