#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}
int main()
{
	int (*pa[2])(int, int) = { Add , Sub};
	printf("%p\n", pa[0]);
	printf("%p\n", Add);
	printf("%p\n", &Add);

	return 0;
}

// ����ָ�룬ָ�����һ������
// ����ָ�����飬ÿ��Ԫ��Ϊ�����ĵ�ַ
// pa��һ������ָ�����飬����Ԫ��ΪAdd�ĵ�ַ
// ��ôpa[0]���Ǻ���Add�ĵ�ַ
// &AddҲ�Ǻ����ĵ�ַ
// AddҲ�Ǻ����ĵ�ַ
// &ֻ��Ϊ�������Ǹ������

// ���Ǿ��������ҷ���һ�����⣺
// Ϊʲôpa[0]��ֵ��Add/&Add��ֵ��һ����
// ���ǹ���ת����
// ��Ϊ�����������õ�ʱ����ʵ����ֱ���õĺ����ĵ�ַ
// ���м���ʵ��������һЩת��
// Ŀǰ�����

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	//���Դ�Ŷ��[������ͬ����������ͬ]�ĺ����ĵ�ַ
//	int (*pfArr[2])(int, int) = { Add,Sub };//�����������ĵ�ַ���뺯��ָ������
//	int ret1 = pfArr[0](2, 3);//pfArr[0]�±���ʣ��õ�Add�����ĵ�ַ�������������
//	int ret2 = pfArr[1](2, 3);//����Sub����
//	int ret3 = (*(pfArr + 0))(2, 3);//pfArrΪ��Ԫ�ص�ַ����Ԫ�ص�ַ+ƫ����+�����þ��õ��������е�Ԫ��
//	int ret4 = (*pfArr)(2, 3);//Ҳ����
//	printf("%d\n%d \nd\n", ret1, ret2, ret4);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* arr[2] = { &a, &b };
//
//	printf("%p\n", &a);
//	printf("%p\n", arr[0]);
//}

