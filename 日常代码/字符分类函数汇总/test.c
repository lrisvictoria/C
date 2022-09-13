#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <ctype.h>

//iscntrl
//int main()
//{
//	int ret = iscntrl('\n');
//	printf("%d\n", ret);
//	ret = iscntrl('a');
//	printf("%d\n", ret);
//	ret = iscntrl('1');
//	printf("%d\n", ret);
//	return 0;
//}

//issapce
//int main()
//{
//	int ret = isspace('\t');
//	printf("%d\n", ret);
//	ret = isspace(' ');
//	printf("%d\n", ret);
//	ret = isspace('\v');
//	printf("%d\n", ret);
//	ret = isspace('1');
//	printf("%d\n", ret);
//	return 0;
//}

//isdigit
//int main()
//{
//	int ret = isdigit('9');
//	printf("%d\n", ret);
//	//ret = isdigit('10');//err 不是0~9，为字符串
//	//printf("%d\n", ret);
//	ret = isdigit('a');
//	printf("%d\n", ret);
//}

//isxdigit
//int main()
//{
//	int ret = isxdigit('9');//0~9
//	printf("%d\n", ret);
//	ret = isxdigit('a');//a~f
//	printf("%d\n", ret);
//	ret = isxdigit('E');//A~F
//	printf("%d\n", ret);
//	ret = isxdigit('\n');//假
//	printf("%d\n", ret);
//	return 0;
//}

//islower
//int main()
//{
//	int ret = islower('a');
//	printf("%d\n", ret);
//	ret = islower('z');
//	printf("%d\n", ret);
//	ret = islower('\n');//假
//	printf("%d\n", ret);
//	return 0;
//}

//isupper
//int main()
//{
//	int ret = isupper('A');
//	printf("%d\n", ret);
//	ret = isupper('Z');
//	printf("%d\n", ret);
//	ret = isupper('a');//假
//	printf("%d\n", ret);
//	return 0;
//}

//isalpha
//int main()
//{
//	int ret = isalpha('A');//真
//	printf("%d\n", ret);
//	ret = isalpha('G');//真
//	printf("%d\n", ret);
//	ret = isalpha('a');//真
//	printf("%d\n", ret);
//	ret = isalpha('\n');//假
//	printf("%d\n", ret);
//	return 0;
//}

//isalnum
//int main()
//{
//	int ret = isalnum('A');//真
//	printf("%d\n", ret);
//	ret = isalnum('a');//真
//	printf("%d\n", ret);
//	ret = isalnum('8');//真
//	printf("%d\n", ret);
//	ret = isalnum('\n');//假
//	printf("%d\n", ret);
//	return 0;
//}

//ispunct
//int main()
//{	
//	int ret = ispunct(',');//逗号
//	printf("%d\n", ret);
//	ret = ispunct('!');//感叹号
//	printf("%d\n", ret);
//	ret = ispunct('7');//err 数字
//	printf("%d\n", ret);
//	ret = ispunct('a');//err 字母
//	printf("%d\n", ret);
//	ret = ispunct(' ');//空白字符，不可见
//	printf("%d\n", ret);
//	return 0;
//}

//isgraph
//int main()
//{
//	int ret = isgraph('1');//ok
//	printf("%d\n", ret);
//	ret = isgraph('!');//ok
//	printf("%d\n", ret);
//	ret = isgraph('a');//ok
//	printf("%d\n", ret);
//	ret = isgraph(1);//笑脸 无法显示
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int ret = isprint('a');//字母
//	printf("%d\n", ret);
//	ret = isprint(' ');//空白字符
//	printf("%d\n", ret);
//	ret = isprint(',');//标点符号
//	printf("%d\n", ret);
//	ret = isprint(1);//不可见字符
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char ch1 = '1';
//	char ch2 = 'A';
//	char ch3 = 'a';
//
//	printf("%c\n", tolower(ch1));
//	printf("%c\n", tolower(ch2));
//	printf("%c\n", tolower(ch3));
//
//	return 0;
//}

int main()
{
	char ch1 = '1';
	char ch2 = 'A';
	char ch3 = 'a';

	printf("%c\n", toupper(ch1));
	printf("%c\n", toupper(ch2));
	printf("%c\n", toupper(ch3));

	return 0;
}