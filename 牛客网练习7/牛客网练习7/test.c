#define _CRT_SECURE_NO_WARNINGS 1 
//BC173 Å£Å£ÄæĞòÊä³ö
#include<stdio.h>
//void reverse_print(int n)
//{
//    if (n / 10 == 0)
//    {
//        printf("%d", n);
//    }
//    else
//    {
//        printf("%d", n % 10);
//        reverse_print(n / 10);
//    }
//}
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    reverse_print(i);
//    return 0;
//}
void reverse_print(int n)
{
	while (n > 0)
	{
		printf("%d", n % 10);
		n /= 10;
	}
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	reverse_print(i);
	return 0;
}