#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int arr[10];//���ڴ�������40���ֽ�
//	void* p = malloc(40);
//
//	return 0;
//}

#include <errno.h>
#include <string.h>

//int main()
//{
//	int* p = (int*)malloc(INT_MAX);//21�ڶ�
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//��ӡ������
//		return 1;//�쳣����
//	}//ʹ��
//	return 0;
//}

//#include <assert.h>
//
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);//21�ڶ�
//	assert(p);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//��ӡ�����룬�˽����
//		return 1;//�쳣����
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;//�ı�ָ��p���ָ��ռ�Ľ�β
//	}
//	return 0;
//}


//err

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//��ӡ�����룬�˽����
//		return 1;//�쳣����
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;//�ı�ָ��p���ָ��ռ�Ľ�β����λ��
//	}
//	//�ͷ�
//	free(p);//ok?
//	return 0;
//}

//ok 

//int main()
//{
//	int* p = (int*)malloc(40);
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//��ӡ�����룬�˽����
//		return 1;//�쳣����
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;//�ı�ָ��p���ָ��ռ�Ľ�β����λ��
//	}
//	//�ͷ�
//	free(p);
//	//p = NULL;
//	return 0;
//}

//calloc

//int main()
//{
//	//40���ֽ� - 10������
//	calloc(10, sizeof(int));
//	return 0;
//}

//int main()
//{
//    int* p = (int*)calloc(10, sizeof(int));
//    if (p == NULL)
//    {
//        perror("calloc");//��ӡ������Ϣ
//        return 1;
//    }
//    int i = 0;
//    //ʹ��
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = i;//���ı�ָ��   
//    }
//    //�ͷ�
//    free(p);
//    p = NULL;
//    return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, 4);
//
//}

//int test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//...
//		return 1;
//	}
//	//ʹ��
//	if (1)//ĳ����������
//	{
//		return 2;//�������㷵��
//	}
//	//�ͷ�
//	free(p);//û���ͷ�
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	test();
//	return 0;
//}

//�����
//����ᱼ��
//int main()
//{
//	int num = 10;
//	int* p = num;
//
//	free(p);
//	p = NULL;
//	return 0;
//}
//û���⣬��Ϊfree�Ĳ�������ǿ�ָ�룬ʲô������
//int main()
//{
//	int num = 10;
//	int* p = NULL;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//���ӿռ�
//	int* ptr = realloc(p, 80);//������p����
//	//��realloc���ٿռ�ʧ��ʱ�����ص���NULL
//	//p����ָ��40���ֽڵĿռ䣬���ǿռ����ʧ���ˣ��ⲻ��͵������ʴ������
//	//��ԭ���Ŀռ䶼û�ˣ���˵realloc�ɵ�ʲô����
//	//��������Ҫ��һ��ȫ�µ�ָ��������
//	//�ͷ�
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;//��ֹptr��ʹ��
//	}
//	//���ݺ�ʹ��
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	realloc(NULL, 40);//�ȼ���malloc(40)
//	return 0;  
//}

//realloc�ܶ��Լ������Ŀռ��ٴ�realloc��


//int main()
//{
//	int* p = (int*)malloc(80);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	realloc(p, 8000);//�޷���ֵ����
//	//���ݺ�ʹ��
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(40);
	int* ptr = (int*)realloc(p, 80);
	
	int* pptr = (int*)realloc(ptr, 120);

	return 0;
}