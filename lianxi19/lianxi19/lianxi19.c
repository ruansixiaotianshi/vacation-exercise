#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void munu()
{
	printf("#############################\n");
	printf("######## 1. play ############\n");
	printf("######## 0. exit  ############\n");
	printf("##############################\n");
}

void game()
{
	int num = 0;
	//1.���������
	int ret = rand()%100+1;//������ɵ���̫�󣬹淶��1_100
	//printf("%d\n", ret);
	//2.������
	

	while (1)
	{
		printf("������֡���>��");
		scanf("%d", &num);
		if (num == ret)//�ǵ�д��==������ȫ���ǲ¶���
		{
			printf("�¶��ˣ�����\n");
			break;
		}
		else if (num < ret)//no ;
		{
			printf("��С��\n");
		}
		else
			printf("�´���\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		munu();
		printf("��ѡ��:����>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			break;
		}
		default:
			printf("�������");
		}
	} while (input);
	return 0;
}