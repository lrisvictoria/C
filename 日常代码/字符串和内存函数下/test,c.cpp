#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>  
#include <string.h>
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
#include <errno.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
	/*printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2)); 
	printf("%s\n", strerror(3));*/
	int* p = (int*)malloc(INT_MAX);//向堆区申请内存的，将其起始地址返回，类型是void，强制类型转换
	if (p == NULL)//开辟空间失败返回空指针，malloc是库函数，调用失败会把错误码放到errno中
	{
		//printf("%s\n", strerror(errno));//Not enough space
		perror("Malloc");//Malloc: Not enough space，通过提示信息加上分号，打印出错误信息
		return 1;
	}
	//错误码是全局的，会被实时更新
	return 0;
}

//perror - 打印错误信息
//void perror( const char *string );
