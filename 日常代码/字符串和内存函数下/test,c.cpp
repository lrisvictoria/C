#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>  
#include <string.h>
//strtok - char * strtok ( char * str, const char * sep );
//strtok�ǻ�ı��ַ����ģ�����ͨ��ʹ�ÿ������ַ���
//int main()
//{
//	char arr[] = "a1249967801@163.com@haha nihao";
//	char buf[50] = { 0 };
//	strcpy(buf, arr);
//
//	const char* sep = "@. ";
//	char* str = NULL;
//	for (str = strtok(buf, sep); str != NULL;str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//	//strtok - �и��ַ���
//	//"@."��Ϊָ�����sepָ����ַ���
//	//arr������Ҫ�и���ַ���
//	//printf("%s\n", strtok(arr, sep));//ֻ�ҵ�һ�����
//	//printf("%s\n", strtok(NULL, sep));//�ӱ���õ�λ�ü���������
//	//printf("%s\n", strtok(NULL, sep)); 
//	//����ַ����в����ڱ���ˣ��򷵻ؿ�ָ��
//	return 0;
//}

//strerror
//���ش���������Ӧ�Ĵ�����Ϣ
//ȫ�ֵı�����errno(������)
#include <errno.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
	/*printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2)); 
	printf("%s\n", strerror(3));*/
	int* p = (int*)malloc(INT_MAX);//����������ڴ�ģ�������ʼ��ַ���أ�������void��ǿ������ת��
	if (p == NULL)//���ٿռ�ʧ�ܷ��ؿ�ָ�룬malloc�ǿ⺯��������ʧ�ܻ�Ѵ�����ŵ�errno��
	{
		//printf("%s\n", strerror(errno));//Not enough space
		perror("Malloc");//Malloc: Not enough space��ͨ����ʾ��Ϣ���Ϸֺţ���ӡ��������Ϣ
		return 1;
	}
	//��������ȫ�ֵģ��ᱻʵʱ����
	return 0;
}

//perror - ��ӡ������Ϣ
//void perror( const char *string );
