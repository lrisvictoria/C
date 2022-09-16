#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//		count++;
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int day = 0;
//again:
//	scanf("%d", &day);
//	switch(day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default:
//			printf("输入错误\n");
//			goto again;
//	}
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//}
//int main()
//{
//	char password[20];
//	int tmp = 0;
//	scanf("%s", password);
//	while ((tmp = getchar()) != '\n')
//		;
//	printf("请确认密码(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//}
//问题1：:为什么ch类型为int？
//答：getchar()所接受的返回值类型为int
//且char类型只有八个比特位，EOF返回值为-1
//无法对某些情况决绝
//问题2：为什么ch = getchar()要用()括起来？
//答：!=的优先级高于=，而getchar()需要有返回值接收
//若没有()，getchar就会先和EOF进行匹配，从而导致结构混乱
//问题3：ch是否会把\n读取？
//答：会，每行会读一个字符和一个\n，然后输出
//所以总是字符输出，并且换行
int main()
{
	char password[20] = { 0 };
	scanf("%s", password);
	int tmp = 0;
	getchar();
	/*while ((tmp = getchar()) != '\n')
	{
		;
	}*/
	int ch = getchar();
	if (ch == 'a')
		printf("yes");
}
//问题1：这里为什么用循环处理
//答：输入密码有空格时，字符串读取空格之前的内容，
//getchar只读取一个字符，其他数据放置于缓冲区
//并且在下一次getchar时，缓冲区里还有数据，读取一个
//结果就错了
//用循环处理可以吸收所有字符
//问题2：这里的 !='\n'是什么意思？
//答：getchar一次读取一个字符，直到读到\n，要停止，因为后面没元素了
//判定一下

//提问老师的问题的回答：
//问题1：鹏哥说接收getchar()返回值的类型如果不用int用char会有失败的案例，有没有具体的失败案例？
//答：有些字符可能会存在占位比较多的情况，考虑文本上来说有的字符不是一个字节，在真正项目里并不会用到
//问题2：对于这个式子(ch = getchar()) != EOF，我把括号去掉，让getchar() !=EOF先执行，运行后，这样的结果是怎么产生的？
//答：getchar()会先和!=EOF进行计算，结果为真或假，然后把真假的值赋给ch
//问题3：3.当scanf("%s", password)读取字符串时，为什么不会吧\n归为字符串一起读进去呢？
//答：scanf读取数据，以空白字符为结尾，遇到空白字符会将其作为输入结尾，不会读取\n，制表符，空格等空白字符 