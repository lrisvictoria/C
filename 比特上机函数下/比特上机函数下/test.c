#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//void test()
//{
//	return 0;
//}
//int main()
//{
//	int ret = test();//����
//}
//���������д����ֵ������Ĭ�ϻ᷵��һ��ֵ
//��Щ�������Ϸ��ص������һ��ָ��ִ�в����Ľ��
//int test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//
//	//©������ֵ��ʲôΣ����
//	//���ص�ֵ���ܲ�������Ҫ��
// �������Ҫ����һ��a�������㷵����c
//}
//int main()
//{
//	printf("%d\n", test());//29
//	return 0;
//}
//void Add(int* p)
//{
//	//(*p)++;//�����ú�++
//	*p += 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//}
//int main()
//{
//	int num = 0;
//	printf("%d\n", Add(num));
//	printf("%d\n", Add(num));
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 3;
//	int num = 0;
//	scanf("%d", &num);
//	while (num > 0 && i > 0)
//	{
//		arr[i] = num % 10;
//		num /= 10;
//		i--;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//������û�б�����ʱ���βλ᲻�����ڴ��п��ٿռ䣿
//���ᣬ��������ʱ�Ż���д��Σ��Żᴴ����ʽ������������Ҳû�в�����
//�����Ķ�����Ǹ�������Դ���������ʽ������������û����������
//�󲿷�Ϊ��ʽ�ϵĴ���
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int m= get_max(a,b);
//	printf("%d\n", m);
//}
//���򿪼��Ӵ��ڿ���max�ĵ�ַ�������ַ�Ǹ������ǵ���ʱͨ�������ַ����
//�����Ƿ���ռ�
//������������ʦ����һ�����������壬����û�е��ã�����������������������������庯���ǲ�ռ���ڴ�İɣ�
//����ʵ�ֵ���Щָ��Ҳ��Ҫռ�ڴ��ֻ����û�б�������û�к�������ջ����Щ����...

//arr,10�����ں����ڲ����۲�10��Ԫ��
//���鴫�Σ�Ϊ�˽�ʡ���������δ�������Ԫ�صĵ�ַ����������ҵ�Ԫ��
//����
//����д������ֻ�������˸��Ӻ���⣡
//���鴫�δ�������Ԫ�ص�ַ�������ܽ��������鴫��

//#include<stdio.h>
//int binary_search(int arr[], int sz, int k)
////int binart_search(int* arr, int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return - 1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = binary_search(arr, sz, k);
//	if (ret == -1)
//		printf("û�ҵ�\n");
//	else
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	return 0;
//}

//ʹ��num�ķ�ʽʵ��ÿ����һ�� + 1
//int Add(int n)
//{
//	return n + 1;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);
//	num = Add(num);
//	printf("%d\n", num);
//}
 
//�����������Ͷ���
//������
//Ϊʲô��������ǰ����ɨ�裬ɨ��ʱû����Add������
//������������ҵ��ˣ���������ǰ��û���������Ա�һ������

//ֻ��Ҫ����һ�¾Ϳ���
//��������ʹ�ú���֮ǰ�Ϳ��ԣ�
//int Add(int, int);//ֻ��Ҫ���ߺ��������м����������������ͺͷ���ֵ
//������ֻҪ�ں���������ʹ�þͺã���������ʹ��û����
//int Add(int x, int y);  
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	//int Add(int, int);//Ҳ����
//	int s = Add(a, b);
//	printf("%d\n", s);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}

//vs�Ǳ��������Ǽ��ɿ������� IDE
//�༭��������������������������
//#include"add.h"//��һ��ͷ�ļ� 
//#pragma comment(lib,"zs_add.lib")//�̶���ʽ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int s = Add(a, b);
//	printf("%d\n", s);
//	return 0;
//}
//����һ�£����ö��ļ��������ǲ��Ǿ�й¶�ˣ�

//���������ͷ�ļ���ʱ���൱�ڰ�ͷ�ļ��е����ݿ���һ�ݹ��� 
//�൱���γ��˺�������