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

int main()
{
	int* p = (int*)calloc(10, 4);

}