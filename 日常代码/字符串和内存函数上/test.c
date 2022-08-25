#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	//char ch = 'a';//c语言有字符类型
//	//"abcdef";//没有字符串类型
//	//char arr[] = "abcdef";
//	//strlen(arr);//string length，统计\0前的字符个数
//
//	//char arr[10] = {'a','b','c','d','e','f'};//6
//	////不完全初始化，其余元素默认初始化为0，为\0的ascii码值
//	//strlen(arr);
//
//	//可能遇到的bug
//	//strlen的返回类型为size_t
//	if (strlen("abc") - strlen("abcdef") > 0)//3 - 6 = -3转换为无符号是一个极大的数字
//	{
//		printf(">\n");//ok
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	//解决方案：强转或直接比大小
//}

//模拟实现strlen
//计数器
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归
//int my_strlen(const char* str)
//{
//	if (*str)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//指针 - 指针
//int my_strlen(const char* str)
//{
//	char* ret = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - ret;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//strcpy - 字符串拷贝
#include<stdio.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	char arr2[] = { 'a','b','c' };//崩溃
//	
//	//若没有\0就会一直往后找，程序会崩溃							  
//	//strcpy(arr1, arr2);
//	//会把\0也拷贝过去，所以字符串源字符串一定要有\0
//	
//	char* ret = my_strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//
//	//若目标空间无法存放源字符串，程序就会奔溃
//}

//请注意，若目标空间为常量字符串的话，程序也是会奔溃的！！！
//int main()
//{
//	char* arr1 = "hello world";	
//	//arr1指向的是常量字符串，常量是不可修改的
//	char arr2[] = "abcdef";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "anduin";
//	//把arr2追加到arr1
//
//	strcat(arr1, arr2);//字符串追加
//	printf("%s\n", arr1);
//	return 0;   
//}

//int main()
//{
//	//char arr1[20] = "hello\0XXXXXX";//调试一下
//	//会把源字符串的\0一起拷贝到arr1中
//	//并且目标字符串需要有\0，arr2会追加到arr1的后面
//	
//	//若没有\0
//	char arr1[] = { 'h','e','1','1','0' };//追加就放不下了
//	char arr2[] = "anduin";
//	//强制运行可能会有结果
//	strcat(arr1, arr2);
//	printf("%s", arr1);//找不到\0会往后一直找\0，然后再\0的位置追加
//	//其实这里已经造成了越界访问，很危险
//	return 0;
//}

//模拟实现实现strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//找目标空间的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " bit";
//
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//	return 0;
//}

//字符串自己给自己追加?

//完全不可以，目标字符串在找到\0后，会使用源字符串在\0处对内容进行追加
//源字符串结束的标准是找到\0
//但是源字符串和目标字符串相同，原先\0的位置被覆盖成b
//不会像别的字符串一样，可以找到\0
//目标字符串指针总是比源字符串快
//就会造成死循环


//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//找目标空间的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char* ret = my_strcat(arr1, arr1);
//	printf("%s", ret);//bitbit
//	return 0;
//}

//但是使用库函数是可行的，我们无法知道它是如何实现和处理的
//但是用我们相同的思路来实现strcat是不可行的，这只是一个参考代码，正确但不唯一

//strcmp - 字符串比较
//比较的不是字符串长度而是比较字符串中对应位置上字符的大小
//如果相同比较下一对，否则继续，直到不同或都遇到\0


//int my_strcmp(const char* e1, const char* e2)
//{
//	assert(e1 && e2);
//	while (*e1 == *e2)
//	{
//		if (*e1 == '\0')
//			return 0;//相等
//		e1++;
//		e2++;
//	}
//	//不相等
//	/*if (*e1 > *e2)
//		return 1;
//	else 
//		return 0;*/
//	return *e1 - *e2;//更加简洁
//}

