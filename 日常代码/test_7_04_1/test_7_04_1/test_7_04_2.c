#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = 0;
//	while (max = a % b)
//	{
//		a = b;
//		b = max;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[12] = "anduin";
//	//char str2[20] = { 0 };
//	//把arr1中的abcdef拷贝到arr2中
//	strcpy(str2,str1 );
//	printf("%s\n", str2);
//	return 0;
//}
//memset
//int main()
//{
//	char arr[] = "hello anduin";
//	
//	memset(arr+1, 'x', 3);//内存设置
//	//1.设置内存的时候是以字节为单位的
//	//2.每个字节的内容都是一样的
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//}
//#include<stdio.h>
//void swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swap(a, b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//void swap(int *x, int *y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}
//#include<math.h>
//int is_prime(int x)
//{
//	/*for (int j = 2; j < sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	return 1;*/
//	int i = 2;
//	while (i < x)
//	{
//		if (x % i == 0)
//			return 0;
//		i++;
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = is_prime(a);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}
//#include<stdio.h>
//int is_loop(int n)
//{
//	return (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0));
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_loop(year);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}
//int search(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int ret = search(arr, sz, k);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是%d\n",ret);
//}
//void func(int *p)
//{
//	*p++;
//}
//int main()
//{
//	int n = 0;
//	func(&n);
//	printf("%d\n", n); 
//	func(&n);
//	printf("%d\n", n);
//	func(&n);
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	get_max(a, b);
//	printf("%d\n", x);
//	return 0;
//}
//int main()
//{
//	static int b = 20;
//	{
//		static int b;
//		printf("%d", b);
//	}
//}