#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//回调函数：通过函数指针调用的函数
//可以查看课件

//重新修改计算器

//qsort- C语言标准库提供的排序函数 - 快速排序的思想进行排序

//冒泡排序 - 两两相同的元素比较

//缺点 - 只能排序整形数组
//void bubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//趟数
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//交换次数
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//int cmp_int(const void* e1, const void* e2) //e1和e2为要比较两个元素的地址 
//{
//	return *(int*)e1 - *(int*)e2;//升序
//	//return *(int*)e2 - *(int*)e1;//降序
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////测试冒泡排序功能
//void test1()
//{
//	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, sz);
//	print(arr, sz);
//}
////测试qsort函数排序整形数据(可以看一下cpp)
//void test2()
//{
//	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print(arr, sz);
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
////按名字升序排序
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
//}
////按年龄升序排序
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void print_stu(struct stu* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d\n",  (p+i)->name, (p+i)->age);
//	}
//}
////测试qsort排序结构体数据
//void test3()
//{
//	struct stu s[] = { {"zhangsan",20},{"lisi",55},{"wangwu",40} };
//	//按照名字比较
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	print_stu(s, sz);
//}
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////qsort模拟冒泡排序
//void bubbleSort2(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//把char*的指针传给void*的指针完全没问题
//			{
//				//交换
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort2(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//void test5()
//{
//	struct stu s[] = { {"zhangsan",20},{"lisi",55},{"wangwu",40} };
//	//按照名字比较
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	bubbleSort2(s, sz, sizeof(s[0]), cmp_stu_by_age);//冒泡排序测试，可行
//	print_stu(s, sz);
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	return 0;
//}

//void qsort(void* base,//待排序数据的起始地址
//		   size_t num,//待排序数据的元素个数
//		   size_t size,//待排序数据的元素大小(单位是字节)
//		   int(*cmp)(const void*, const void*)//比较两个元素大小的函数指针
//		);
//解释：
//void* base：
//qsort可以排序任意类型的数据
//void*可以接收任意类型的指针变量
//需要使用时强制类型转化即可

//num
//qsort排序数据时需要知道数组元素个数

//size
//qsort知道起始地址和元素个数，但是不知道元素类型，不知道一个元素的大小
//只有知道了元素大小，才能通过偏移量找到下一个元素
//size很有必要

//int(*cmp)(const void*, const void*)
//当p1指向的元素大于p2指向的元素，返回>0的数字 
//当p1指向的元素等于p2指向的元素，返回=0的数字 
//当p1指向的元素小于p2指向的元素，返回<0的数字 


//既然是排序，那么得对数据之间做出比较
//不同类型数据之间比较方式不同
//两个整形使用关系运算符比较大小
//两个字符串通过strcmp比较大小
//两个结构体也得指定比较方式

//如果知道了函数待排序元素的类型，那么比较函数的指针类型是不是可以直接设计为待排序元素的类型？
//不建议
//类型不一样的时候qsort忍，毕竟我只是个库函数
//你非要给我传，我也没办法
//但是为了考虑它的感受，还是按照规定写



//cmp((char*)base + j * width, (char*)base + (j + 1) * width)
//base为起始地址，bese起初是void*，无法进行+-整数运算，所以需要强制类型转化
//j*width为字节数，而我们想要得到某处的地址，就只需要将base转化为char*
//那么这样base+2*width就是跳过8个字节，也就是跳过两个整形，拿到了地址



//swap((char*)base + j * width, (char*)base + (j + 1) * width, width)；
//数据在内存中存储按照补码，例如整形
//6和7的补码
//06 00 00 00
//07 00 00 00
//要将两个数字交换，那么便可以把每个字节的内容交换
//而元素类型决定了交换字节的个数，由于不知道元素类型，所以把width宽度也传上去


//qsort本身给e1和e2传参，他自己本身会把要比较的两个地址传给e1和e2


 //qsort 底层是快速排序的方法
//
//bubbleSort2是采用冒泡排序的思想
//借鉴了qsort的设计思想
//设计了bubbleSort2，来实现对任意类型数据的排序


#include<stdio.h>
struct stu
{
	char name[20];
	int age;
};
int cmp(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)//将width个字节
	{
		char* tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;//指针向后调整
		buf2++;
	}
}
void bubbleSort(void* base, int sz, int width, int(*p)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//升序
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void print(struct stu* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d ", (p + i)->name, (p + i)->age);
	}
	printf("\n");
}
int main()
{
	struct stu arr[] = { {"zhangsan",20},{"lisi",55},{"wangwu",40} };
	//按照名字比较
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, sz, sizeof(arr[0]), cmp);
	print(arr, sz);
	return 0;
}