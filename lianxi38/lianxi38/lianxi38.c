#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

enum option
{
	EXIT,
	ADD,
	SUB,
	MUL,
	DIV
};
void menu()
{
	printf("******************************************\n");
	printf("*******   1. add       2. sub    *********\n");
	printf("*******   3. mul       4. div    *********\n");
	printf("*******   0. exit                *********\n");
	printf("******************************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x -y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int ret = 0;

	do
	{

		printf("请选择——>:\n");
		menu();
		int x = 0;
		int y = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两位操作数——>:\n");
			scanf("%d%d", &x, &y);
			ret = Add(x, y);
         printf("ret=%d\n", ret);

			break;
		case 2:
			printf("请输入两位操作数——>:\n");
			scanf("%d%d", &x, &y);
			ret = Sub(x, y);
printf("ret=%d\n", ret);

			break;
		case 3:
			printf("请输入两位操作数——>:\n");
			scanf("%d%d", &x, &y);
			ret = Mul(x, y);
printf("ret=%d\n", ret);

			break;
		case 4:
			printf("请输入两位操作数——>:\n");
			scanf("%d%d", &x, &y);
			ret = Div(x, y);
printf("ret=%d\n", ret);

			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误！请重新输入：");
			break;
		}


	} while (input);

	return 0;
}

//优化一（加入了函数指针数组）(转移表)
int main()
{
	int input = 0;
	int ret = 0;
	int(*p_fun[5])(int,int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();

		printf("请选择——>:\n");
		int x = 0;
		int y = 0;
		scanf("%d", &input);
		if (input>=1&&input<=4)
		{
			printf("请输入两位操作数——>:\n");
			scanf("%d%d", &x, &y);
			ret = p_fun[input](x, y);
			printf("ret=%d\n", ret);
		}
		else
		{
			printf("退出游戏\n");
		}


	} while (input);

	return 0;
}


//二次优化

void Calc(int (*p_fun)(int,int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两位操作数——>:\n");
	scanf("%d%d", &x, &y);
	ret=  p_fun(x, y);
	printf("ret=%d\n", ret);
}
int main()
{
	int input = 0;
	int ret = 0;

	do
	{

		printf("请选择——>:\n");
		menu();
		int x = 0;
		int y = 0;
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Calc(Add);

			break;
		case SUB:
			Calc(Sub);
			break;
		case MUL:
			Calc(Mul);
			break;
		case DIV:
			Calc(Div);
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误！请重新输入：");
			break;
		}


	} while (input);

	return 0;
}
