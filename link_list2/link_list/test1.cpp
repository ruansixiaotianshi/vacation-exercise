#define _CRT_SECURE_NO_WARNINGS 

#include "lianbiao.h"
int main()
{
	PNODE pHead = NULL;
	int val;
	pHead = create_list();  //����һ����ѭ����������������Ϊ��
	traverse_list(pHead);
	insert_link(pHead, 3, 33);
	if (delete_link(pHead, 4, &val))
	{
		printf("ɾ���ɹ�����ɾ����Ԫ��Ϊ:%d\n",val);
	}
	else
	{
		printf("ɾ��ʧ�ܣ�\n");
	}
	traverse_list(pHead);
	int len = length_list(pHead);
	printf("����ĳ���Ϊ��%d\n", len);
	sort_list(pHead);
	traverse_list(pHead);

	return 0;
}