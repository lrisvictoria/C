#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;//pa��ָ���������ŵ���a�ĵ�ַ
//	int* pb = &b;//pb��ָ���������ŵ���b�ĵ�ַ
//	int** ppa = &pa;//ppa�Ƕ���ָ�룬��ŵ���ָ�����pa�ĵ�ַ
//	*ppa = &b;//������ppa���ҵ�����pa����pa��ֵ��a�ĵ�ַ��Ϊb�ĵ�ַ
//	ppa = &pb;//��ppa��ֵ��pa�ĵ�ַ��ֵΪpb�ĵ�ַ
//	//pa�ĵ�ַ�Ǳ�����ָ�ɵ�ֵ�����ܱ��޸ģ�Ҳ�޷��޸�
//	//���޸�ppa�����޸ĵ�Ϊppa�е�ֵ��pa�ĵ�ַ����ı�
//	//���޸�pa�����޸ĵ���ָ�����pa�е�ֵ��pa�ĵ�ַҲ���ᷢ���ı�
//	//����paҲ���޷����޸�
//
//	int c = **ppa;//*ppa�ҵ�paҲ����&a��*�����õõ�a
//	//int c = *(*ppa)Ҳ�У��Ƚ��������
//	printf("%d  %d", **ppa, c);
//	//����ָ�������ŵ���һ��ָ��ĵ�ַ������
//	return 0;
//}



//int main()
//{
//	int arr[2][3] = { {1,2,3},{2,3,4} };
//	int* p = arr;
//	//��ά�������Ԫ�ص�ַ��arr[0][0]�ĵ�ַ
//}
//ע����ά������������Ͷ���ָ���������¡�
//struct S
//{
//	char name[20];
//	int arr[5];
//};
//int main()
//{
//	struct S ss = { "anduin",{2,4,6,8,10} };
//	printf("%s", ss.name);
//	int i = 0;
//	ss.arr = { 1,2,3,4,5 };
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ss.arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		ss.arr[i] = i;
//		printf("%d ", ss.arr[i]);
//	}
//}


//struct point
//{
//	int x;
//	int y;
//};
//struct S
//{
//	char c;
//	struct point p;
//	double d;
//	char str[20];
//};
//int main()
//{
//	struct S ss = { .d = 3.14,.c = 'x' ,.p.x = 3};
//	//����ȫ��ʼ��������Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//ֻ��ʼ��ĳЩ��Ա�������ʼ��ʱ��ʱ�������ַ���
//	printf("%c %d %d %lf %s\n", ss.c, ss.p.x, ss.p.y, ss.d, ss.str);
//}

//struct Point
//{
//	int x;
//	int y;
//}p1 = { 1,2 };
//struct S
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct Point p = { 100,200 };
//	struct S ss = { 'x',{10,11},3.14,"anduin" };//��ȫ��ʼ��
//	struct S sss = { .sp.x = 100, .c = 'w', .d = 3.14 };
//	//����ȫ��ʼ��������Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//ֻ��ʼ��ĳЩ��Ա�������ʼ��ʱ��ʱ�������ַ���
//	printf("%c %d %d %lf %s\n", ss.c, ss.sp.x, ss.sp.y, ss.d, ss.arr);
//	printf("%c %d %d %lf %s\n", sss.c, sss.sp.x, sss.sp.y, sss.d, sss.arr);
//	
//	*(ss.arr) = "liuxuan";//Ҳ�ǲ��е�
//	//����������Ԫ�ص�ַ����arr��char*���͵ģ�������һ��ֻ�ܷ���һ���ֽڵĿռ䣬�Ų��£�
//	//s.arr = "liuxuan";//errpr
//	//arr��������������Ԫ�ص�ַ������Ȼ����s.arrͨ����Ԫ�ص�ַ���ʵ��������
//	//���ǵ�ַ��һ�����������ܱ��޸ģ�����һ����Ŷ����ǿռ�
//	//���ԷŽ�ȥ�ǲ��еģ��ҳ������ܱ��޸�
//	//Ӧ�ý�Ҫ�޸ĵ����ݷŵ���Ӧ����������ȥ����strcpy�⺯��
//	strcpy(ss.arr, "liuxuan");
//	return 0;
//}


//�ṹ�崫ֵʱ��ʵ�νṹ��ĵ�ַ���ܺ��βνṹ��ĵ�ַ��ͬ��
//���������ܲ��ش�����ʱ�ռ䣬�Լ��������Ż�������ʹ�õĿռ���Ȼ������ʵ�εĿռ�
//���Խṹ�崫ַΪ�˱�����Щ���߰�����Ż������ǻ���ѡ�񴫵�ַ