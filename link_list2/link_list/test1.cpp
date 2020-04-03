#define _CRT_SECURE_NO_WARNINGS 

#include "lianbiao.h"
int main()
{
	PNODE pHead = NULL;
	int val;
	pHead = create_list();  //创建一个非循环单链表，并把它置为空
	traverse_list(pHead);
	insert_link(pHead, 3, 33);
	if (delete_link(pHead, 4, &val))
	{
		printf("删除成功！您删除的元素为:%d\n",val);
	}
	else
	{
		printf("删除失败！\n");
	}
	traverse_list(pHead);
	int len = length_list(pHead);
	printf("链表的长度为：%d\n", len);
	sort_list(pHead);
	traverse_list(pHead);

	return 0;
}