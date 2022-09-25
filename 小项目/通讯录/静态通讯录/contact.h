#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 7
#define MAX_TELE 12
#define MAX_ADDR 30

struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo data[100];//人员信息
	int sz;//联系人个数
};

//初始化通讯录
void InitContact(struct Contact* pc);

//增加联系人
void AddContact(struct Contact* pc);

//显示通讯录
void ShowContact(const struct Contact* pc);

//删除联系人
void DelContact(struct Contact* pc);

//查找联系人
void SearchContact(const struct Contact* pc);

//修改联系人
void ModifyContact(struct Contact* pc);

//排序联系人
void SortContact(struct Contact* pc);