#pragma once

/*
*			����
* ͨѶ¼�˳���֮ǰ�������Ϣ���ܶ�
* ����һ����������ͨѶ¼��ʱ��
* ���ܿ����ϴα������Ϣ��
* 
*			������
* �˳���ʱ�򣬰����ݱ��浽�ļ���
* ����һ�����е�ʱ��
* �ٰ��ļ��е����ݼ��ص��ڴ���
*/

/*
* ����һ�£���ÿ����ͨѶ¼д������ʱ��һ��Ҫ����
* �������ݲ��ᱻд���ļ���
* �����ѡ�� EXIT �˳���
* ͨѶ¼�Ͳ��ᱣ��
* 
* ���Ե�д����Ϣ��һ��Ҫ�ǵñ���
* 
* ͨѶ¼ÿ���˳������
* ��Ϣ�������
* ʵ����ÿ�ζ���ȫ�µ�����
* 
* ���û�б��棬Ȼ��ͽ�����ɾ��
* ��ô�ļ��е������ǲ��ᱻ�޸ĵ�
* �����Ҫע��
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

// ͨѶ¼��Ĭ�ϴ�С
#define DEFAULT_SZ 3
// ͨѶ¼����ÿ������������Ϣ
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
	struct PeoInfo* data;//ָ�򿪱��ڴ����ʼλ��
	int sz;//��ϵ�˸���
	int capacity;//����
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

//����ͨѶ¼
void DestoryContact(struct Contact* pc);

// ����ͨѶ¼
void SaveContact(struct Contact* pc);

// �����ļ���Ϣ��ͨѶ¼
void LoadContact(struct Contact* pc);