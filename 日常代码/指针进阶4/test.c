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
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//随机值 arr数组中没有\0，所以strlen函数会继续往后找\0，统计\0之前出现的字符个数，随机值>6
	printf("%d\n", strlen(arr + 0));//随机值 arr+0还是数组首元素的地址
	printf("%d\n", strlen(*arr));//err arr是首元素地址，*arr就是首元素，'a' - 97，strlen把97当做地址，从97向后访问，造成非法访问为野指针
	printf("%d\n", strlen(arr[1]));//err 把98传给strlen
	printf("%d\n", strlen(&arr));//随机值 &arr取出的数组的地址，但是把它传给strlen，它会认为你是一个char*的指针，所以它还是一个随机值
	printf("%d\n", strlen(&arr + 1));//随机值 &arr+1就是指向了数组最后一个元素后面的位置，从那个地方开始数，随机值比从arr开始的少6
	printf("%d\n", strlen(&arr[0] + 1));//随机值 比从arr开始的随机值-1

	return 0;
}
//&arr+1向后的这块空间严格意义上是不正确的，但是这块空间是可以被用户访问的，但是内存区域有一些空间是完全不给地址使用的
//同样的strlen向后访问\0也是这个道理，这是编译器的决定