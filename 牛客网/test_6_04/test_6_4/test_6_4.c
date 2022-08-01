 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int Max_Num = Max(num1, num2);
	printf("Max_Num = %d\n", Max_Num);
	return 0;
}

//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	
//	if (num >= 140)
//	{
//		printf("Genius\n");
//	}
//	return 0;
//}


//int main()
//{
//    int Age = 18;
//    char Name[] = "Jack";
//    char Gender[] = "man";
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("%s    %d    %s\n", Name, Age, Gender);
//    return 0;
//}