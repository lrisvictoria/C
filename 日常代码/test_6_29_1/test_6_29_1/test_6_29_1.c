#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 60)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score < 60)
//        printf("������\n");
//    else if (score >= 60 && score <= 70)
//        printf("����\n");
//    else if (score >= 70 && score <= 85)
//        printf("����\n");
//    else
//        printf("����\n");
//    return 0;
//}
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score < 60)
//        printf("������\n");
//        printf("�����Ŭ��\n");//����
//    else
//        printf("����\n");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
//}
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score < 60)
//        printf("������\n");
//    else if (score >= 60 && score < 70)
//        printf("����\n");
//    else if (score >= 70 && score < 85)
//        printf("����\n");
//    else
//        printf("����\n");
//    return 0;
//}
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score < 60)
//    {
//        printf("������\n");
//        printf("�����Ŭ��\n");
//    }
//    else
//        printf("����\n");
//    return 0;
//}
//���1-100֮�������
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("�������\n");
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;//��������    
//    }
//    return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	int tmp = 0;
//	while ((tmp) = getchar() != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):>");
//	int ch = getchar();
//	if ('Y' == ch)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    for (int i = 1; i <= 10; i++)
//    {
//        if (5 == i)
//            continue;
//        printf("%d ", i);
//    }
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}