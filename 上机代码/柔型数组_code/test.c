#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>

// һ���ṹ�������һ����Ա�����飬�������û�д�С
// ��Ϊ��������
// ����������ص㣺
// �ṹ�е����������Աǰ��������һ��������Ա
// sizeof���صĽṹ��С����������������ڴ�
// malloc���ж�̬���䣬������ڴ���ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С

struct S
{
	int n;
	float s;
	int arr[0];// ���������Ա
			   // int arr[];// Ҳ����
};

int main()
{
	//printf("%zu\n", sizeof(struct S));// ��������������Ĵ�С
	//struct S s;
	struct S* ps = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);// sizeof(int) * 4���������������
	if (ps == NULL)
	{
		return 1;
	}
	//...
	ps->n = 100;
	ps->s = 5.5f;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &(ps->arr[i]));
	}

	printf("%d %f\n", ps->n, ps->s);

	for (i = 0; i < 4; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	//�ͷ�
	free(ps);
	ps = NULL;
	return 0;
}