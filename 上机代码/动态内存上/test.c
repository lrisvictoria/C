#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int arr[10];//向内存申请了40个字节
//	void* p = malloc(40);
//
//	return 0;
//}

#include <errno.h>
#include <string.h>

//int main()
//{
//	int* p = (int*)malloc(INT_MAX);//21亿多
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//打印错误码
//		return 1;//异常返回
//	}//使用
//	return 0;
//}

//#include <assert.h>
//
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);//21亿多
//	assert(p);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//打印错误码，了解错误
//		return 1;//异常返回
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;//改变指向，p最后指向空间的结尾
//	}
//	return 0;
//}


//err

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//打印错误码，了解错误
//		return 1;//异常返回
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;//改变指向，p最后指向空间的结尾后面位置
//	}
//	//释放
//	free(p);//ok?
//	return 0;
//}

//ok 

//int main()
//{
//	int* p = (int*)malloc(40);
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//打印错误码，了解错误
//		return 1;//异常返回
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;//改变指向，p最后指向空间的结尾后面位置
//	}
//	//释放
//	free(p);
//	//p = NULL;
//	return 0;
//}

//calloc

//int main()
//{
//	//40个字节 - 10个整形
//	calloc(10, sizeof(int));
//	return 0;
//}

//int main()
//{
//    int* p = (int*)calloc(10, sizeof(int));
//    if (p == NULL)
//    {
//        perror("calloc");//打印错误信息
//        return 1;
//    }
//    int i = 0;
//    //使用
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = i;//不改变指向   
//    }
//    //释放
//    free(p);
//    p = NULL;
//    return 0;
//}

int main()
{
	int* p = (int*)calloc(10, 4);

}