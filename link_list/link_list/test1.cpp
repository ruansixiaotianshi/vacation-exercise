#define _CRT_SECURE_NO_WARNINGS 

#include "lianbiao.h"
int main()
{
	PNODE pHead = NULL;
	pHead = create_list();  //����һ����ѭ����������������Ϊ��
	traverse_list(pHead);
	return 0;
}