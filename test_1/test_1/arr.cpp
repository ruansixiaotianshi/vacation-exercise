#define _CRT_SECURE_NO_WARNINGS 
#include "arr.h"
void init_arr(struct Arr* pArr,int length)
{
	pArr->pBase = (int*)malloc(sizeof(int) * length);
	if (NULL == pArr->pBase)
	{
		printf("动态内存分配失败！\n");
		exit(-1);//终止整个程序
	}
	else
	{
		pArr->len = length;
		pArr->cnt = 0;
	}
	return ;
}
bool append_arr(struct Arr* pArr, int val)
{
	if (is_full(pArr))
		return false;
	else
	{
		pArr->pBase[pArr->cnt] = val;
		(pArr->cnt)++;
		return true;
	}
}
bool insert_arr(struct Arr* pArr, int pos, int val)
{
	if (is_full(pArr))
		return false;
	if(pos<1||pos>pArr->len+1)
		return false;

	int i;
	for (i = pArr->cnt - 1; i >= pos - 1; i--)
	{
		pArr->pBase[i + 1] = pArr->pBase[i];
	}
	pArr->pBase[pos - 1] = val;
	(pArr->cnt)++;
	return true;

}
bool delete_arr(struct Arr* pArr, int pos, int *pval)
{
	int i;
	if (is_full(pArr))
		return false;
	if (pos<1 || pos>pArr->cnt)
		return false;
	*pval = pArr->pBase[pos - 1];
	for (i = pos; i < pArr->cnt; i++)
	{
		pArr->pBase[i - 1] = pArr->pBase[i];
	}
	(pArr->cnt)--;
	return true;

}
int get();
bool is_empty(struct Arr* pArr)
{
	if (0 == pArr->cnt)
		return true;
	else
		return false;
}
bool is_full(struct Arr* pArr)
{
	if (pArr->cnt == pArr->len)
		return true;
	else
		return false;
}
void sort_arr(struct Arr* pArr)
{
	int i, j, t;
	for (i = 0; i < pArr->cnt; i++)
	{
		for (j = i + 1; j < pArr->cnt; j++)
		{
			if (pArr->pBase[i] > pArr->pBase[j])
			{
				t = pArr->pBase[i];
				pArr->pBase[i] = pArr->pBase[j];
				pArr->pBase[j] = t;
			}
		}
	}
}
void show_arr(struct Arr* pArr)
{
	if (is_empty(pArr))
	{
		printf("数组为空!\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < pArr->cnt; i++)
		{
			printf("%d ", pArr->pBase[i]);
		}
	}
}
void inversion_arr(struct Arr* pArr)
{
	int i = 0;
	int j = pArr->cnt - 1;
	int t;
	while (i < j)
	{
		t = pArr->pBase[i];
		pArr->pBase[i] = pArr->pBase[j];
		pArr->pBase[j] = t;
		++i;
		j--;

	}
	return;
}