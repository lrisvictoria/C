 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &p);
//}
//struct Book
//{
//    char bookname[30];
//    float price;
//    char writer[20];
//};
//int main()
//{
//    struct Book s = { "chushiclanguage",1.01,"anduin" };//������������ʼ��
//    printf("%s %.2f %s\n", s.bookname, s.price, s.writer);
//}

//struct Book
//{
//    char bookname[30];
//    float price;
//    char writer[20];
//};
//void Print(struct Book* ps)
//{
//    printf("%s %.2f %s\n", ps->bookname, ps->price, ps->writer);
//}
//int main()
//{
//    struct Book s = { "chushiclanguage",1.01,"anduin" };//������������ʼ��
//    Print(&s);
//}
//struct Book
//{
//    char bookname[30];
//    float price;
//    char writer[20];
//};
//int main()
//{
//    struct Book s;
//    scanf("%s %f %s", s.bookname, &(s.price), s.writer);
//    printf("%s %.2f %s\n", s.bookname, s.price, s.writer);
//}
//#include<stdio.h>
////#define �����ʶ������
//#define MAX 1000
//#define STR "abcdef"
//int main()
//{
//    printf("%d\n", MAX);
//    int a = MAX;
//    int arr[MAX] = { 0 };
//    printf("%d\n", a);
//    printf("%s\n", STR);
//    return 0;
//}

//int main()
//{
//    int a = 10;//4���ֽ� - �ҵ��ڴ���ʾһ�� - &a - ����
//    //�ۿ��ĸ��ֽڵ�ַ - ��a�����ú�ռ���ĸ��ֽ�
//    //ÿ���ֽڶ���һ����ַ - &a�õ����ǵ�һ���ֽڵĵ�ַ - ͼ��Ϊ֤
//    //
//    int* pa = &a;//pa�Ǵ���������ŵ�ַ�ģ�pa��ָ�����
//    //int *������һ�����ͣ���������ָ�����ͣ�*˵��pa��ָ�����
//    //int ˵����paָ��Ķ�����int���� - ��ͼ���
//    //char *���;���
//}

int main()
{
    char ch = 'a';
    char* pc = &ch;
    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(short*));
    printf("%d\n", sizeof(int*));
    printf("%d\n", sizeof(long*));
    printf("%d\n", sizeof(long long*));
    printf("%d\n", sizeof(float*));
    printf("%d\n", sizeof(double*));

    return 0;
}