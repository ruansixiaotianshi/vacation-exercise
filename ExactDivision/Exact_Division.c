#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>

void print(int num)
{
	if (num % 4 == 0) printf("4 ");
	if (num % 7 == 0) printf("7 ");
	if (num % 9 == 0) printf("9 ");
}
int main()
{
	int num;
	int count = 0;
	printf("������һ������");
	scanf("%d", &num);
	if (num % 4 == 0)
	{
		count++;
	}
	if (num % 7 == 0)
	{
		count++;
	}
	if (num % 9 == 0)
	{
		count++;
	}
	switch (count)
	{
	case 0:
		printf("��������ܱ�4��7��9��һ��������\n");
		break;
	case 1:
		printf("�����ֻ�ܱ�����һ��������\n");
		print(num);
		printf("\n");
		break;
	case 2:
		printf("�������ͬʱ�����е�2��������\n");
		print(num);
		printf("\n");
		break;
	case 3:
		printf("�������ͬʱ��4��7��9����");
		break;
	default:
		exit(0);
		break;
	}
	return 0;
}
