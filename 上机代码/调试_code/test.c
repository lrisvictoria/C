#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//�����һ�������������
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//�鿴�����߼�
//void test2()
//{
//	printf("hello\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	char ch[] = "abcdef";
//	return 0;
//}
//debug�汾����ѭ������ôrelease�أ�

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);
//	return 0;
//}

//�������Ժ���ʱ��������Ա�����bug�������������û��bug
//���Ǳ��ɣ������ǶԵģ���Ϊ���ǵİ汾��ͬ
//����debug������release

//ģ��ʵ��strcpy
//���װ汾
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')//����\0֮ǰ��Ԫ��
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//����\0
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//���װ汾
//#include<assert.h>//����������Ϣ����ʱ���֡���λ����
//char* my_strcpy(char* dest, const char* src)//��������Ϊchar*
////Ϊ�˱��⿽��ʱ����dest��srcд���������Դ�ַ������ܱ��ı�
////���ǿ��Լ�const�������Σ�ʹ��src���ܱ��ģ�д��ʱ��ʱ����
//{
//	assert(dest && src);//�ж�dest��src�Ƿ�Ϊ��ָ�룬ֻҪ��һ����ָ���޷�ʹ��
//	//��ȻҲ������if�ж�
//	//if(dest == NULL)
//	//{
//	//	//...�����е�С����
//	// if���������debug��release�汾�У������жϣ�
//	// ��assertֻ��debug�汾�����ã�release�汾���Զ��Ż�
//	// assertֻ�ڳ�����ʱ�Żᱨ��release�汾��Ϊ���������������Ĳ���ˣ����Իᱻ�Ż�
//	// ����ifû��assert����
//	//}
//	char* ret = dest;
//	while (*dest++ = *src++);//����++��ʹ�ú�++���൱���Ƚ����ð�Ԫ�طŵ�dest�У�
//	//�ڽ���++����srcΪ\0ʱ���Ƚ����ý�\0�ŵ�dest�У�*src++��ֵΪ0
//	//���ʽ���Ϊ�٣�����ѭ��
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	//char* p = NULL;
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	//num = 20;//err
//	int ret = 100;
//	const int* p = &num;
//	//*p = 20;//err
//	p = &ret;
//	printf("%d\n", num);//10
//	printf("%d\n", *p);//100
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	//num = 20;//err
//	int ret = 100;
//	int* const p = &num;
//	*p = 20;
//	//p = &ret;//err
//	printf("%d\n", num);//20
//	printf("%d\n", *p);//20
//	return 0;
//}

//src��ϣ�����޸ģ�srcָ������ݲ��޸ģ���߽�׳��
//����Դ���ݣ���ֹԴ���ݱ������
//��׳�� - ³���� - robust

//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//7.��̳����Ĵ���
//�����ʹ���
//int main()
//{
//	return 0
//}
//��ʱ��ѧʱ����ֵ����⣬���Ų��ϵ����������ڻ����������

//�����ʹ���

//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//����ʱ����
//

int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%d\n", *(arr + 2));
	printf("%p\n", arr);
	printf("%p\n", arr + 2);
	return 0;
}