#ifndef _ARR_H_
#define _ARR_H
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct Arr
{
	int *pBase;
	int len;
	int cnt;
};

void init_arr(struct Arr* pArr, int length);
bool append_arr(struct Arr* pArr, int val);
bool insert_arr(struct Arr* pArr, int pos,int val);
bool delete_arr(struct Arr* pArr, int pos, int *pval);
int get();
bool is_empty(struct Arr* pArr);
bool is_full(struct Arr* pArr);
void sort_arr(struct Arr* pArr);
void show_arr(struct Arr* pArr);
void inversion_arr(struct Arr* pArr);

#endif // !_ARR_H_

