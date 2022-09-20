#pragma once
/*通讯录的声明*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 6
#define MAX_TELE 12
#define MAX_ADDR 30

//表示一个人的信息
struct PeoInfo
{
	char name[MAX_NAME];//姓名
	char sex[MAX_SEX];//性别
	char tele[MAX_TELE];//电话
	int age;//年龄
	char addr[MAX_ADDR];//住址
};

//通讯录
struct Contact
{
	struct PeoInfo data[MAX];//人员信息
	int sz;//联系人个数
};

//初始化通讯录
void InitContact(struct Contact* pc);

//增加人的信息到通讯录
void AddContact(struct Contact* pc);

//显示通讯录中的信息
void ShowContact(const struct Contact* pc);

//删除指定联系人
void DelContact(struct Contact* pc);

//查找指定联系人
void SearchContact(const struct Contact* pc);

//修改指定联系人的信息
void ModifyContact(struct Contact* pc);

//排序通讯录中的信息
void SortContact(struct Contact* pc);