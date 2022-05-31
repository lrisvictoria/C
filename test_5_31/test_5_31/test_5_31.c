 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	const int a = 10;
//	a = 20;
//	return 0;
//}
//int main()
//{
//    const int a = 10;
//    int* p = (int*)&a;
//    printf("before : %d\n", a);
//    *p = 20;
//    printf("after : %d\n", a);
//    return 0;
//}
//int main()
//{
//	const int n = 10;
//	int arr[n];
//
//	return 0;
//}
//int main()
//{
//    const int arr[] = { 1, 2, 3, 4, 5 };
//    arr[0] = 0;
//    arr[1] = 0;
//    arr[3] = 0;
//    arr[4] = 0;
//
//
//}


#include<stdio.h>
const int* GetVal()
{
    static int a = 10;
    return &a;
}
int main()
{
    int* p = GetVal();//出现告警不同的const修饰符
    //const int *p = GetVal();
}
