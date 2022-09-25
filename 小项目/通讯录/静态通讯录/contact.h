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
	struct PeoInfo data[100];//��Ա��Ϣ
	int sz;//��ϵ�˸���
};

//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);

//������ϵ��
void AddContact(struct Contact* pc);

//��ʾͨѶ¼
void ShowContact(const struct Contact* pc);

//ɾ����ϵ��
void DelContact(struct Contact* pc);

//������ϵ��
void SearchContact(const struct Contact* pc);

//�޸���ϵ��
void ModifyContact(struct Contact* pc);

//������ϵ��
void SortContact(struct Contact* pc);