#define _CRT_SECURE_NO_WARNINGS 1 

#include "contact.h"

void InitContact(struct Contact** pc)
{
	assert(pc);
	struct Contact* ptr = (struct Contact*)malloc(sizeof(struct Contact) + DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ptr == NULL)
	{
		perror("InitContact()");
		return;
	}
	ptr->sz = 0;
	ptr->capacity = DEFAULT_SZ;
	*pc = ptr;
}


void AddContact(struct Contact** pc)
{
	assert(pc);
	if ((*pc)->sz == (*pc)->capacity)
	{
		struct Contact* ptr = (struct Contact*)realloc((*pc), sizeof(struct Contact) + ((*pc)->capacity + INC_SZ) * sizeof(struct PeoInfo));
		if (ptr == NULL)
		{
			perror("AddContact()");
			return;
		}
		else
		{
			*pc = ptr;
			(*pc)->capacity += INC_SZ;
			printf("扩容成功\n");
		}
	}

	//增加人的信息
	printf("请输入名字:>");
	scanf("%s", (*pc)->data[(*pc)->sz].name);

	//检查名字是否重复
	int i = 0;
	for (i = 0; i < (*pc)->sz; i++)
	{
		if (strcmp((*pc)->data[(*pc)->sz].name, (*pc)->data[i].name) == 0)
		{
			printf("已有该联系人的信息，请重新输入\n");
			return;
		}
	}

	//增加联系人信息(名字已添加)
	printf("请输入性别:>");
	scanf("%s", (*pc)->data[(*pc)->sz].sex);
	printf("请输入电话:>");
	scanf("%s", (*pc)->data[(*pc)->sz].tele);
	printf("请输入年龄:>");
	scanf("%d", &((*pc)->data[(*pc)->sz].age));
	printf("请输入住址:>");
	scanf("%s", (*pc)->data[(*pc)->sz].addr);

	(*pc)->sz++;
	printf("成功增加联系人\n");
}

void ShowContact(const struct Contact** pc)
{
	assert(pc);
	printf("%-20s\t%-7s\t%-12s\t%-12s\t%-30s\n", "姓名", "性别", "电话", "年龄", "住址");
	int i = 0;
	for (i = 0; i < (*pc)->sz; i++)
	{
		printf("%-20s\t%-7s\t%-12s\t%-12d\t%-30s\n", (*pc)->data[i].name,
			(*pc)->data[i].sex,
			(*pc)->data[i].tele,
			(*pc)->data[i].age,
			(*pc)->data[i].addr);
	}
}

static int FindByName(const struct Contact** pc, char name[])
{
	assert(pc && name);
	int i = 0;
	for (i = 0; i < (*pc)->sz; i++)
	{
		if (strcmp((*pc)->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact** pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("要删除人的不存在\n");
	}
	else
	{
		memmove((*pc)->data + ret, (*pc)->data + ret + 1, ((*pc)->sz - ret - 1) * sizeof(struct PeoInfo));
		(*pc)->sz--;
		if ((*pc)->sz == (*pc)->capacity - INC_SZ)
		{
			struct Contact* ptr = (struct Contact*)realloc((*pc), sizeof(struct Contact) + (sizeof(struct PeoInfo) * ((*pc)->capacity - INC_SZ)));
			if (ptr == NULL)
			{
				perror("DelContact");
				return;
			}
			else
			{
				*pc = ptr;
				(*pc)->capacity -= INC_SZ;
				printf("减容成功，当前通讯录大小为：%d\n", (*pc)->capacity);
			}
		}
		printf("成功删除指定联系人\n");
	}
}

void SearchContact(const struct Contact** pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-7s\t%-12s\t%-12s\t%-30s\n", "姓名", "性别", "电话", "年龄", "住址");
		printf("%-20s\t%-7s\t%-12s\t%-12d\t%-30s\n", (*pc)->data[ret].name,
			(*pc)->data[ret].sex,
			(*pc)->data[ret].tele,
			(*pc)->data[ret].age,
			(*pc)->data[ret].addr);
		printf("查找完毕\n");
	}
}

void ModifyContact(struct Contact** pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", (*pc)->data[ret].name);
		printf("请输入性别:>");
		scanf("%s", (*pc)->data[ret].sex);
		printf("请输入电话:>");
		scanf("%s", (*pc)->data[ret].tele);
		printf("请输入年龄:>");
		scanf("%d", &((*pc)->data[ret].age));
		printf("请输入住址:>");
		scanf("%s", (*pc)->data[ret].addr);

		printf("成功修改指定联系人\n");
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

void SortContact(struct Contact** pc)
{
	assert(pc);
	int choice = 0;
	system("cls");
	SortMenu();
	printf("请选择排序方式:>");
	scanf("%d", &choice);
	switch (choice)
	{
	case NAME:
		qsort((*pc)->data, (*pc)->sz, sizeof(struct PeoInfo), CmpByName);
		break;
	case SEX:
		qsort((*pc)->data, (*pc)->sz, sizeof(struct PeoInfo), CmpBySex);
		break;
	case TELE:
		qsort((*pc)->data, (*pc)->sz, sizeof(struct PeoInfo), CmpByTele);
		break;
	case AGE:
		qsort((*pc)->data, (*pc)->sz, sizeof(struct PeoInfo), CmpByAge);
		break;
	case ADDR:
		qsort((*pc)->data, (*pc)->sz, sizeof(struct PeoInfo), CmpByAddr);
		break;
	case EXIT:
		printf("取消排序\n");
		break;
	}
	printf("排序成功\n");
}

void DestoryContact(struct Contact** pc)
{
	(*pc)->sz = 0;
	(*pc)->capacity = 0;
	free(*pc);
	pc = NULL;
}