#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
//
//enum Color
//{
//	RED = 3,
//	GREEN = 3,
//	BLUE = 10
//};
//
//int main()
//{
//	enum Color color = 5;
//	
//	return 0;
//}

#define GREEN 7
#define BLUE 10

//#define ����ı�ʶ����û�����͵ģ�������һ������
//�Ժ���ַ�����ע���г��ֵ������ʶ�����ᱻ�滻Ϊ�궨�������

//����Ԥ����׶ξͻ�����滻����������ö�ٶ����ö�ٳ���һ����������

//int main()
//{
//	enum Color color = RED;
//	return 0;
//}

//enum
//{
//	RED
//};
//
//enum Color
//{
//	RED
//};

//#define RED 5
//#define RED 7

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	return 0;
//}

//union Un
//{
//    char c;
//    int i;
//    double d;
//};
//int main()
//{
//    union Un un;//���ϱ���
//    /*printf("%d\n", sizeof(union Un));
//    printf("%d\n", sizeof(un));*/
//    printf("%p\n", &un);
//    printf("%p\n", &(un.c));
//    printf("%p\n", &(un.i));
//    printf("%p\n", &(un.d));
//    return 0;
//}

//union Un
//{
//    char arr[5];//5
//    int i;//4
//};
//int main()
//{
//    printf("%d\n", sizeof(union Un));
//    return 0;
//}

//#define RED 5
//#define GREEN 7
//#define BLUE 10
//--------------
//#define���峣����Ҫ���
//--------------
//enum Color
//{
//    RED = 5,
//    GREEN = 7,
//    BLUE = 10
//};
//------------ -
//ö�ٿ��Զ���������

//int check_sys()
//{
//    int num = 1;
//    return *(char*)&num;
//}
//int main()
//{
//    int ret = check_sys();
//    if (ret == 1)
//    {
//        printf("С��\n");
//    }
//    else
//    {
//        printf("���\n");
//    }
//    return 0;
//}

int check_sys()
{
    union//����(ֻ�ں�����ʹ��һ��)
    {
        char c;
        int i;
    }
    u.i = 1;
    return u.c;
}
int main()
{
    int ret = check_sys();
    if (ret == 1)
    {
        printf("С��\n");
    }
    else
    {
        printf("���\n");
    }
    return 0;
}