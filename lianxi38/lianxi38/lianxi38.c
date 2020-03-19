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

		printf("��ѡ�񡪡�>:\n");
		menu();
		int x = 0;
		int y = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������λ����������>:\n");
			scanf("%d%d", &x, &y);
			ret = Add(x, y);
         printf("ret=%d\n", ret);

			break;
		case 2:
			printf("��������λ����������>:\n");
			scanf("%d%d", &x, &y);
			ret = Sub(x, y);
printf("ret=%d\n", ret);

			break;
		case 3:
			printf("��������λ����������>:\n");
			scanf("%d%d", &x, &y);
			ret = Mul(x, y);
printf("ret=%d\n", ret);

			break;
		case 4:
			printf("��������λ����������>:\n");
			scanf("%d%d", &x, &y);
			ret = Div(x, y);
printf("ret=%d\n", ret);

			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룺");
			break;
		}


	} while (input);

	return 0;
}

//�Ż�һ�������˺���ָ�����飩(ת�Ʊ�)
int main()
{
	int input = 0;
	int ret = 0;
	int(*p_fun[5])(int,int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();

		printf("��ѡ�񡪡�>:\n");
		int x = 0;
		int y = 0;
		scanf("%d", &input);
		if (input>=1&&input<=4)
		{
			printf("��������λ����������>:\n");
			scanf("%d%d", &x, &y);
			ret = p_fun[input](x, y);
			printf("ret=%d\n", ret);
		}
		else
		{
			printf("�˳���Ϸ\n");
		}


	} while (input);

	return 0;
}


//�����Ż�

void Calc(int (*p_fun)(int,int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("��������λ����������>:\n");
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

		printf("��ѡ�񡪡�>:\n");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룺");
			break;
		}


	} while (input);

	return 0;
}
