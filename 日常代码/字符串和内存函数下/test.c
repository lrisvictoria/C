#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>  
#include <string.h>
//�ַ�����������

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
//#include <errno.h>
//#include <stdlib.h>
//#include <limits.h>
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));*/
//	int* p = (int*)malloc(INT_MAX);//����������ڴ�ģ�������ʼ��ַ���أ�������void��ǿ������ת��
//	if (p == NULL)//���ٿռ�ʧ�ܷ��ؿ�ָ�룬malloc�ǿ⺯��������ʧ�ܻ�Ѵ�����ŵ�errno��
//	{
//		//printf("%s\n", strerror(errno));//Not enough space
//		perror("Malloc");//Malloc: Not enough space��ͨ����ʾ��Ϣ���Ϸֺţ���ӡ��������Ϣ
//		return 1;
//	}
//	//��������ȫ�ֵģ��ᱻʵʱ����
//	return 0;
//}

//perror - ��ӡ������Ϣ
//void perror( const char *string );
//�ض����ӡ��������Ϣ
//ð��ǰ��Ϊ�Զ�����Ϣ

//���ֻ�����ӡ������Ϣ�Ļ���perror�ȽϷ��㣬�������Ƿ�˵��strerror��û���أ����ǵ�
//��������ӡ��ֻ���õ�������Ϣ��strerror��Ѵ�����ת��Ϊ������Ϣ������ӡ
//��perrorһ�����ӡ

//�ַ���������

#include <ctype.h>
//isdigit �����ַ��ط�0�������ַ���0
//int main()
//{
//	int ret = isdigit('4');//����ascii��ֵ���ַ�������
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	/*if (ch >= 'a' && ch <= 'z')
//	{
//
//	}*/
//	int ret = islower(ch);
//
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�ת��
//int main()
//{
//	char ch = 'a';
//	putchar(toupper(ch));
//	printf("\n");
//	putchar(tolower(ch));
//	return 0;
//}

//�ڴ��������

//void *memcpy( void *dest, const void *src, size_t count );//countΪ�ֽ���
//Ϊʲôָ��������void*
//����ʵ��memcpy������ʱ����Ҫ������ο����������͵���������
//void*���Խ����������͵�ָ��


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };//��arr1��ǰ���������arr2��
//
//	//��ǰ������ݵ��ڴ濽����arr2��
//	//memcpy
//	memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//ģ��ʵ��memcpy - �����ص��Ŀ���
//ǿ������ֻ����ʱ��
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;//void����ָ��ʹ��ʱ��Ҫǿ������ת��
//		
//		/*dest = (char*)dest + 1;
//		src = (char*)src + 1;*/
//
//		((char*)dest)++;
//		//����++��Ե���dest����Ϊ++���ȼ��Ƚϸߣ�
//		/**����dest�Ⱥ�++����һ����ϣ��������dest��void*����
//		*Ҳ����ǿ�����Ͳ�û����������ǿ������ת������
//		*�����(char*)dest����һ�����ţ��γɾ��������
//		*�����Ƚ�ϣ���ô��ûʲô������*/
//		((char*)src)++;
//		//��ǰ��++����ԣ���Ϊ�������Ľ����ֻ�����ݺ�������������ӵ�ʱ��
//		//�Ż��漰������ԣ���ǰ��������漰����ԣ��������ǵ����ݿ϶����Ⱥ�
//		//char*��ϣ���ǿ������ת���ˣ��ٽ���++��������Եľ���ǿת�������
//
//		/*
//		++(char*)dest;
//		++(char*)src;
//		*/
//	}
//	return ret;
//}
//int main()
//{
//	/*int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };*/
//
//	/*my_memcpy(arr2, arr1, 20);*/
//
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memcpy(arr1 + 2, arr1, 20);
//
//	for (int i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr2[i]);
//		printf("%d ", arr1[i]);//1 2 1 2 1 2 1 8 9 10
//	}
//	return 0;
//}

//��ô�������ˣ���ν�1,2,3,4,5��ο�����3,4,5,6,7��λ��
//��ͬһ���ڴ��еĿ����������ݽ��п���ʱ�����Ҫ���������ݸı�

//�����ص��Ŀ���
//memmove

//ģ��ʵ��memmove - �ص��Ͳ��ص��Ķ��ܸ㶨
//#include <assert.h>
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	//1
//	//��߲��ô�ǰ��󿽱��ķ�ʽ���м���ұ߲��ôӺ���ǰ�����ķ�ʽ
//	//if (dest < src)
//	//{
//	//	//��ǰ���
//	//	while (count--)
//	//	{
//	//		*((char*)dest) = *((char*)src);
//	//		dest = (char*)dest + 1;
//	//		src = (char*)src + 1;
//	//	}
//	//}
//	//else
//	//{
//	//	//�Ӻ���ǰ 
//	//	while (count--)
//	//	{
//	//		*((char*)dest + count) = *((char*)src + count);
//	//	}
//	//}
//	
//	//2
//	//��ߺ��Ҽ���ô�ǰ��󿽱��ķ�ʽ���м���ôӺ���ǰ�����ķ�ʽ
//	if (dest > src && dest < ((char*)src + count))
//	{
//		//�Ӻ���ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	else
//	{
//		//��ǰ���
//		while (count--)
//		{
//			*((char*)dest) = *((char*)src);
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9, 10 };
//	//��ǰ���󿽱����ߴӺ���ǰ����
//	memmove(arr1 + 2, arr1, 20);//����ʵ���ص��ڴ�Ŀ���
//	//memmove(arr1, arr1 + 2, 20);
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//��Ȼmemmove��memcpy���Ӻ���
//����memcpy��Ȼ����Ҫ
//��Ϊ�Ͼ������ǵ����ģ���һ��һ����չ��
//�ܶ�ʹ�þɰ汾ϰ�ߵ��˿���ϰ����ʹ��memcpy
//��Ϊ���ܰ汾��û�н��и���
//���äĿɾ������﷨���ͻ�����ܴ������


//����ʵ������vs����ʵ��memcpy�������Ż�
//����ģ��ʵ�ֵ�memcpy����ʵ�ֵ���ͬ�ڴ�Ŀ���
//ʹ�ÿ���Ŀ���ʵ��

//memcmp - �Ƚ��ڴ������ݵĴ�С
//>0 ����>0������
//=0 ����=0������
//<0 ����<0������

//int memcmp(const void* buf1, const void* buf2, size_t count);

//�Ƚ�ÿһ���ֽڶ�Ӧ���ݵĴ�С

//ģ��ʵ��memcmp
//int my_memcmp(const void* arr1, const void* arr2, size_t count)
//{
//  assert(arr1 && arr2);
//	while (count--)
//	{
//		if (*(char*)arr1 != *(char*)arr2)
//		{
//			return (*(char*)arr1) - (*(char*)arr2);
//		}
//		arr1 = (char*)arr1 + 1;
//		arr2 = (char*)arr2 + 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,0x11223305 };
//
//	int ret = my_memcmp(arr1, arr2, 16);
//	
//	printf("%d\n", ret);
//	return 0;
//}

//memset - �ڴ�����

//void* memset(void* dest, int c, size_t count);

//ģ��ʵ��memset
#include <assert.h>
void* my_memset(void* dest, int c, size_t count)
{
	assert(dest);
	void* ret = dest;
	while (count--)
	{
		*(char*)dest = c;
		dest = (char*)dest + 1;
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	my_memset(arr1, 1, 20); //memset�����ֽ�Ϊ��λ����ʼ���ڴ浥Ԫ��
	//memset�ܽ��ܵ����ݵ����ֵΪff��Ҳ����һ���ֽڵ��������
	return 0;
}