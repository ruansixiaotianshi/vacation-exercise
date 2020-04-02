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
		printf("����ʧ�ܣ�������ֹ��");
		exit(-1);
	}

	PNODE pTail = pHead;
	pTail->pNext = NULL;
	printf("����������Ҫ���ɵ�����Ľڵ�����len=");
	scanf("%d", &len);

	for (i = 0; i < len; i++)
	{
		printf("�������%d���ڵ��ֵ:", i + 1);
		scanf("%d", &val);

		PNODE pNew= (PNODE)malloc(sizeof(NODE));
		if (NULL == pHead)
		{
			printf("����ʧ�ܣ�������ֹ��");
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

