 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
//strcmp(str1,str2)
//<0 str1<str2
//0 ==
//>0 str1>str2
//�ַ�������
//int main()
//{
//	char str[5][60];
//	char t[60];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%s", &str[i]);
//	}
//	//ʹ��ð������
//	for (int i = 0; i < 4; i++)//����Ԫ�أ�����,n-1
//	{
//		for (int j = 0; j < 4 - i; j++)//��������Ԫ�رȽϴ���
//		{
//			if (strcmp(str[j], str[j + 1]) > 0)
//			{
//				strcpy(t, str[j]);
//				strcpy(str[j], str[j + 1]);
//				strcpy(str[j + 1], t);
//			}
//			
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	return 0;
//}

//int main()
//{
//    printf("D:\Anduin_code\anduins-code-warehouse");
//}
//void ReverseString(char* p,int size)
//{
//	int start = 0;
//	int end = size - 1;
//	char tmp = 0;
//	if (size == 0 || size == 1)
//	{
//		p = p;
//	}
//	while (start < end)
//	{
//		char tmp = p[start];
//		p[start] = p[end];
//		p[end] = tmp;
//		start++;
//		end--;
//	}
//	printf("%s", p);
//}
//
//int main()
//{
//	char str[20] = { 0 };
//	int len = 0;
//	printf("������һ���ַ���:>");
//	scanf("%s", &str);
//	len = strlen(str);
//	ReverseString(str, len);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("D:\Anduin_code\anduins-code-warehouse"));
//	return 0;
//}
//int Add(int x, int y)
//{
//    return (x + y);
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    scanf("%d%d", &num1, &num2);
//    sum = Add(num1, num2);
//    printf("%d\n", sum);
//}

//int main()
//{
//    int arr[10] = { 0 };
//    //0~9
//    //����10��ֵ������
//    int i = 0;
//    while (i < 10)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    //��������10��ֵ
//    i = 0;
//    while (i < 10)
//    {
//        printf("%d ", arr[i]);
//        i++;
//    }
//}

//#include<stdio.h>
//int global = 2019;//ȫ�ֱ���
//int main()
//{
//    int local = 2020;//�ֲ�����
//    printf("global = %d\n", global);//��ӡ�����ʲô��2020
//    //���ֲ�������ȫ�ֱ���ͬ����ʱ�򣬾ֲ���������ʹ�á�
//    return 0;
//}
//#include<stdio.h>
//int num1 = 2019;//ȫ�ֱ���
//int main()
//{
//    int num1 = 2020;//�ֲ�����
//    printf("num1 = %d\n", num1);//��ӡ�����ʲô��
//    return 0;
//}

//int main()
//{
//    char arr1[] = "abcd";//�˴����Խ���ڴ���˵��
//    char arr2[] = { 'a', 'b', 'c', 'd' };
//    //����ڴ���ϸ��
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    return 0;
//}

//int main()
//{
//    char arr1[] = "abcd";
//    char arr2[] = { 'a','b','c','d' };
//    printf("%d\n", strlen(arr1));
//    printf("%d\n", strlen(arr2));//���Ի�ͼ��ϸ����
//}

//int main()
//{
//    //printf("%s\n", "(are you ok??)");//���ϱ������ϻ��ӡ(are you ok]
//    ////����ĸ��:??) ->]
//    //printf("%s\n", "(are you ok\?\?)");
//    //printf("%c\n", '\'');
//    //printf("%c\n", "\"");
//    //printf("\a\a\a");
//    char a[] = "abc";
//    printf("%c%c\b%c", a[0], a[1], a[2]);
//    //printf("1\t23");
//    //printf("anudin\n");
//
//    //printf("123\r");
//   // printf("hello");
//    //printf("%c\n", '\130');
//    //printf("%c\n", '\x30');//3*16+0*1
//}

int main()
{
    int line = 0;
    printf("insist codeing >\n");
    while (line < 20000)
    {
        printf("д����\n");
        line++;
    }
    if (line == 20000)
    {
        printf("��offer\n");
    }
}