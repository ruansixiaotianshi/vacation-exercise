#pragma once
#ifndef _CONTACT_H_

#define _CONTACT_H_
#include <stdio.h>
#include <string.h>
#include <assert.h>
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	EMPTY,
	SORT
};
#define MAX_NAME 20
#define MAX_AGE 5
#define MAX_SEX 5

#define MAX_TEL 20
#define MAX_ADDR 30
#define MAX 1000
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	short int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;

void InitContact(Contact * pcon);

void AddContact(Contact * pcon);
void ShowContact(const Contact * pcon);
void DelContact(Contact * pcon);
void SearchContact(Contact * pcon);
void ModifyContact(Contact * pcon);
void EmptyContact(Contact * pcon);
#endif // !_CONTACT_H_
