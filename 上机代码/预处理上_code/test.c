#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
//
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __FILE__);// ���б����Դ�ļ�
//	printf("%d\n", __LINE__);// �к�
//	printf("%s\n", __DATE__);// ����
//	printf("%s\n", __TIME__);// ʱ��
//
//	printf("%d\n", __STDC__);
//	return 0;
//}

//#define MAX 100
//#define STR "anduin"
//
//// ��ѭ�� 
//#define do_forever for(;;)
//int main()
//{
//	// ֪��������ʶ�������ͣ�ֱ�Ӵ�ӡ
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//
//	do_forever;
//	return 0;
//}

//#define MAX 100;
//
//int main()
//{
//	printf("%d\n", MAX);
//	// ʵ����Ϊ��
//	// printf("%d\n", 100;);
//	// ���Դ���
//	return 0;
//}

//#define MAX 100);
//
//int main()
//{
//	printf("%d\n", MAX
//	return 0;
//}

//#define MAX 100;
//
//int main()
//{
//	int m = 0;
//	if (3 > 5)
//	{
//		m = MAX;
//	}
//	else
//		m = -1;
//	
//	printf("%d\n", m);
//
//	return 0;
//}

// ������ʾ
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = Max(a, b);
//
//	printf("%d\n", m);
//	return 0;
//}

// ���ʾ
//#define MAX(x, y) (x > y ? x : y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = MAX(a, b);
//
//	printf("%d\n", m);
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	//printf("%d\n", SQUARE(5)); 
//	printf("%d\n", SQUARE(5 + 1));
//
//	return 0;
//}

//#define SQUARE(X) ((X) * (X))
//
//int main()
//{
//    printf("%d\n", SQUARE(5 + 1));
//
//    return 0;
//}

#define SQUARE(X) ((X) * (X))

//#define DOUBLE(X) (X) + (X)
//int main()
//{
//    printf("%d\n", DOUBLE(6));// û����
//    printf("%d\n", DOUBLE(6 + 1));// Ҳû����
//    printf("%d\n", 10 * DOUBLE(6));// ?
//    // 10 * (6) + (6)
//    // �ֳ��������ȼ�����
//    // ���Ի��Ǽ������ţ������������
//
//    return 0;
//}

//#define M 10
//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//	int m = MAX(2 + 3, M);
//
//	return 0;
//}


//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//	// ǰ����һ���ַ�����������һ���ַ������ϳ�һ���ַ���
//
//	return 0;
//}

//#define PRINT(val, format) printf("the value of "#val" is "format"\n", val)
//
//int main()
//{
//	int a = 10;
//	PRINT(a, "%d");
//
//	int b = 20;
//	PRINT(b, "%d");
//
//	float f = 5.5f;
//	PRINT(f, "%f");
//
//	return 0;
//}

//#define CAT(A, B) A##B
//int main()
//{
//    int Class107 = 100;
//
//    printf("%d\n", CAT(Class, 107));
//    // ��ͨ��##����������ƴ�ӳ�һ������
//    // �����Class107�����������ʽ������
//    // �Ϳ��Ը��ݸ�ʽ���ַ�����ӡ���ñ����Ľ��
//
//    return 0;
//}

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main()
{
	int a = 3;
	int b = 4;
	int m = MAX(++a, ++b);
	// int m = ((++a) > (++b) ? (++a) : (++b));
	// ����������㣬++a --> a = 4, ++b --> 5
	// 4 > 5 Ϊ�٣����Ϊ ++b ��++a�����㣬++b --> b = 6
	
	printf("m = %d a = %d b = %d\n", m, a, b);
	// m = 6 , a = 4 , b = 6
	
	return 0;
}