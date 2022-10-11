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
//	char buf[100] = { 0 };// 被写入数据的字符串
//	struct S s = { "灰太狼", 10086, 114.514f };
//	// 能否把这个结构体的数据，转化成字符串
//	// "灰太狼 10086 114.514"
//	sprintf(buf, "%s %d %.3f", s.name, s.age, s.score);// 将格式化数据写入字符串
//	// 以字符串形式打印
//	printf("%s\n", buf);// 被写入格式化数据的字符串
//
//	// 能否将buf中的字符串还原成一个结构体数据？
//	struct S tmp = { 0 };// 还原的结构体
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	// 从字符串中读取数据到结构体tmp中
//
//	// 以结构体形式打印
//	printf("%s %d %.3f", tmp.name, tmp.age, tmp.score);
//
//	return 0;
//}

//int main()
//{
//	// 当前文件内容：abcdef
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	// 读文件
//	fseek(pf, 3, SEEK_SET);// 从起始位置偏移三个位置读取
//	int ch = fgetc(pf);// d
//	printf("%c\n", ch);
//
//	fseek(pf, -3, SEEK_END);// 从结尾位置向前偏移3个位置(相当于向后-3个位置)读取
//	ch = fgetc(pf);//d 
//	printf("%c\n", ch);
//
//	// 经fgetc后，d被读取，文件指针偏移，当前文件指针指向e
//
//	fseek(pf, 1, SEEK_CUR);// 从当前位置向后偏移1个位置读取
//	ch = fgetc(pf);// f
//	printf("%c\n", ch);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	// 当前文件内容：abcdef
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	// 读文件
	int ch = fgetc(pf);// 读取完指向b
	ch = fgetc(pf);// 读取完指向c
	ch = fgetc(pf);// 读取完指向d

	int pos = ftell(pf);// d相对于起始位置偏移量为3
	printf("%d\n", pos);

	rewind(pf);
	printf("%d\n", ftell(pf));

	// 关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}