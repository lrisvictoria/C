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

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	// 读文件


	// 关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}