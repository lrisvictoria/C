#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	//常量字符串存放在常量区，一旦创建好就不能被修改，是只读的
//	
//	//把abcdef常量字符串首字符a的地址放到指针变量p中
//	//证明一下，解引用*p看结果
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	//注意abcdef是常量字符串，不能被改！！！
//	*p = 'w';//程序给你崩喽
//	//所以加一个const修饰
//	//const char* p = "abcdef";
//	
//	//p是指针变量，在x86的环境下是4个字节
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//也是指向第一个元素
//	//和常量字符串非常相似
//}

//一道笔试题
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
		printf("p1 == p2\n");
	else
		printf("p1 != p2\n");

	if (arr1 == arr2)
	{
		printf("arr1 == arr2\n");
	}
	else
	{
		printf("arr1 != arr2\n");
	}
}

