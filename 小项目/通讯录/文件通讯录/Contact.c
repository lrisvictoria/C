#define _CRT_SECURE_NO_WARNINGS 1 

#include "contact.h"

static int check_capacity(struct Contact* pc);

void LoadContact(struct Contact* pc)
{
	// ���ļ�
	FILE* pfR = fopen("data.txt", "rb");// ������ֻ��
	if (pfR == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	// ���ļ�
	struct PeoInfo tmp = { 0 };// ��Ŷ�ȡ���ݵĿռ�
	/*
	* fread�ķ���ֵ��ʵ�ʶ�ȡ�ɹ���Ԫ�ظ���
	*/	
	// ÿ�ζ�ȡһ�������Ƿ��ȡ�ɹ�����ȡ�ɹ����سɹ���ȡ��Ԫ�ظ���
	// �ɹ�����1��ʧ�ܷ���0
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfR) )
	{
		// �����Ƿ���Ҫ����
		check_capacity(pc);
		pc->data[pc->sz] = tmp;// ��ȡ�����ݷŵ���Ӧ�±�
		pc->sz++;
	}

	// �ر��ļ�
	fclose(pfR);
	pfR = NULL;
}

void InitContact(struct Contact* pc)
{
	assert(pc);
	pc->data = (struct Contact*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact()");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;

	// �����ļ��е���Ϣ��ͨѶ¼��
	LoadContact(pc);
}

static int check_capacity(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			ptr = NULL;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
			return 1;
		}
		else
		{
			perror("AddContact()");
			return 0;
		}
	}
	return 1;
}

void AddContact(struct Contact* pc)
{
	assert(pc);
	int ret = check_capacity(pc);

	if (0 == ret)
	{
		return;
	}

	//�����˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);

	//��������Ƿ��ظ�
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[pc->sz].name, pc->data[i].name) == 0)
		{
			printf("���и���ϵ�˵���Ϣ������������\n");
			return;
		}
	}

	//������ϵ����Ϣ(���������)
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������סַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("�ɹ�������ϵ��\n");
}

void ShowContact(const struct Contact* pc)
{
	assert(pc);
	printf("%-20s\t%-7s\t%-12s\t%-12s\t%-30s\n", "����", "�Ա�", "�绰", "����", "סַ");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-7s\t%-12s\t%-12d\t%-30s\n", pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].age,
			pc->data[i].addr);
	}
}

static int FindByName(const struct Contact* pc, char name[])
{
	assert(pc && name);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

static void ReduceCapacity(struct Contact* pc)
{
	assert(pc);
	if (pc->sz == (pc->capacity - INC_SZ))
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity - INC_SZ) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			ptr = NULL;
			pc->capacity -= INC_SZ;
			printf("ͨѶ¼�Ѽ��ݣ��������Ϊ%d\n", pc->capacity);
			return;
		}
		else
		{
			perror("DelContact()");
			return;
		}
	}
}
void DelContact(struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("Ҫɾ���˵Ĳ�����\n");
	}
	else
	{
		memmove(pc->data + ret, pc->data + ret + 1, (pc->sz - ret - 1) * sizeof(struct PeoInfo));
		pc->sz--;
		ReduceCapacity(pc);
		printf("�ɹ�ɾ��ָ����ϵ��\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-7s\t%-12s\t%-12s\t%-30s\n", "����", "�Ա�", "�绰", "����", "סַ");
		printf("%-20s\t%-7s\t%-12s\t%-12d\t%-30s\n", pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].tele,
			pc->data[ret].age,
			pc->data[ret].addr);
		printf("�������\n");
	}
}

void ModifyContact(struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[ret].name);
		printf("�������Ա�:>");
		scanf("%s", pc->data[ret].sex);
		printf("������绰:>");
		scanf("%s", pc->data[ret].tele);
		printf("����������:>");
		scanf("%d", &(pc->data[ret].age));
		printf("������סַ:>");
		scanf("%s", pc->data[ret].addr);

		printf("�ɹ��޸�ָ����ϵ��\n");
	}
}

int CmpByName(const void* e1, const void* e2)
{
	return strcmp((((struct PeoInfo*)e1)->name), ((struct PeoInfo*)e2)->name);
}

int CmpBySex(const void* e1, const void* e2)
{
	return strcmp((((struct PeoInfo*)e1)->sex), ((struct PeoInfo*)e2)->sex);
}

int CmpByTele(const void* e1, const void* e2)
{
	return strcmp((((struct PeoInfo*)e1)->tele), ((struct PeoInfo*)e2)->tele);
}

int CmpByAge(const void* e1, const void* e2)
{
	return (((struct PeoInfo*)e1)->age) - (((struct PeoInfo*)e2)->age);
}

int CmpByAddr(const void* e1, const void* e2)
{
	return strcmp((((struct PeoInfo*)e1)->addr), ((struct PeoInfo*)e2)->addr);
}

enum Info
{
	EXIT,
	NAME,
	SEX,
	TELE,
	AGE,
	ADDR
};
static void SortMenu()
{
	printf("**************************************\n");
	printf("*****   1. name      2. sex      *****\n");
	printf("*****   3. tele      4. age      *****\n");
	printf("*****   5. addr      0.exit      *****\n");
	printf("**************************************\n");
}

void SortContact(struct Contact* pc)
{
	assert(pc);
	int choice = 0;
	system("cls");
	SortMenu();
	printf("��ѡ������ʽ:>");
	scanf("%d", &choice);
	switch (choice)
	{
	case NAME:
		qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByName);
		break;
	case SEX:
		qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpBySex);
		break;
	case TELE:
		qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByTele);
		break;
	case AGE:
		qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByAge);
		break;
	case ADDR:
		qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByAddr);
		break;
	case EXIT:
		printf("ȡ������\n");
		break;
	}
	printf("����ɹ�\n");
}

// ����ͨѶ¼
void SaveContact(struct Contact* pc)
{
	// ���ļ�
	FILE* pfW = fopen("data.txt", "wb");// ͨѶ¼����Ϣ���ǲ���Ҫ������������������У������ö�����д��
	if (pfW == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}
	// д�ļ�
	for (int i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(struct PeoInfo), 1, pfW);
	}
	// �ر��ļ�
	fclose(pfW);
	pfW = NULL;
}

/*
* ���ǽ�������ͨѶ¼��û�õ�
* ��Ϊ������д���ļ���
* ��û�н��ļ��е���Ϣ���ص�����
* ������Ҫ��дһ��������Ϣ�Ľӿ�
*/

void DestoryContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}