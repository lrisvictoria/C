#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

// 文件操作

//int main()
//{
//	// 打开文件
//	// 相对路径
//	FILE* pf = fopen("test.txt", "w");// 只写形式打开
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	// 绝对路径
//	FILE* pf = fopen("c:\\code\\test.txt", "w");// 只写形式打开
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// fputc
//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");// 只写形式打开
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 向文件中写入26个英文字母
//
//	for (int i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");// 读
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 向文件中读取26个英文字母
//	for (int i = 0; i < 26; i++)
//	{
//		int ch = fgetc(pf);// 将读到的字符的ascii码值放到ch中
//		printf("%c ", ch);
//	}
//	
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");// 读
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
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 按照顺序写入文本行
//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");// 写
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件，按行写入
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 按照顺序读取文本行
//#include <stdlib.h>
//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");// 读
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 读文件，按行读取
//	char* p;
//	fgets(p, 7, pf);
//	printf("%s", p);
//	fgets(p, 7, pf);
//	printf("%s", p);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 写一个结构体的数据

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "灰太狼", 10086, 114.514f };
//	
//	// 把s中的数据写到文件中
//	FILE* pf = fopen("test.txt", "w");// 写
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 读取一个结构体数据

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "灰太狼", 10086, 114.514f };
//
//	// 把s中的数据写到文件中
//	FILE* pf = fopen("test.txt", "r");// 读
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
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

// 二进制形式向文件中写入一个结构体的数据

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "灰太狼", 10086, 114.514f };
//
//	FILE* pf = fopen("test.txt", "wb");// 二进制只写
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 从s的地址处，以二进制形式向文件中写入一个大小为s的元素
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
	struct S s = { "灰太狼", 10086, 114.514f };

	FILE* pf = fopen("test.txt", "rb");// 二进制只读
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