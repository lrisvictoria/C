#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//复习
//字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	const char* ps = "abcdef";//常量字符串，在常量区
//	//修饰*ps，ps指向的内容不能被修改
//	printf("%s\n", ps);
//	
//	printf("%c\n", *ps);
//	return 0;
//}

//指针数组
//char*
//int*
//char**

//int main()
//{
//	char* arr[4];//指针数组，存放char*类型指针的数组，数组四个元素
//	int* arr[6];//
//	
//	return 0;
//}

//数组指针
//整形指针 - 指向整形
//数组指针 - 指向数组

//int main()
//{
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;//&arr取出数组的地址，放在pa中为数组指针，指向arr数组
//
//	int* p2 = arr;//数组名是数组首元素地址，arr就是&arr[0]
//
//	return 0;
//}

//函数指针 - 也就是指针 - 指向函数的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//pf就是函数指针变量
//	int (*pf)(int, int) = Add;//&Add
//	//int (*pf)(int x, int y) = &Add;
//	
//	int ret = (* pf)(3, 4);//pf(3, 4)也可以
//
//	printf("%d\n", ret);
//	return 0;
//}

//函数指针数组

//int main()
//{
//	int (*pfArr[5])(int, int);//[]先和pf结合为数组
//	//指针元素类型为int (*) (int, int)
//
//	//指向函数指针数组的指针
//	int (*(*p3)[5])(int, int);
//	//p3是一个指向函数指针数组的指针
//
//	return 0;
//}

//使用函数指针实现回调函数


//回顾结束，正片开始

//数组名在大多情况下为首元素地址
//但有两个例外
//1.sizeof(数组名)，这里计算的是整个数组的大小，单位是字节
//2.&数组名，这里取出的是整个数组的地址

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	int* p = a;
//	int (*pa)[4] = &a;
//	//a - int*
//	//&a - int (*) [4]
//	printf("%zu\n", sizeof(a));//16 a作为数组名单独放在sizeof内部，计算的是数组的总大小，单位是字节
//	printf("%zu\n", sizeof(a + 0));//4/8 a没有单独放在sizeof内部，表示首元素地址，+0不变，计算的是首元素地址的大小
//	printf("%zu\n", sizeof(*a));//4 a为首元素地址，*a就是首元素，计算的是首元素的大小
//	printf("%zu\n", sizeof(a + 1));//4/8 a为首元素地址，a+1，整形指针+1跳过一个整形，就是第二个元素的地址，计算的就是指针的大小
//	printf("%zu\n", sizeof(a[1]));//4 a[1]就是数组的第二个元素，sizeof(a[1])的大小
//	printf("%zu\n", sizeof(&a));//4/8 &a，取出的是整个数组的地址，但是它仍然是地址，是地址，sizeof(&a)就是4/8个字节
//	printf("%zu\n", sizeof(*&a));//16 &a取出的是整个数组的地址，是数组指针类型，*&a是对数组指针解引用，访问的是一个数组的大小，16字节
//	//这也相当于一来一去抵消了，其实这就是sizeof(a);相当于数组名单独放在sizeof内部
//	printf("%zu\n", sizeof(&a + 1));//4/8 &a数组的地址，&a+1跳过整个数组，&a+1还是地址，是4/8个字节
//	printf("%zu\n", sizeof(&a[0]));//4/8 a[0]是数组的第一个元素，&a[0]是数组第一个元素的地址，是4/8个字节
//	printf("%zu\n", sizeof(&a[0] + 1));//4/8 &a[0]是第一个元素的地址，&a[0]+1就是第二个元素的地址
//
//	//sizeof(&*a);//a没有单独放在sizeof内部，*a就是第一个元素，&a就是取出第一个元素的地址
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };//6个元素 a b c d e f
//
//	printf("%d\n", sizeof(arr));//6 arr是数组名，并且是单独放在sizeof内部，计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr + 0));//4/8 arr没有放在sizeof内部，数组名arr为首元素地址，
//	//arr+0还是首元素地址，char*是指针，是指针就是4/8个字节
//	printf("%d\n", sizeof(*arr));//1 arr没有单独放在sizeof内部，为首元素地址，*arr就是首元素，类型为char，sizeof计算结果为1字节
//	printf("%d\n", sizeof(arr[1]));//1 arr[1]为第二个元素，sizeof(arr[1])计算的是第二个元素的大小，1个字节
//	printf("%d\n", sizeof(&arr));//4/8 &arr取出的是数组的地址，sizeof(&arr)计算的是数组的地址的大小，4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr取出的是数组的地址,类型为数组指针类型char(*) [6]，
//	//+1跳过一个数组，指向f的后面,本质是地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]是'a'的地址，&arr[0]+1是'b'的地址，是地址就是4/8个字节
//	//&arr[0] - char*
//
//	return 0;
//}

//sizeof计算对象或者类型创建的对象所占内存空间的大小，单位是字节
//sizeof是操作符，不是函数


//strlen 求字符串长度的，计算的是字符串中\0之前出现的字符的个数
//统计到\0位置，如果没有看到\0，会继续往后找
//strlen是库函数

//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//字符串的结束标志是'\0'，ASCII码值是0
//
//	printf("%d\n", strlen(arr));//随机值，arr是数组名，但是没有放在sizeof内部，也没有&，
//	//arr就是首元素的地址，strlen得到arr后，从arr数组首元素的地方开始计算字符串的长度，直到找到\0，
//	//但是arr数组后边的内存中没有\0，arr内存的后面是否有\0，在什么位置，是不确定的
//	//所以\0前面出现多少个字符是随机的
//
//	printf("%d\n", strlen(arr + 0));//随机值 arr是数组首元素地址，arr+0还是首元素的地址，答案还是随机值
//	//printf("%d\n", strlen(*arr));//err arr是数组名，*arr就是首元素，就是a，是97，把97传给了strlen，
//	//strlen就把字符a的ascii码值，就把97当成了地址，这块空间是不允许我们访问的，一旦访问程序会奔溃
//	//err 会非法访问内存
//  //这个地址是不能随便访问的，只有当它分配给你时，才能访问
//
//	//printf("%d\n", strlen(arr[1]));//err arr[1] - 'b' - 98 
//	printf("%d\n", strlen(&arr));//随机值 &arr取出的是数组的地址，因为strlen会把指针类型转换为char*
//	//且数组的地址也是指向数组的起始位置和第一个案例一样
//
//	printf("%d\n", strlen(&arr + 1));//随机值 &arr取出的是整个数组的地址，&arr+1跳过一个数组，比从arr开始计算的随机值小6，也是随机值
//	printf("%d\n", strlen(&arr[0] + 1));//随机值 &arr[0] + 1取出的是首元素的地址，比从arr开始计算的随机值小1，也是随机值
//
//	return 0;
//}

//********
//当数组没有\0时
//这里的strlen确实走到了数组的后面，但是并没有改变数组的值，没有破坏数据，只是计算长度

//小偷和保安的例子
//比如我去银行踩点，数保安，你能说我抢银行吗，我只是数了一下有多少个人，
//但是我并没有把保安给带走，我也没有对银行下手
//这里虽然越界了，但是并没有破坏数据，没问题哈

//但是这种计算是无意义的，因为字符数组里面没有\0，无法在自身空间计算
//所以并不能计算出正确结果，这种写法本身就存在问题
//最好就是里面自己加上一个\0



//int main()
//{
//	char arr[] = "abcdef";
//	//a b c d e f \0 - 7个元素
//
//	printf("%d\n", sizeof(arr));//7 arr单独放在sizeof内部，计算整个数组的大小，单位是字节，包含\0
//	printf("%d\n", sizeof(arr + 0));//4/8 arr为首元素地址，arr+0还是首元素地址
//	printf("%d\n", sizeof(*arr));//1 *arr是首元素，计算的是字符a的大小
//	printf("%d\n", sizeof(arr[1]));//1 arr[1]是第二个元素，计算的是第二个字符的大小
//	printf("%d\n", sizeof(&arr));//4/8 &arr取出的是整个数组的地址，整个数组的地址依然是地址，大小仍然是4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr + 1跳过整个数组，把\0也跳过了，但是它依然是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0] + 1是第二个元素的地址
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));//6 计算的是\0之前字符出现的个数
//	printf("%d\n", strlen(arr + 0));//6 arr没有单独放在sizeof内部，为首元素地址，+0也是首元素地址
//	//printf("%d\n", strlen(*arr));//err *arr是首元素，strlen非法访问内存
//	//printf("%d\n", strlen(arr[1]));//err 同上
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值，&arr+1跳向了\0后面
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}

//strlen(&arr)
//strlen返回值类型是size_t，参数类型是const char* str
//&arr - char (*) [7]
//实参传给strlen，会进行类型转换，会被转换为const char*
//所以数组指针传给strlen能接受，且会类型转换，这也是为什么把数组指针传给strlen，会算出和arr一样的结果的原因
//类型改变了，步长减小了
//就比如：
//char ch = 'w';
//int* pc = &ch;

int main()
{
	const char* p = "abcdef";//加上const提高健壮性，常量字符串不能被修改

	//printf("%d\n", sizeof(p));//4/8 p是指针，存放的是首元素的地址
	//printf("%d\n", sizeof(p + 1));//4/8 p+1为第二个元素的地址
	//printf("%d\n", sizeof(*p));//1 
	//printf("%d\n", sizeof(*p + 1));//4 p是首元素地址，*p就是首元素，*p+1是表达式
	////*p和整形1计算，需要发生整形提升，char整形提升为int，*p为字符a，ascii码值为97
	////97 + 1 = 98，类型为int，所以这里相当于计算的是整型变量的大小，*p+1的类型为int
	//printf("%d\n", sizeof(p[0]));//1 第一个元素
	////p[0] <--> *(p + 0) <--> *p
	////int arr[10];
	////int* p = arr; arr[0] <--> p[0] <--> *(p + 0) <--> *(arr + 0)
	//printf("%d\n", sizeof(&p));//4/8  &p取出的是p的地址，但是p的地址也是地址，大小为4/8个字节
	//printf("%d\n", sizeof(&p + 1));//4/8 &p + 1指向p的后方
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 &p[0] + 1计算的是b的地址

	//注意这里p并不是指针数组，而是指针变量，+1不是跳过一个数组，而是跳过一个p
	//&p为取出p的地址，p为一级指针，&p就是二级指针，类型为char**
	//+1跳过一个char*，可以类比于int* p = &a;p + 1跳过一个整形，&a + 1也应该跳过一个整形
	//那么&p + 1就是跳过一个char*


	printf("%d\n", strlen(p));//6 计算\0之前出现的字符个数
	printf("%d\n", strlen(p + 1));//5 从第二个元素的地址开始计算
	//printf("%d\n", strlen(*p));//err *p - a - '97'
	//printf("%d\n", strlen(p[0]));//err p[0] - a - '97'
	printf("%d\n", strlen(&p));//随机值 p的地址是一块无法知道的空间，不知道后面什么时候出现\0
	printf("%d\n", strlen(&p + 1));//随机值 &p + 1跳过一个p后的位置
	//&p和&p+1的随机值并没有关联，因为他们之间的距离为4个字节，在四个字节中，可能就存在着\0
	//所以它们并没有直接的联系
	//比如0x00121133 00就是\0
	printf("%d\n", strlen(&p[0] + 1));

	return 0;
}

//系统中有一块空间是留给操作系统的
//我们是不能访问的，如果访问，那么不就可以对这些数据进行篡改了吗
//