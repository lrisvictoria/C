#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//一次访问一个字节，把x放入40个字节中
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = (char*)arr;
//	for (int i = 0; i < 40; i++)
//	{
//		*(p + i) = 'x';
//	}
//	return 0;
//}
//指针变量是用来存放地址的
//指针变量虽然存放别人的地址，但是它自己也有地址
//int main()
//{
//	int a = 10;
//	char ch = 'c';
//	int* pa = &a;
//	char* pc = &ch;//随机值
//    //ch没有进行初始化，pc里面放的是cccccccc，值是未知的
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;//解引用一个字节
//	//指针类型决定指针在解引用时的权限有多大
//	//char*的指针解引用访问1个字节
//	//int*的指针解引用访问4个字节
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa=%p\n", pa);
//	printf("pc=%p\n", pc);
//	//指针类型决定了指针的步长(向前/向后 走一步多大距离)
//	//整形指针+1跳过一个整形，向后走四个字节
//	//字符指针+1跳过一个字符，向后走一个字节
//	printf("pa+1=%p\n", pa + 1);
//	printf("pc+1=%p\n", pc + 1);
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 1 + i;
//		p++;//改变指向
//		//*(p+i) = 1 + i;//不改变指向
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(p + i));//不改变指向
//		printf("%d ", *p++);//改变指向
//	}
//	return 0;
//}
//野指针成因：
//局部变量未初始化
//数组越界访问
//使用被释放的空间
//主函数中接收空间被释放的地址，可以吗？可以
//可以使用吗，不可以，这块空间已经不属于我们了，这块空间还给操作系统了
//这块空间可能已经被别人使用，我们使用了一块不属于我们的空间
//这就是非法操作了...


//避免返回栈空间的地址 
//int main()
//{
//	int a = 10;
//	//int* pa = &a;//明确初始化
//	int* p = NULL;//NULL就是初始化指针的
//}

//指针 +- 整数
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//for (vp = &values[0]; vp < &values[N_VALUES];)
//{
//	*vp++ = 0;
//	//由于后置++先使用后++，所以写成*(vp++) = 0也一样
//	//但是注意，和(*p)++不一样，这时对*p进行解引用操作，找到对象并+1
//}


//#define N_VALUES 5
//for (vp = &values[N_VALUES]; vp > &values[0];)
//{
//	*--vp = 0;
//}
//指针起始位置指向数组最大元素后一个元素，通过比较指针的大小，通过前置--，
//先将指向改变，并在这过程中将数组元素改为0，直到不满足条件，且指针最后只会与数组首元素地址进行比较。

//指针起始只是指向数组后一个元素，但并没有访问，不属于越界访问

//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//{
//	*vp = 0;
//}
//指针指向数组最大元素下标处，通过for循环对指针大小进行比较，
//在过程中将数组元素改为0，直到不满足条件，且指针最后比较的元素为数组首元素前一个元素的地址

//int a[10] = {0};int*p = &a;和int* p = a
//一个存首元素的地址，一个存数组的地址，使用起来有没有不一样的地方
//&a是取出数组的地址，而p只能指向一个元素。理论上讲不对，编译器会报警告
//用起来的话没什么区别，因为数组的地址和数组首元素的地址是一样的
//p里面的地址也是一样的
//而这时对于指针 +- 整数跳过的也是一个整形的大小

//指针 - 指针的绝对值是指针之间元素的个数，
//两个指针相减的前提是：指针指向的同一块连续的空间

//指针 - 指针实现strlen函数
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//		str++;
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//改变指向访问数组元素
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);//改变指向
//		p++;
//	}
//	return 0;
//}

//数组和指针不是一组相同的概念，数组能够存放一组数，连续的空间，数组的大小取决于元素个数。指针是一个变量，存放地址的，4 / 8个字节。
//
//* *联系：数组名是地址(指针)，数组可以把首元素的地址，交给一个指针变量后，通过指针来访问数据。 * *