 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

//int main()
//{
//	const int a;
//	a = 20;
//
//	return 0;
//}
///指针可以提高cpu内存寻址的效率
//指针就是地址
//地址是数据吗？
//是
//那么数据可以被保存吗？
//可以
//四个字节一保存，被叫做指针变量

//int main()
//{
//	int a = 11;
//	int* p = &a;
//	printf("%p\n", a);
//	return 0;
//}
//*p=20;左值用了a的空间把20放到空间中
//int b=*p;右值把a的内容（数据）放到b中
//int main()
//{
//	int a = 10;
//
//	const int* p = &a;//p指向的变量不可以直接被修改
//	
//	*p = 100;
//	p = 100;
//	//int const * p = &a;//p指向的变量不可以直接被修改
//
//	//int* const p = &a;//p的内容不可直接被修改，p指针变量的指向不能改
//	
//	/* const int* const p = &a;
//	*p = 100;  
//	p = 100;*/
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*const int* p = &a;
//	int* q = p;*/
//
//	int* p = &a;
//	const int* q = p;
//	//小知识：如果把一个类型限定不怎么严格的变量赋给另一个类型限定很严格的变量，编译器不报错。
//	//把一个类型限定很严格的变量赋给一个类型限定不怎么严格的变量，编译器就会报错。
//	//例如：
//	//指针变量q里面存放的是a的地址，*p是被const修饰的,所以p指向的变量是不能被修改的
//	//但是此时p里面存放了a的地址
//	//那么接下来就可以*q=20;来改变a的值
//	
//}
//void show(const int* _p)//预防性编程，使代码变得更加严谨，良好的编码风格
//{
//	printf("show_p : %p\n", &_p);
//	//printf("value:%d\n", _p);
//	//两个地址是不同的，说明函数内的_p是临时变量
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("main_p : %p\n", &p);
//	show(p);//这里的show函数有没有形成临时变量？？
//	//C中，任何函数传参都一定要兴城临时变量，包括指针变量
//}

//const 修饰函数的返回值
//const int* GetVal()
//{
//	static int a = 10;
//	return &a;
//}
//int main()
//{
//	const int* p = GetVal();
//	//*p = 100;//不让指针通过返回值得方案去修改函数中的变量
//}

const int* GetVal()
{
	static int a = 10;
	return &a;
}
int main()
{
	const int* p = GetVal();
	//*p = 100;//不让指针通过返回值得方案去修改函数中的变量
}