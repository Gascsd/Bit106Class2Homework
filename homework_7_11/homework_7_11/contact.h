#pragma once
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>


#define MAX 100

typedef struct PeoInfo
{
	char name[20];
	char sexy[10];
	int age;
	char tele[12];
	char addr[30];
}PeoInfo;


typedef struct Contact
{
	PeoInfo data[MAX];
	int count;
}Contact;



void menu();
void ContactInit(Contact* pc);
void ContactAdd(Contact* pc);
void ContactDel(Contact* pc);
void ContactSearch(const Contact* pc);
void ContactModify(Contact* pc);
void ContactShow(const Contact* pc);
void ContactSort(Contact* pc);
void ContactDestroy(Contact* pc);


