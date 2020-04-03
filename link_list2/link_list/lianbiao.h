#pragma once

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#ifndef _LIANBIAO_H_
#define _LIANBIAO_H_
typedef struct Node
{
	int data; // ˝æ›”Ú
	struct Node* pNext;  //÷∏’Î”Ú
}NODE,*PNODE;  

PNODE create_list();

void traverse_list(PNODE pHead);

bool is_empty(PNODE pHead);
int length_list(PNODE pHead);
void sort_list(PNODE pHead);
bool insert_link(PNODE pHead, int pos, int val);
bool delete_link(PNODE pHead, int pos, int *pVal);

#endif // !_LIANBIAO_H_

