#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

// �ļ�����

//int main()
//{
//	// ���ļ�
//	// ���·��
//	FILE* pf = fopen("test.txt", "w");// ֻд��ʽ��
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// д�ļ�
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	// ����·��
//	FILE* pf = fopen("c:\\code\\test.txt", "w");// ֻд��ʽ��
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// д�ļ�
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// fputc
//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "w");// ֻд��ʽ��
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// ���ļ���д��26��Ӣ����ĸ
//
//	for (int i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "r");// ��
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// ���ļ��ж�ȡ26��Ӣ����ĸ
//	for (int i = 0; i < 26; i++)
//	{
//		int ch = fgetc(pf);// ���������ַ���ascii��ֵ�ŵ�ch��
//		printf("%c ", ch);
//	}
//	
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "r");// ��
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// ����˳��д���ı���
//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "w");// д
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// д�ļ�������д��
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// ����˳���ȡ�ı���
//#include <stdlib.h>
//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "r");// ��
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// ���ļ������ж�ȡ
//	char* p;
//	fgets(p, 7, pf);
//	printf("%s", p);
//	fgets(p, 7, pf);
//	printf("%s", p);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// дһ���ṹ�������

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "��̫��", 10086, 114.514f };
//	
//	// ��s�е�����д���ļ���
//	FILE* pf = fopen("test.txt", "w");// д
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// д�ļ�
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// ��ȡһ���ṹ������

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "��̫��", 10086, 114.514f };
//
//	// ��s�е�����д���ļ���
//	FILE* pf = fopen("test.txt", "r");// ��
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//    int ch = fgetc(stdin);
//    fputc(ch, stdout);
//
//    return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		fscanf(stdin, "%d", &arr[i]);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		fprintf(stdout, "%d ", arr[i]);
//	}
//	return 0;
//}

// ��������ʽ���ļ���д��һ���ṹ�������

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "��̫��", 10086, 114.514f };
//
//	FILE* pf = fopen("test.txt", "wb");// ������ֻд
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ��s�ĵ�ַ�����Զ�������ʽ���ļ���д��һ����СΪs��Ԫ��
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct S s = { "��̫��", 10086, 114.514f };

	FILE* pf = fopen("test.txt", "rb");// ������ֻ��
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	
	fread(&s, sizeof(s), 1, pf);

	printf("%s %d %f\n", s.name, s.age, s.score);

	fclose(pf);
	pf = NULL;
	return 0;
}