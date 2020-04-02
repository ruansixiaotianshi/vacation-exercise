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
#endif // !_LIANBIAO_H_

