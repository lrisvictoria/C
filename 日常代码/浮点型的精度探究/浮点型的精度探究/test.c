#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	double x = 3.6;
//	printf("%.50lf\n", x);
//	return 0;
//}
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//	if ((x - 0.9) == 0.1)
//	{
//		printf("==");
//	}
//	else
//	{
//		printf("!=");
//	}
//	return 0;//��ͼ����
//}
//�������ڽ��бȽϵ�ʱ�򣬾��Բ���ֱ��ʹ��==�����бȽϣ�����
//�����������о�����ʧ���������¸��ֽ��������ϸ΢�Ĳ��

//����������������������ֵ��������������Ч��Χ��-EPS ~ EPS����Χ�ڣ�
//��˵��x��y���

//�۲�fabs������cpp��

//#define EPS 0.00000000000001//�Զ��巽��
//#define DBL_EPSILON//ϵͳ�ṩ�ľ��� ����ת������۲�һ�£���һ���ǳ�С��ֵ
//#include<float.h>
//#include<math.h>
//int main()
//{
//	double x = 1.0;
//	double y = 0.1; 
//	printf("%.50lf\n", x - 0.9);
//	printf("%.50lf\n", y);
//	//if (fabs((x - 0.9) - y) < EPS)//�ж�x-0.9�Ƿ��y���
//	if (fabs((x - 0.9) - y) < DBL_EPSILON)
//	{
//		printf("==\n");//==�����Խ�ͼ
//	}
//	else
//	{
//		printf("!=\n");
//	}
//	return 0;
//}
//��ô���ڸ��������ݶ�0�Ƚ��أ�
#include<float.h>
#include<stdio.h>
#include<math.h>
int main()
{
	double x = 0.0;
	if (fabs(x) < DBL_EPSILON)//fabs(x - 0)
	//if(x > -DBL_EPSILON && x < DBL_EPSILON)
	{
		printf("yes\n");//һ����������0�Ƚϣ�ֻҪ��֤���ľ���ֵ�ھ��ȷ�Χ�ھ����
	}
	return 0;
}
//floatҲ������һ��
//#include<float.h>
//#include<math.h>
//int main()
//{
//	double x = 0.0000000000000001;
//	//����ֵ�Ƚ�Ҫ��Ҫ��ȣ�
	////����������x�仯����Сֵ
	////���Ǿ��� + x���������𾫶ȱ仯���д��
	////fab(x) <= DBL_EPSILON
	////��ʱx���ڶ�Ӧ�ľ���
	////double y + x != y;//Ҳ���Ǽ���x(����)������仯
	////�൱��double y + DBL_EPSILON ��= y
	////y + 0.0 == y;
	////���Υ���˾��ȶ���ĳ��ԣ��Ͳ����ϸ������Ͽ���'0'�ĸ���
	////д���Ƚ�ì��
	////������д�ϵȺ�
//	/*if (x > -DBL_EPSILON && x < DBL_EPSILON)
//	{
//
//	}*/
//	if (fabs(x) < DBL_EPSILON)
//	{
//		printf("you can see me! x == 0.0\n");
//	}
//	else
//	{
//		printf("oops!\n");
//	}
//}

//�ܽ�һ�£�
//1. �������洢��ʱ�����о�����ʧ��
//2. �������ǲ��ܽ���==�Ƚϵ�
//3. if(fabs(a - b) < DBL_EPSILON)
//4. Ҫ��Ҫ<=ϸ��