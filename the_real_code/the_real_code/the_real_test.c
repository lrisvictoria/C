 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//char* show()
//{
//	char str[] = "hello anduin";
//	
//	return str;
//}
//int main()
//{
//	char* s = show();
//	printf("%s\n", s);
//
//	return 0;
//}

//计算机中，释放空间是否真的要将我们的数据全部清0/1 ？
//计算机中清空数据，只要设置该数据无效即可
//
//调用函数，形成栈帧;函数返回，释放栈帧
//为什么临时变量具有临时性
//栈帧结构在函数调用完毕，需要被释放

//int GetData()
//{
//	int x = 0x11223344;
//	printf("run get data!\n");
//
//	return x;
//}
//int main()
//{
//	int y = GetData();
//	printf("ret : %x\n", y);
//
//	return 0;
//}
//函数的返回值，通过寄存器的方式，返回给函数调用方！
//eax
//
//int main()
//{
//	const int arr[] = { 1,2,3,4,5 };
//	arr[0] = 0;
//	arr[1] = 0;
//	arr[2] = 0;
//	arr[3] = 0;
//
//}

int main()
{
	int* p;
	//指针就是地址
	//指针变量是一个变量，用来保存地址
	//地址不需要开辟内存空间

	return 0;
}

//x的空间，变量的属性，左值
//x的内容，数据的属性，右值
//任何一个变量名，在不同的应用场景中，代表着不同的含义