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
//	int ch = fgetc(pf);// ��ȡ��ָ��b
//	ch = fgetc(pf);// ��ȡ��ָ��c
//	ch = fgetc(pf);// ��ȡ��ָ��d
//
//	int pos = ftell(pf);// d�������ʼλ��ƫ����Ϊ3
//	printf("%d\n", pos);
//
//	rewind(pf);
//	printf("%d\n", ftell(pf));
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// fgetc
// �����ȡ�������᷵�ض�ȡ�����ַ���ASCIIֵ
// �����ȡʧ�ܣ��᷵��EOF

// fgets
// �����ȡ���������ص��Ǵ�Ŷ�ȡ�������ݵĵ�ַ
// �����ȡʧ�ܣ����ص��ǿ�ָ��

// fscanf
// �����ȡ���������ص��Ǹ�ʽ���ַ�����ָ�������ݵĸ���
// �����ȡʧ�ܣ����ص�����С�ڸ�ʽ���ַ���ָ�����ݵĸ���

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int c; // ע�⣺int����char��Ҫ����EOF
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) 
//	{
//		perror("File opening failed");
//		return 1;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(pf)) != EOF)
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(pf))// ferror����ֵΪ�棬˵��������I/O�ʹ���
//		puts("I/O error when reading");
//	else if (feof(pf))// feofΪ�棬�ɹ���ȡ���ļ�β����
//		puts("End of file reached successfully");
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//enum 
//{ 
//	SIZE = 5 
//};
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//	fwrite(a, sizeof * a, SIZE, fp); // д double ������
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������
//	if (ret_code == SIZE)// ������ȡ
//	{
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else// ��ȡ������
//	{ 
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) 
//			perror("Error reading test.bin");
//	}
//	fclose(fp);
//}

#include <stdio.h>
#include <windows.h>
//VS2013 WIN10��������
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}