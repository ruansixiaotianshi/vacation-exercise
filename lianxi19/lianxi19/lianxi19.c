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
	//1.生成随机数
	int ret = rand()%100+1;//随机生成的数太大，规范成1_100
	//printf("%d\n", ret);
	//2.猜数字
	

	while (1)
	{
		printf("请猜数字——>：");
		scanf("%d", &num);
		if (num == ret)//记得写成==，否则全都是猜对了
		{
			printf("猜对了！！！\n");
			break;
		}
		else if (num < ret)//no ;
		{
			printf("猜小了\n");
		}
		else
			printf("猜大了\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		munu();
		printf("请选择:——>");
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
			printf("输入错误！");
		}
	} while (input);
	return 0;
}