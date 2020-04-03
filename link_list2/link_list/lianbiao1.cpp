#define _CRT_SECURE_NO_WARNINGS 

#include "lianbiao.h"

PNODE create_list()
{
	int len;
	int i;
	int val;
	PNODE pHead = (PNODE)malloc(sizeof(NODE));

	if (NULL == pHead)
	{
		printf("分配失败，程序终止！");
		exit(-1);
	}

	PNODE pTail = pHead;
	pTail->pNext = NULL;
	printf("请输入您需要生成的链表的节点数：len=");
	scanf("%d", &len);

	for (i = 0; i < len; i++)
	{
		printf("请输入第%d个节点的值:", i + 1);
		scanf("%d", &val);

		PNODE pNew= (PNODE)malloc(sizeof(NODE));
		if (NULL == pHead)
		{
			printf("分配失败，程序终止！");
			exit(-1);
		}
		pNew->data = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;
	}
	return pHead;
}

void traverse_list(PNODE pHead)
{
	PNODE p = pHead->pNext;
	while (NULL != p)
	{
		printf("%d ", p->data);
		p = p->pNext;
	}
	printf("\n");
}

bool is_empty(PNODE pHead)
{
	if (NULL == pHead->pNext)
		return true;
	else
		return false;
}

int length_list(PNODE pHead)
{
	PNODE p = pHead->pNext;
	int len = 0;

	while (NULL != p)
	{
		len++;
		p = p->pNext;
	}
	return len;
}

void sort_list(PNODE pHead)
{
	int t;
	PNODE p, q;
	for (p = pHead->pNext; ;p = p->pNext)
	{
		for (q = p->pNext; ;q = q->pNext)
		{
			if (p->data > q->data)
			{
				t = p->data;
				p->data = q->data;
				q->data = t;
			}
		}
	}
	return;
}


bool insert_link(PNODE pHead, int pos, int val)
{
	int i = 0;
	PNODE p = pHead;
	while (NULL != p && i < pos - 1)
	{
		p = p->pNext;
		i++;
	}
	if (i > pos - 1 || NULL == p)
	
		return false;
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	if (NULL == p)
	{
		printf("动态内存分配失败！\n");
		exit(-1);
	}
	pNew->data = val;
	PNODE q = p->pNext;
	p->pNext = pNew;
	pNew->pNext = q;
	return true;
}

bool delete_link(PNODE pHead, int pos, int *pVal)
{
	int i = 0;
	PNODE p = pHead;
	while (NULL != p->pNext && i < pos - 1)
	{
		p = p->pNext;
		i++;
	}
	if (i > pos - 1 || NULL == p->pNext)

		return false;
	
	PNODE q = p->pNext;
	*pVal = q->data;
	p->pNext = p->pNext->pNext;
	free(q);
	q = NULL;
	return true;
}


