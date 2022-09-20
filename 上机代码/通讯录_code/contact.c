#define _CRT_SECURE_NO_WARNINGS 1 
/*通讯录的实现*/

#include "contact.h"

void InitContact(struct Contact* pc)
{
	assert(pc);
	pc->sz = 0;//初始化通讯录人数
	memset(pc->data, 0, 100 * sizeof(struct PeoInfo));//初始化所有人员信息
}

void AddContact(struct Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)//通讯录满了
	{
		printf("通讯录已满，无法添加数据\n");
		return;
	}
	
	//增加人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);//将数据放到sz下标处
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[pc->sz].name, pc->data[i].name) == 0)
		{
			printf("已有该联系人的信息，请重新输入\n");
			return;
		}
	}
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));//age成员是个变量，需要取地址
	printf("请输入住址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;//->优先级高于++，先访问到sz在针对sz++
	printf("成功增加联系人\n");
}

void ShowContact(const struct Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-12s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
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
			return i;//返回下标
		}
	}
	return -1;
}

void DelContact(struct Contact* pc)
{
	char name[MAX_NAME];//存放删除人的名字
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//查找一下指定的人是否存在
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("要删除的人不存在\n");
	}
	//略笨拙，可修改
	else
	{
		////删除
		//int j = 0;
		//for (j = ret; j < pc->sz - 1; j++)
		//{
		//	pc->data[j] = pc->data[j + 1];
		//}
		memmove(pc->data + ret, pc->data + ret + 1, (pc->sz - 1 - ret) * sizeof(struct PeoInfo));
		pc->sz--;
		printf("成功删除指定联系人\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	char name[MAX_NAME];//存放删除人的名字
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//查找一下指定的人是否存在
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-20s\t%-5s\t%-12d\t%-12s\t%-30s\n", pc->data[ret].name,
				pc->data[ret].sex,
				pc->data[ret].age,
				pc->data[ret].tele,
				pc->data[ret].addr);
	}
}

void ModifyContact(struct Contact* pc)
{
	printf("请输入要修改人的名字:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[ret].name);//将数据放到sz下标处
		printf("请输入性别:>");
		scanf("%s", pc->data[ret].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[ret].tele);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[ret].age));//age成员是个变量，需要取地址
		printf("请输入住址:>");
		scanf("%s", pc->data[ret].addr);

		printf("修改成功\n");
	}
}

int CmpByAge(const void* e1, const void* e2)
{
	return (((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age);
}

//按照名字排序
void SortContact(struct Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByAge);
}