#pragma once

/*
*			需求：
* 通讯录退出后，之前保存的信息不能丢
* 当下一次重新运行通讯录的时候
* 还能看到上次保存的信息。
* 
*			分析：
* 退出的时候，把数据保存到文件中
* 当下一次运行的时候
* 再把文件中的内容加载到内存中
*/

/*
* 声明一下，当每次往通讯录写入数据时，一定要保存
* 否则数据不会被写入文件中
* 如果不选择 EXIT 退出，
* 通讯录就不会保存
* 
* 所以当写入信息后一定要记得保存
* 
* 通讯录每次退出保存后，
* 信息都会更新
* 实质上每次都是全新的数据
* 
* 如果没有保存，然后就将数据删除
* 那么文件中的数据是不会被修改的
* 这点需要注意
*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 7
#define MAX_TELE 12
#define MAX_ADDR 30

// 通讯录的默认大小
#define DEFAULT_SZ 3
// 通讯录满后，每次增加两个信息
#define INC_SZ 2

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
	struct PeoInfo* data;//指向开辟内存的起始位置
	int sz;//联系人个数
	int capacity;//容量
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

//销毁通讯录
void DestoryContact(struct Contact* pc);

// 保存通讯录
void SaveContact(struct Contact* pc);

// 加载文件信息到通讯录
void LoadContact(struct Contact* pc);