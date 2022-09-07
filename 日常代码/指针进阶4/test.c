#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//sizeof计算的是对象所占内存的大小 - 单位是字节

//数组名是什么？
//数组名通常是首元素地址
//但是有两个例外
//1.sizeof(数组名),计算的是整个数组的大小
//2.&数组名取出的是整个数组的地址
//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//4*4=16 a是数组名，计算的是数组的大小，16
//	printf("%d\n", sizeof(a + 0));//4/8 a+0是数组第一个元素的地址，是地址，大小就是4/8个字节
//	printf("%d\n", sizeof(*a));//4 a表示数组首元素的地址，*a表示数组的第一个元素，sizeof(*a)就是第一个元素的大小 - 4
//	printf("%d\n", sizeof(a + 1));//4/8 a表示数组首元素的地址，a+1就是数组第二个元素的地址，sizeof(a+1)就是第二个元素的地址的大小
//	printf("%d\n", sizeof(a[1]));//4 计算的是第二个元素的大小
//	printf("%d\n", sizeof(&a));//4/8 &a取出的是数组的地址，数组的地址也是地址，是地址大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));//16 &a取出的是数组的地址，为数组之怎，数组指针解引用拿到数组，实际上是a，计算的是数组的大小
//	printf("%d\n", sizeof(&a + 1));//4/8 &a是数组的地址，+1跳过整个数组，产生的是4后面位置的地址
//	printf("%d\n", sizeof(&a[0]));//4/8 取出的是数组第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 数组第二个元素的地址
//
//	return 0;
//}

//*&a 不把它放在sizeof内部，就是首元素地址

//字符数组
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };//a b c d e f
//	printf("%d\n", sizeof(arr));//6*1=6 ，sizeof计算的是数据所占内存空间的大小，不是找\0的位置，不要和strlen混淆了
//	printf("%d\n", sizeof(arr + 0));//4/8 arr+0是数组首元素的地址，是地址大小就为4/8个字节
//	printf("%d\n", sizeof(*arr));//1 *arr是首元素，首元素是一个字符，大小是一个字节
//	printf("%d\n", sizeof(arr[1]));//1 arr[1]是数组的第二个元素，大小是一个字节
//	printf("%d\n", sizeof(&arr));//4/8 &arr是数组的地址
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是从数组的地址开始向后跳过了整个数组，产生的一个地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1是数组第二个元素的地址
//	
//	return 0;
//}

//strlen的参数为指针，而只要把值传给指针，那么指针就认为它是一个地址，stelen从地址向后数一个字符串，直到\0停止
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值 arr数组中没有\0，所以strlen函数会继续往后找\0，统计\0之前出现的字符个数，随机值>6
//	printf("%d\n", strlen(arr + 0));//随机值 arr+0还是数组首元素的地址
//	//printf("%d\n", strlen(*arr));//err arr是首元素地址，*arr就是首元素，'a' - 97，strlen把97当做地址，从97向后访问，造成非法访问为野指针
//	//printf("%d\n", strlen(arr[1]));//err 把98传给strlen
//	printf("%d\n", strlen(&arr));//随机值 &arr取出的数组的地址，但是把它传给strlen，它会认为你是一个char*的指针，所以它还是一个随机值
//	printf("%d\n", strlen(&arr + 1));//随机值 &arr+1就是指向了数组最后一个元素后面的位置，从那个地方开始数，随机值比从arr开始的少6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值 比从arr开始的随机值-1
//
//	return 0;
//}
//&arr+1向后的这块空间严格意义上是不正确的，但是这块空间是可以被用户访问的，但是内存区域有一些空间是完全不给地址使用的
//同样的strlen向后访问\0也是这个道理，这是编译器的决定

//int main()
//{
//	char arr[] = "abcdef";//a b c d e f \0
//	printf("%d\n", sizeof(arr));//7 包含\0
//	printf("%d\n", sizeof(arr + 0));//4/8 arr+0是数组首元素的地址
//	printf("%d\n", sizeof(*arr));//4 *arr是数组的首元素
//	printf("%d\n", sizeof(arr[1]));//4 arr[1]是数组的第二个元素
//	printf("%d\n", sizeof(&arr));//4/8 &arr是数组的地址，但是数组的地址依然是地址，地址是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是\0后面的地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1是数组第二个元素的地址
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6 arr+0为数组首元素地址，从首元素地址开始计算
//	//printf("%d\n", strlen(*arr));//err *arr是数组的首元素，97，为野指针，非法访问内存
//	//printf("%d\n", strlen(arr[1]));//err 98，非法访问内存
//	printf("%d\n", strlen(&arr));//6 &arr是数组的地址，把地址交给strlen，会默认指针类型为char*，还是6
//	printf("%d\n", strlen(&arr + 1));//随机值 &arr+1是\0后面的地址，为随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5 从b的位置向后数
//
//	return 0;
//}

//总结一下：
//sizeof是一个操作符
//sizeof 计算的是对象所占内存的大小，单位是字节，返回值类型size_t
//不在乎内存中放的是什么，只在乎内存的大小

//strlen 库函数
//只能求字符串长度，从给定地址向后开始访问字符，统计\0之前出现的字符个数

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8 p是指针变量，计算的是指针变量的大小
//	printf("%d\n", sizeof(p + 1));//4/8 p+1是'b'的地址
//	printf("%d\n", sizeof(*p));//1 *p其实就是'a'
//	printf("%d\n", sizeof(p[0]));//1 p[0] --> *(p+0) 其实就是'a' 
//	printf("%d\n", sizeof(&p));//4/8 &p为指针变量p在内存中的地址，为二级指针
//	printf("%d\n", sizeof(&p + 1));//4/8 &p+1是跳过p之后的地址,跳过的是一个char*
//    //注意这里不要产生混淆，p是个指针变量类型为char*，取出p的地址+1，也就是跳过p之后的地址，,&p是个二级指针，不是数组指针，不是跳过一整个数组
//    //它们之间的概念是不一样的，&p并不和p等价，p中的是字符串的地址，但是p也有自己的地址，所以这里这不是跳过一个字节指向b
//	//而是跳过一个char*，指向p后面
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 &p[0]是a的地址，+1就是b的地址
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5 从b的位置开始向后数字符串
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值 从&p向后数字符，随机值
//	printf("%d\n", strlen(&p + 1));//随机值 &p+1指向p后面的位置，也是随机值
//	printf("%d\n", strlen(&p[0] + 1));//5 &p[0]+1是b的地址
//
//	return 0;
//}

//int main()
//{
//	二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 计算的是整个数组的大小，单位是字节，3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4 a[0][0]是二维数组第一行第一个元素
//	printf("%d\n", sizeof(a[0]));//16 a[0]是第一行的数组名，sizeof(a[0])就是第一行的数组名单独放在sizeof内部，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8 a[0]作为第一行的数组名并没有单独放在sizeof内部，也没有取地址，
//	a[0]就是数组首元素的地址，就是第一行第一个元素的地址，a[0]+1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 *(a[0] + 1))表示的是第一行第二个元素
//	printf("%d\n", sizeof(a + 1));//4/8 a没有单独放在sizeof内部，也没有&，a表示首元素地址，a是二维数组，
//	首元素地址是第一行的地址，+1就是第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16 *(a + 1) 对第二行的地址解引用，得到的就是第二行
//	*(a+1) --> a[1] 单独放在sizeof内部 sizeof(arr[1])计算的是第二行的大小
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 a[0]是第一行的数组名，&a[0]就是第一行的地址
//	&a[0]+1就是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 对第二行的地址解引用，得到的就是第二行
//	printf("%d\n", sizeof(*a));//16 a是首元素地址，就是第一行的地址,*a就是第一行
//	*a --> *(a+0) --> a[0] 是第一行的数组名，放在sizeof内部，就是计算的第一行的大小
//	printf("%d\n", sizeof(a[3]));//16 sizeof只要根据类型就能计算数据的大小，类型为int [4]，计算的是第四行的大小
//
//	int a = 10;
//	/*printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));*/
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%p\n", arr[0]);//二维数组首元素，单独使用为第一行第一个元素地址
//	printf("%p\n", arr[0] + 1);
//	printf("%p\n", &arr[0][0]);//第一行第一个元素地址
//	printf("%p\n", &arr[0][0]+1);
//	printf("%p\n", arr);//二维数组首元素地址
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr);//二维数组的地址
//	printf("%p\n", &arr + 1);
//}

//int main()
//{
//	const char* p = "abcdef";//加上const提高健壮性，常量字符串不能被修改
//	printf("%d\n", sizeof(p));//4/8 
//	printf("%d\n", sizeof(p + 1));//4/8
//	printf("%d\n", sizeof(*p));//1 
//	printf("%d\n", sizeof(p[0]));//1 
//	printf("%d\n", sizeof(&p));//4/8 
//	printf("%d\n", sizeof(&p + 1));//4/8 
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 
//	printf("%d\n", sizeof(*p + 1));//4
//
//	return 0;
//}

int main()
{
	//一维数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//4*4 = 16
	printf("%d\n", sizeof(a + 0));//4/8
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a + 1));//4/8 
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4/8 
	printf("%d\n", sizeof(*&a));//16 
	printf("%d\n", sizeof(&a + 1));//4/8 
	printf("%d\n", sizeof(&a[0]));//4/8 
	printf("%d\n", sizeof(&a[0] + 1));//4/8 
	printf("%d\n", sizeof(&*a));//4/8

	return 0;
}