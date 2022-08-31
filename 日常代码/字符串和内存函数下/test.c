#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>  
#include <string.h>
//字符串操作函数

//strtok - char * strtok ( char * str, const char * sep );
//strtok是会改变字符串的，所以通常使用拷贝的字符串
//int main()
//{
//	char arr[] = "a1249967801@163.com@haha nihao";
//	char buf[50] = { 0 };
//	strcpy(buf, arr);
//
//	const char* sep = "@. ";
//	char* str = NULL;
//	for (str = strtok(buf, sep); str != NULL;str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//	//strtok - 切割字符串
//	//"@."，为指针变量sep指向的字符串
//	//arr则是需要切割的字符串
//	//printf("%s\n", strtok(arr, sep));//只找第一个标记
//	//printf("%s\n", strtok(NULL, sep));//从保存好的位置继续往后找
//	//printf("%s\n", strtok(NULL, sep)); 
//	//如果字符串中不存在标记了，则返回空指针
//	return 0;
//}

//strerror
//返回错误码所对应的错误信息
//全局的变量：errno(错误码)
//#include <errno.h>
//#include <stdlib.h>
//#include <limits.h>
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));*/
//	int* p = (int*)malloc(INT_MAX);//向堆区申请内存的，将其起始地址返回，类型是void，强制类型转换
//	if (p == NULL)//开辟空间失败返回空指针，malloc是库函数，调用失败会把错误码放到errno中
//	{
//		//printf("%s\n", strerror(errno));//Not enough space
//		perror("Malloc");//Malloc: Not enough space，通过提示信息加上分号，打印出错误信息
//		return 1;
//	}
//	//错误码是全局的，会被实时更新
//	return 0;
//}

//perror - 打印错误信息
//void perror( const char *string );
//必定会打印出错误信息
//冒号前的为自定义信息

//如果只是想打印错误信息的话，perror比较方便，但是这是否说明strerror就没用呢？不是的
//如果不想打印，只想拿到错误信息，strerror会把错误码转化为错误信息，不打印
//而perror一定会打印

//字符操作函数

#include <ctype.h>
//isdigit 是数字返回非0，非数字返回0
//int main()
//{
//	int ret = isdigit('4');//参数ascii码值和字符都可以
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	/*if (ch >= 'a' && ch <= 'z')
//	{
//
//	}*/
//	int ret = islower(ch);
//
//	printf("%d\n", ret);
//	return 0;
//}

//字符转换
//int main()
//{
//	char ch = 'a';
//	putchar(toupper(ch));
//	printf("\n");
//	putchar(tolower(ch));
//	return 0;
//}

//内存操作函数

//void *memcpy( void *dest, const void *src, size_t count );//count为字节数
//为什么指针类型是void*
//作者实现memcpy函数的时候，需要考虑如何拷贝所有类型的数据类型
//void*可以接受任意类型的指针


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };//把arr1的前五个拷贝到arr2中
//
//	//把前五个数据的内存拷贝到arr2中
//	//memcpy
//	memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//模拟实现memcpy - 处理不重叠的拷贝
//强制类型只是临时的
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;//void类型指针使用时需要强制类型转换
//		
//		/*dest = (char*)dest + 1;
//		src = (char*)src + 1;*/
//
//		((char*)dest)++;
//		//后置++针对的是dest，因为++优先级比较高，
//		/**所以dest先和++进行一个结合，但是这个dest是void*类型
//		*也就是强制类型并没有真正把它强制类型转换过来
//		*如果在(char*)dest加上一个括号，形成聚组操作符
//		*让它先结合，那么就没什么问题了*/
//		((char*)src)++;
//		//而前置++则可以，因为操作符的结合性只在数据和两个操作符相接的时候
//		//才会涉及到结合性，当前情况并不涉及结合性，所以我们的数据肯定是先和
//		//char*结合，被强制类型转换了，再进行++，现在针对的就是强转后的类型
//
//		/*
//		++(char*)dest;
//		++(char*)src;
//		*/
//	}
//	return ret;
//}
//int main()
//{
//	/*int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };*/
//
//	/*my_memcpy(arr2, arr1, 20);*/
//
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memcpy(arr1 + 2, arr1, 20);
//
//	for (int i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr2[i]);
//		printf("%d ", arr1[i]);//1 2 1 2 1 2 1 8 9 10
//	}
//	return 0;
//}

//那么问题来了，如何将1,2,3,4,5如何拷贝到3,4,5,6,7的位置
//在同一块内存中的拷贝，当数据进行拷贝时，会把要拷贝的数据改变

//处理重叠的拷贝
//memmove

//模拟实现memmove - 重叠和不重叠的都能搞定
//#include <assert.h>
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	//1
//	//左边采用从前向后拷贝的方式，中间和右边采用从后向前拷贝的方式
//	//if (dest < src)
//	//{
//	//	//从前向后
//	//	while (count--)
//	//	{
//	//		*((char*)dest) = *((char*)src);
//	//		dest = (char*)dest + 1;
//	//		src = (char*)src + 1;
//	//	}
//	//}
//	//else
//	//{
//	//	//从后向前 
//	//	while (count--)
//	//	{
//	//		*((char*)dest + count) = *((char*)src + count);
//	//	}
//	//}
//	
//	//2
//	//左边和右间采用从前向后拷贝的方式，中间采用从后向前拷贝的方式
//	if (dest > src && dest < ((char*)src + count))
//	{
//		//从后向前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	else
//	{
//		//从前向后
//		while (count--)
//		{
//			*((char*)dest) = *((char*)src);
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9, 10 };
//	//从前往后拷贝或者从后向前拷贝
//	memmove(arr1 + 2, arr1, 20);//可以实现重叠内存的拷贝
//	//memmove(arr1, arr1 + 2, 20);
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//虽然memmove比memcpy更加好用
//但是memcpy依然很重要
//因为毕竟语言是迭代的，是一步一步发展的
//很多使用旧版本习惯的人可能习惯于使用memcpy
//因为可能版本还没有进行更替
//如果盲目删除这个语法，就会带来很大的问题


//并且实际上在vs中其实把memcpy进行了优化
//我们模拟实现的memcpy不能实现的相同内存的拷贝
//使用库里的可以实现

//memcmp - 比较内存中数据的大小
//>0 返回>0的数据
//=0 返回=0的数据
//<0 返回<0的数据

//int memcmp(const void* buf1, const void* buf2, size_t count);

//比较每一个字节对应数据的大小

//模拟实现memcmp
//int my_memcmp(const void* arr1, const void* arr2, size_t count)
//{
//  assert(arr1 && arr2);
//	while (count--)
//	{
//		if (*(char*)arr1 != *(char*)arr2)
//		{
//			return (*(char*)arr1) - (*(char*)arr2);
//		}
//		arr1 = (char*)arr1 + 1;
//		arr2 = (char*)arr2 + 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,0x11223305 };
//
//	int ret = my_memcmp(arr1, arr2, 16);
//	
//	printf("%d\n", ret);
//	return 0;
//}

//memset - 内存设置

//void* memset(void* dest, int c, size_t count);

//模拟实现memset
#include <assert.h>
void* my_memset(void* dest, int c, size_t count)
{
	assert(dest);
	void* ret = dest;
	while (count--)
	{
		*(char*)dest = c;
		dest = (char*)dest + 1;
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	my_memset(arr1, 1, 20); //memset是以字节为单位来初始化内存单元的
	//memset能接受的数据的最大值为ff，也就是一个字节的最大数据
	return 0;
}