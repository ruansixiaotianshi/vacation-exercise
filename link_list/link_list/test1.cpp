#define _CRT_SECURE_NO_WARNINGS 

#include "lianbiao.h"
int main()
{
	PNODE pHead = NULL;
	pHead = create_list();  //创建一个非循环单链表，并把它置为空
	traverse_list(pHead);
	return 0;
}