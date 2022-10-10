#define _CRT_SECURE_NO_WARNINGS 1 

#include "contact.h"

static int check_capacity(struct Contact* pc);

void LoadContact(struct Contact* pc)
{
	// 打开文件
	FILE* pfR = fopen("data.txt", "rb");// 二进制只读
	if (pfR == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	// 读文件
	struct PeoInfo tmp = { 0 };// 存放读取数据的空间
	/*
	* fread的返回值是实际读取成功的元素个数
	*/	
	// 每次读取一个，看是否读取成功，读取成功返回成功读取的元素个数
	// 成功返回1，失败返回0
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfR) )
	{
		// 考虑是否需要增容
		check_capacity(pc);
		pc->data[pc->sz] = tmp;// 读取的数据放到对应下标
		pc->sz++;
	}

	// 关闭文件
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

	// 加载文件中的信息到通讯录中
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
			printf("增容成功\n");
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

	//增加人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);

	//检查名字是否重复
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[pc->sz].name, pc->data[i].name) == 0)
		{
			printf("已有该联系人的信息，请重新输入\n");
			return;
		}
	}

	//增加联系人信息(名字已添加)
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入住址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("成功增加联系人\n");
}

void ShowContact(const struct Contact* pc)
{
	assert(pc);
	printf("%-20s\t%-7s\t%-12s\t%-12s\t%-30s\n", "姓名", "性别", "电话", "年龄", "住址");
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
			printf("通讯录已减容，如今容量为%d\n", pc->capacity);
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
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("要删除人的不存在\n");
	}
	else
	{
		memmove(pc->data + ret, pc->data + ret + 1, (pc->sz - ret - 1) * sizeof(struct PeoInfo));
		pc->sz--;
		ReduceCapacity(pc);
		printf("成功删除指定联系人\n");
	}
}

void SearchContact(const struct Contact* pc)
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
		printf("%-20s\t%-7s\t%-12s\t%-12d\t%-30s\n", pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].tele,
			pc->data[ret].age,
			pc->data[ret].addr);
		printf("查找完毕\n");
	}
}

void ModifyContact(struct Contact* pc)
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
		scanf("%s", pc->data[ret].name);
		printf("请输入性别:>");
		scanf("%s", pc->data[ret].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[ret].tele);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[ret].age));
		printf("请输入住址:>");
		scanf("%s", pc->data[ret].addr);

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

void SortContact(struct Contact* pc)
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
		printf("取消排序\n");
		break;
	}
	printf("排序成功\n");
}

// 保存通讯录
void SaveContact(struct Contact* pc)
{
	// 打开文件
	FILE* pfW = fopen("data.txt", "wb");// 通讯录的信息我们不需要看懂，计算机看懂就行，于是用二进制写入
	if (pfW == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}
	// 写文件
	for (int i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(struct PeoInfo), 1, pfW);
	}
	// 关闭文件
	fclose(pfW);
	pfW = NULL;
}

/*
* 但是仅仅保存通讯录是没用的
* 因为将数据写入文件后
* 并没有将文件中的信息加载到程序
* 所以需要再写一个加载信息的接口
*/

void DestoryContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}