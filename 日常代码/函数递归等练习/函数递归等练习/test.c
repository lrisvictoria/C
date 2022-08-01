#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
//void reverse_string(char *str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//void reverse_string(char arr[])
//{
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}
//递归
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);//把最后一位放到首元素位置
//	*(str + len - 1) = '\0';//让str+1向后的字符看作字符串
//	if (my_strlen(str + 1) >= 2)//两个才能继续递归，否则无需交换
//	//if (len - 2 >= 2)
//		reverse_string(str + 1);//向后一个元素继续递归
//	*(str + len - 1) = tmp;//把临时变量中的首元素放到末尾
//}
//int main()
//{
//	char arr[] = "abcdefg"; 
//	reverse_string(arr);
//	printf("%s", arr);
//}
//int num_sum(unsigned int n)
//{
//	if (n > 9)
//		return n % 10 + num_sum(n / 10);
//	else
//		return n;
//}
//int main()
//{ 
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int ret = num_sum(n);
//	printf("%d\n", ret);
//} 
double my_pow(int a, int b)
{
	if (b > 0)
		return a * my_pow(a, b - 1);
	else if (b == 0)
		return 1;
	else
		return 1.0 / my_pow(a, -b);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = my_pow(n, k);
	printf("%.2lf\n", ret);
}