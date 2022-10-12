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
//	int ch = fgetc(pf);// 读取完指向b
//	ch = fgetc(pf);// 读取完指向c
//	ch = fgetc(pf);// 读取完指向d
//
//	int pos = ftell(pf);// d相对于起始位置偏移量为3
//	printf("%d\n", pos);
//
//	rewind(pf);
//	printf("%d\n", ftell(pf));
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// fgetc
// 如果读取正常，会返回读取到的字符的ASCII值
// 如果读取失败，会返回EOF

// fgets
// 如果读取正常，返回的是存放读取到的数据的地址
// 如果读取失败，返回的是空指针

// fscanf
// 如果读取正常，返回的是格式化字符串中指定的数据的个数
// 如果读取失败，返回的数字小于格式化字符串指定数据的个数

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) 
//	{
//		perror("File opening failed");
//		return 1;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(pf)) != EOF)
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(pf))// ferror返回值为真，说明遇到了I/O型错误
//		puts("I/O error when reading");
//	else if (feof(pf))// feof为真，成功读取到文件尾结束
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
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
//	if (ret_code == SIZE)// 正常读取
//	{
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else// 读取不正常
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
//VS2013 WIN10环境测试
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}