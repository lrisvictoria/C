#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char ch = 'a';//c语言有字符类型
//	"abcdef";//没有字符串类型
//	char arr1[] = "abcdef";
//	printf("%zu\n", strlen(arr1));//统计\0前的字符个数
//
//	char arr2[10] = {'a','b','c','d','e','f'};//6
//	//不完全初始化，其余元素默认初始化为0，为\0的ascii码值
//	printf("%zu\n", strlen(arr2));
//
//	char arr3[] = { 'a','b','c','d','e','f' };//随机值
//	//没有\0
//	printf("%zu\n", strlen(arr3));
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
//	//if ((int)strlen("abc") - (int)strlen("abcdef") > 0)
//	//if (strlen("abc") > strlen("abcdef"))
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
//#include<stdio.h>
//#include<assert.h>
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
//	//char arr2[] = { 'a','b','c' };//崩溃
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

//int main()
//{
//	char arr1[20] = { 0 };
//	//char* arr1 = "hello world";//奔溃
//	//arr1指向的是常量字符串，常量是不可修改的
//	char arr2[] = "abcdef";
//	//char arr2[] = { 'a','b','c' };//崩溃
//	//若没有\0就会一直往后找，程序会崩溃
//
//	strcpy(arr1, arr2);
//	//会把\0也拷贝过去，所以字符串源字符串一定要有\0
//	printf("%s\n", arr1);
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
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "hello\0XXXXXX";//调试一下
//	//会把源字符串的\0一起拷贝到arr1中
//	//并且目标字符串需要有\0，arr2会追加到arr1的后面
//	
//	//若没有\0
//	char arr2[] = { 'h','e','1','1','0' };//追加就放不下了
//	char arr3[] = "anduin";
//	//强制运行可能会有结果
//	strcat(arr1, arr3);
//	strcat(arr2, arr3);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//找不到\0会往后一直找\0，然后再\0的位置追加
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
//	char* ret = dest;//拷贝一份地址
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
//	printf("%s", ret);
//	return 0;
//}

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

//int main()
//{
//	char arr1[20] = "hello";
//	strcat(arr1, arr1);
//	printf("%s", arr1);
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

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdea";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf(">");
//	}
//	else if (ret < 0)
//	{
//		printf("<");
//	}
//	else
//	{
//		printf("=");
//	}
//	return 0;
//}
//以上是长度不受限制的字符串函数!
//在使用时可能会有风险，因为不能规定操作的字符个数


//长度受限制的字符串函数

//strncpy
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* start = dest;
//
//	while (count && (*dest++ = *src++) != '\0')//仍然会用\0覆盖
//		count--;
//	if (count)//处理操作长度大小>源字符串长度的情况
//	{
//		while (--count)//覆盖次数为count - 1次，因为上方\0已经被覆盖
//		{
//			*dest++ = '\0';
//		}
//	}
//	return(start);
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "anduin";
//	size_t count = 0;
//	scanf("%u", &count);
//	char* ret = my_strncpy(arr1, arr2, count);//\0不算做字符串内容，统计的是\0之前出现的字符
//	//strncpy(arr1, arr2, 3);
//	//printf("%s\n", arr1);
//	//strncpy(arr1, arr2, 6);
//	printf("%s\n", ret);
//	//printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "and";
//	strncpy(arr1, arr2, 3);//拷贝三个字符
//	printf("%s\n", arr1);
//	strncpy(arr1, arr2, 6);//源字符串长度<操作长度
//	//printf("%s\n", ret);
//	printf("%s\n", arr1);
//	return 0;
//}

//如果源字符串的长度没有操作长度大
//那么strncpy确实会操作操作长度大小的字符大小
//不够的会用\0来填充

//strncat
//char* my_strncat(char* dest, char* src, size_t count)
//{
//	char* start = dest;
//	while (*dest)//找目标字符串的\0
//	{
//		dest++;
//	}
//	while (count--)//count为真
//	{
//		if ((*dest++ = *src++) == 0)//操作长度大于源字符串，不进行补\0，直接返回
//			return(start);
//	}
//
//	*dest = '\0';//追加完毕没有返回，则手动加上\0,此时\0经过++指向操作字符后一个位置
//	return(start);
//}
//int main()
//{
//	char arr1[20] = "abcdef\0XXXXXXX";
//	char arr2[] = "and";
//	size_t count = 0;
//	scanf("%zu", &count);
//	char* ret = my_strncat(arr1, arr2, count);
//	//strncat(arr1, arr2, 6);//3个为操作的字符数，其实是四个，还有一个\0
//	//如果操作长度大于字符串长度
//	//则只会追加字符串，其余不会操作
//
//	printf("%s\n", ret);
//	//printf("%s\n", arr1);
//}

//int main()
//{
//	char arr1[20] = "abcdef\0XXXXXXX";
//	char arr2[] = "and";
//	strncat(arr1, arr2, 6);
//	//如果操作长度大于字符串长度
//	//则只会追加字符串，其余不会操作
//	//在这种情况下，在追加的末尾加上\0
//	printf("%s\n", arr1);
//}


//strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//
//	const char* cur = str2;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdeqabcdef0";
//	char arr2[] = "cdef";
//	char* ret = strstr(arr1, arr2);
//	if (NULL == ret)
//	{
//		printf("找不到子串\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int my_strncmp(char* str1, char* str2, size_t count)
//{
//	assert(str1 && str2);
//	while (!((*str1 - *str2)) && *str1 && *str2 && --count)//如果两者相等且不为'\0',并且只操作count个数，
//	//这里需要前置--，如果使用后置--，那么还会多进入一次循环，导致count多执行一次
//	//无序进行特殊处理，当前情况直接返回即可
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;//无论是\0还是其他情况都能处理
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcq";
//	int ret = my_strncmp(arr1, arr2, 3);
//
//	if (ret > 0)
//	{
//		printf("arr1 > arr2");
//	}
//	else if (ret < 0)
//	{
//		printf("arr1 < arr2");
//	}
//	else
//	{
//		printf("arr1 = arr2");
//	}
//	return 0;
//}

char* my_strncat(char* dest, char* src, size_t count)
{
	char* start = dest;
	while (*dest)//找目标字符串的\0
	{
		dest++;
	}
	while (count--)//count为真
	{
		if ((*dest++ = *src++) == 0)//操作长度大于源字符串，不进行补\0，直接返回
			return(start);
	}
	*dest = '\0';//追加完毕没有返回，则手动加上\0,此时\0经过++指向追加元素最后元素的后一个位置
	return (start);
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "worldld";
	char* ret = my_strncat(arr1, arr2, 5);
	printf("%s\n", ret);
	return 0;
}