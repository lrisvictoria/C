#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//假设我怀疑这里有问题
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//查看调用逻辑
//void test2()
//{
//	printf("hello\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	char ch[] = "abcdef";
//	return 0;
//}
//debug版本会死循环，那么release呢？

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);
//	return 0;
//}

//比如在以后工作时，测试人员测出来bug，可能我们这边没有bug
//但是别怀疑，他们是对的，因为你们的版本不同
//你是debug，他是release

//模拟实现strcpy
//初阶版本
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')//处理\0之前的元素
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//处理\0
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//进阶版本
//#include<assert.h>//回馈错误信息，及时发现、定位错误
//char* my_strcpy(char* dest, const char* src)//返回类型为char*
////为了避免拷贝时，将dest和src写反的情况，源字符串不能被改变
////于是可以加const进行修饰，使得src不能被改，写错时及时报错
//{
//	assert(dest && src);//判断dest和src是否为空指针，只要有一个空指针无法使用
//	//当然也可以用if判断
//	//if(dest == NULL)
//	//{
//	//	//...但是有点小问题
//	// if语句无论在debug和release版本中，都会判断，
//	// 而assert只在debug版本起作用，release版本会自动优化
//	// assert只在出问题时才会报错，release版本认为问题基本都被解决的差不多了，所以会被优化
//	// 所以if没有assert好用
//	//}
//	char* ret = dest;
//	while (*dest++ = *src++);//后置++先使用后++，相当于先解引用把元素放到dest中，
//	//在进行++，当src为\0时，先解引用将\0放到dest中，*src++的值为0
//	//表达式结果为假，结束循环
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	//char* p = NULL;
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	//num = 20;//err
//	int ret = 100;
//	const int* p = &num;
//	//*p = 20;//err
//	p = &ret;
//	printf("%d\n", num);//10
//	printf("%d\n", *p);//100
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	//num = 20;//err
//	int ret = 100;
//	int* const p = &num;
//	*p = 20;
//	//p = &ret;//err
//	printf("%d\n", num);//20
//	printf("%d\n", *p);//20
//	return 0;
//}

//src不希望被修改，src指向的内容不修改，提高健壮性
//保护源数据，防止源数据被误操作
//健壮性 - 鲁棒性 - robust

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

//7.编程常见的错误
//编译型错误
//int main()
//{
//	return 0
//}
//这时初学时会出现的问题，随着不断的提升，后期基本不会出现

//链接型错误

//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//运行时错误
//

int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%d\n", *(arr + 2));
	printf("%p\n", arr);
	printf("%p\n", arr + 2);
	return 0;
}