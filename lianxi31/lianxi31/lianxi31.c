#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("******* 1.  play  ******\n");
	printf("******* 0.  exit  ******\n");
	printf("************************\n");

}

void game()
{
	char ret = 0;
	printf("����Ϸ:\n");
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//ret = IsWin();

		Computermove(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != ' ')
			break;
		DisplayBoard(board, ROW, COL);

		Playermove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
			break;
		DisplayBoard(board, ROW, COL);

}
	if (ret == 'X')
	{
		printf("����Ӯ\n");
	}
	else if (ret == '0')
	{
		printf("���Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);


}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ�񡪡�>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
	
			game();
		break; 

		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}