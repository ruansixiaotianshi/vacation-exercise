#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include "contact.h"
void menu()
{
	printf("*******************************************\n");
	printf("***** 1. add             2. del     *******\n");
	printf("***** 3. search          4.modify   *******\n");
	printf("***** 5. show            6. empty   *******\n");
	printf("***** 7. sort            0. exit    *******\n");
	printf("*******************************************\n");
	
}
void test()
{
	int input = 0;
	Contact con;
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ�񡪡�>:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("�˳�ͨѶ¼��");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}