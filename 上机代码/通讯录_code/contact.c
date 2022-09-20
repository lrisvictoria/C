#define _CRT_SECURE_NO_WARNINGS 1 
/*ͨѶ¼��ʵ��*/

#include "contact.h"

void InitContact(struct Contact* pc)
{
	assert(pc);
	pc->sz = 0;//��ʼ��ͨѶ¼����
	memset(pc->data, 0, 100 * sizeof(struct PeoInfo));//��ʼ��������Ա��Ϣ
}

void AddContact(struct Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)//ͨѶ¼����
	{
		printf("ͨѶ¼�������޷��������\n");
		return;
	}
	
	//�����˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);//�����ݷŵ�sz�±괦
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[pc->sz].name, pc->data[i].name) == 0)
		{
			printf("���и���ϵ�˵���Ϣ������������\n");
			return;
		}
	}
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));//age��Ա�Ǹ���������Ҫȡ��ַ
	printf("������סַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;//->���ȼ�����++���ȷ��ʵ�sz�����sz++
	printf("�ɹ�������ϵ��\n");
}

void ShowContact(const struct Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-12s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-12d\t%-12s\t%-30s\n", pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByName(const struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;//�����±�
		}
	}
	return -1;
}

void DelContact(struct Contact* pc)
{
	char name[MAX_NAME];//���ɾ���˵�����
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//����һ��ָ�������Ƿ����
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	//�Ա�׾�����޸�
	else
	{
		////ɾ��
		//int j = 0;
		//for (j = ret; j < pc->sz - 1; j++)
		//{
		//	pc->data[j] = pc->data[j + 1];
		//}
		memmove(pc->data + ret, pc->data + ret + 1, (pc->sz - 1 - ret) * sizeof(struct PeoInfo));
		pc->sz--;
		printf("�ɹ�ɾ��ָ����ϵ��\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	char name[MAX_NAME];//���ɾ���˵�����
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//����һ��ָ�������Ƿ����
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-20s\t%-5s\t%-12d\t%-12s\t%-30s\n", pc->data[ret].name,
				pc->data[ret].sex,
				pc->data[ret].age,
				pc->data[ret].tele,
				pc->data[ret].addr);
	}
}

void ModifyContact(struct Contact* pc)
{
	printf("������Ҫ�޸��˵�����:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[ret].name);//�����ݷŵ�sz�±괦
		printf("�������Ա�:>");
		scanf("%s", pc->data[ret].sex);
		printf("������绰:>");
		scanf("%s", pc->data[ret].tele);
		printf("����������:>");
		scanf("%d", &(pc->data[ret].age));//age��Ա�Ǹ���������Ҫȡ��ַ
		printf("������סַ:>");
		scanf("%s", pc->data[ret].addr);

		printf("�޸ĳɹ�\n");
	}
}

int CmpByAge(const void* e1, const void* e2)
{
	return (((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age);
}

//������������
void SortContact(struct Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByAge);
}