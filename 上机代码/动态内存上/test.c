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

//int main()
//{
//	int* p = (int*)calloc(10, 4);
//
//}

//int test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//...
//		return 1;
//	}
//	//使用
//	if (1)//某个条件满足
//	{
//		return 2;//条件满足返回
//	}
//	//释放
//	free(p);//没有释放
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	test();
//	return 0;
//}

//醉代码
//程序会奔溃
//int main()
//{
//	int num = 10;
//	int* p = num;
//
//	free(p);
//	p = NULL;
//	return 0;
//}
//没问题，因为free的参数如果是空指针，什么都不干
//int main()
//{
//	int num = 10;
//	int* p = NULL;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//增加空间
//	int* ptr = realloc(p, 80);//不能用p接收
//	//当realloc开辟空间失败时，返回的是NULL
//	//p本来指向40个字节的空间，但是空间调整失败了，这不是偷鸡不成蚀把米吗
//	//连原本的空间都没了，你说realloc干的什么事情
//	//所以我们要用一个全新的指针来接收
//	//释放
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;//防止ptr误使用
//	}
//	//扩容后使用
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	realloc(NULL, 40);//等价于malloc(40)
//	return 0;  
//}

//realloc能对自己调整的空间再次realloc吗


//int main()
//{
//	int* p = (int*)malloc(80);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	realloc(p, 8000);//无返回值接收
//	//扩容后使用
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(40);
	int* ptr = (int*)realloc(p, 80);
	
	int* pptr = (int*)realloc(ptr, 120);

	return 0;
}