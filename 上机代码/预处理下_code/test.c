#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//// 1
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//// 2
//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// �����ķ�ʽ
//	int m1 = Max(a, b);
//	printf("%d\n", m1);
//
//	int m2 = MAX(a, b);
//	printf("%d\n", m2);
//	
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));
//	// malloc�����ķ�������
//	return 0;
//}

//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = MALLOC(10, int);
//	
//	return 0;
//}

//#include <stdio.h>
//
//#define M 100
//
//int main()
//{
//	// ��ʹ��
//	printf("%d\n", M);
//#undef M // ȡ����
//	printf("%d\n", M);
//	return 0;
//}




//int main()
//{
//#define M 100
//	printf("%d\n", M);
//#define M 500
//	printf("%d\n", M);
//	return 0;
//}

//#define MAX // 
//// Ԥ����׶����ȴ���ע�ͣ�ע�ʹ���󣬽�������Կո����
//// ������ɺ�Ϊ`define MAX `����ʽ
//// MAX�滻��Ϊ�ո�
//// ʹ��printf��ӡû���κν��
//// ���Ǻ����滻�ɿո�ģ����Ǳ��������ܻ����������ÿո���ʧ
//int main()
//{
//	MAX printf("1232");
//	
//	return 0;
//}

//#include <stdio.h>
////#define __DEBUG__
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__ // �������������������������
//			printf("%d\n", arr[i]);
//#endif // __DEBUG__
//	}
//	return 0;
//}

//#define DEBUG
//
//int main()
//{
//#ifdef DEBUG
//	printf("hello\n");
//#endif
//}

//1.
//#if �������ʽ
////...
//#endif
//
////�������ʽ��Ԥ��������ֵ��
//�磺
//#define __DEBUG__ 1
//#if __DEBUG__
////..
//#endif
//
//2.�����֧����������
//#if �������ʽ
////...
//#elif �������ʽ
////...
//#else
////...
//#endif
//
//3.�ж��Ƿ񱻶���
//#if defined(symbol)
//#ifdef symbol
//#if !defined(symbol)
//#ifndef symbol
//
//4.Ƕ��ָ��
//#if defined(OS_UNIX) // ���if
//#ifdef OPTION1 // С��if 1
//unix_version_option1();
//#endif
//#ifdef OPTION2 // С��if 2
//unix_version_option2();
//#endif
//#elif defined(OS_MSDOS) // ���else
//#ifdef OPTION2 // С��if 3
//msdos_version_option2();
//#endif

// 1
//int main()
//{
//#if 1 // Ϊ��
//    printf("hehe\n");
//#endif 
//
//    return 0;
//}
//------------
//int main()
//{
//    printf("hehe\n");
//    reuturn 0;
//}
//============ =
//// 2
//int main()
//{
//#if 2 > 3 // Ϊ��
//    printf("hehe\n");
//#endif 
//
//    return 0;
//}
//------------
//int main()
//{
//
//    return 0;
//}
//============
//// 3
//int main()
//{
//#if 1 > 2 // Ϊ��
//    printf("hehe\n");
//#elif 2 > 3 // Ϊ��
//    printf("haha\n");
//#else // Ϊ��
//    printf("heihei\n");
//#endif
//
//    return 0;
//}
//// �Ͷ��֧������ƣ�ֻҪһ�����Ϊ��
//// ������䲻����ִ��
//-------------- -
//int main()
//{
//    printf("heihei\n");
//    return 0;
//}
//====================
//// 4
//int main()
//{
//#if defined(MAX) // δ���塣Ϊ��
//    printf("hehe\n");
//#endif
//}
//------------------ -
//int main()
//{
//    return 0;
//}
//====================== =
//// 5
//#define MAX 0 // #define MAX
//int main()
//{
//    // #define(��) �̶���ʽ
//#if defined(MAX) // �����ˡ�Ϊ�棬����#define��ֵ
//    printf("hehe\n");
//#endif
//    return 0;
//}
//---------------------- -
//int main()
//{
//    printf("hehe\n");
//    return 0;
//}
//================== =
//// 6
//// #define �ķ�������
//// ����ָ��ɶԳ��֣����ܴ�������
//int main()
//{
//#if defined(MAX) // Ϊ��
//    printf("haha\n");
//#endif
//
//#if !defined(MAX) // δ���壬Ϊ��
//    printf("hehe\n");
//#endif
//    return 0;
//}
//----------------------
//int main()
//{
//    printf("hehe\n");
//    return 0;
//}
//======================== =
//// 7
//// #if define(MAX)������һ��д��
//int main()
//{
//#ifdef MAX
//    printf("hehe\n");
//#endif
//    return 0;
//}
//---------------------- -
//int main()
//{
//    return 0;
//}
//====================== =
//// 8
//// #if !define(MAX)������һ��д��
//int main()
//{
//#ifndef MAX // δ���壬Ϊ��
//    printf("hehe\n");
//#endif
//    return 0;
//}
//-------------------------- -
//int main()
//{
//    printf("hehe\n");
//    return 0;
//}