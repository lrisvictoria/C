#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ص�������ͨ������ָ����õĺ���
//���Բ鿴�μ�

//�����޸ļ�����

//qsort- C���Ա�׼���ṩ�������� - ���������˼���������

//ð������ - ������ͬ��Ԫ�رȽ�

//ȱ�� - ֻ��������������
//void bubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//����
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//��������
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//int cmp_int(const void* e1, const void* e2) //e1��e2ΪҪ�Ƚ�����Ԫ�صĵ�ַ 
//{
//	return *(int*)e1 - *(int*)e2;//����
//	//return *(int*)e2 - *(int*)e1;//����
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////����ð��������
//void test1()
//{
//	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, sz);
//	print(arr, sz);
//}
////����qsort����������������(���Կ�һ��cpp)
//void test2()
//{
//	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print(arr, sz);
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
////��������������
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
//}
////��������������
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void print_stu(struct stu* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d\n",  (p+i)->name, (p+i)->age);
//	}
//}
////����qsort����ṹ������
//void test3()
//{
//	struct stu s[] = { {"zhangsan",20},{"lisi",55},{"wangwu",40} };
//	//�������ֱȽ�
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	print_stu(s, sz);
//}
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////qsortģ��ð������
//void bubbleSort2(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//��char*��ָ�봫��void*��ָ����ȫû����
//			{
//				//����
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort2(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//void test5()
//{
//	struct stu s[] = { {"zhangsan",20},{"lisi",55},{"wangwu",40} };
//	//�������ֱȽ�
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	bubbleSort2(s, sz, sizeof(s[0]), cmp_stu_by_age);//ð��������ԣ�����
//	print_stu(s, sz);
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	return 0;
//}

//void qsort(void* base,//���������ݵ���ʼ��ַ
//		   size_t num,//���������ݵ�Ԫ�ظ���
//		   size_t size,//���������ݵ�Ԫ�ش�С(��λ���ֽ�)
//		   int(*cmp)(const void*, const void*)//�Ƚ�����Ԫ�ش�С�ĺ���ָ��
//		);
//���ͣ�
//void* base��
//qsort���������������͵�����
//void*���Խ����������͵�ָ�����
//��Ҫʹ��ʱǿ������ת������

//num
//qsort��������ʱ��Ҫ֪������Ԫ�ظ���

//size
//qsort֪����ʼ��ַ��Ԫ�ظ��������ǲ�֪��Ԫ�����ͣ���֪��һ��Ԫ�صĴ�С
//ֻ��֪����Ԫ�ش�С������ͨ��ƫ�����ҵ���һ��Ԫ��
//size���б�Ҫ

//int(*cmp)(const void*, const void*)
//��p1ָ���Ԫ�ش���p2ָ���Ԫ�أ�����>0������ 
//��p1ָ���Ԫ�ص���p2ָ���Ԫ�أ�����=0������ 
//��p1ָ���Ԫ��С��p2ָ���Ԫ�أ�����<0������ 


//��Ȼ��������ô�ö�����֮�������Ƚ�
//��ͬ��������֮��ȽϷ�ʽ��ͬ
//��������ʹ�ù�ϵ������Ƚϴ�С
//�����ַ���ͨ��strcmp�Ƚϴ�С
//�����ṹ��Ҳ��ָ���ȽϷ�ʽ

//���֪���˺���������Ԫ�ص����ͣ���ô�ȽϺ�����ָ�������ǲ��ǿ���ֱ�����Ϊ������Ԫ�ص����ͣ�
//������
//���Ͳ�һ����ʱ��qsort�̣��Ͼ���ֻ�Ǹ��⺯��
//���Ҫ���Ҵ�����Ҳû�취
//����Ϊ�˿������ĸ��ܣ����ǰ��չ涨д



//cmp((char*)base + j * width, (char*)base + (j + 1) * width)
//baseΪ��ʼ��ַ��bese�����void*���޷�����+-�������㣬������Ҫǿ������ת��
//j*widthΪ�ֽ�������������Ҫ�õ�ĳ���ĵ�ַ����ֻ��Ҫ��baseת��Ϊchar*
//��ô����base+2*width��������8���ֽڣ�Ҳ���������������Σ��õ��˵�ַ



//swap((char*)base + j * width, (char*)base + (j + 1) * width, width)��
//�������ڴ��д洢���ղ��룬��������
//6��7�Ĳ���
//06 00 00 00
//07 00 00 00
//Ҫ���������ֽ�������ô����԰�ÿ���ֽڵ����ݽ���
//��Ԫ�����;����˽����ֽڵĸ��������ڲ�֪��Ԫ�����ͣ����԰�width���Ҳ����ȥ


//qsort�����e1��e2���Σ����Լ�������Ҫ�Ƚϵ�������ַ����e1��e2


 //qsort �ײ��ǿ�������ķ���
//
//bubbleSort2�ǲ���ð�������˼��
//�����qsort�����˼��
//�����bubbleSort2����ʵ�ֶ������������ݵ�����


#include<stdio.h>
struct stu
{
	char name[20];
	int age;
};
int cmp(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)//��width���ֽ�
	{
		char* tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;//ָ��������
		buf2++;
	}
}
void bubbleSort(void* base, int sz, int width, int(*p)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//����
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void print(struct stu* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d ", (p + i)->name, (p + i)->age);
	}
	printf("\n");
}
int main()
{
	struct stu arr[] = { {"zhangsan",20},{"lisi",55},{"wangwu",40} };
	//�������ֱȽ�
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, sz, sizeof(arr[0]), cmp);
	print(arr, sz);
	return 0;
}