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
	printf("请输入一个数：");
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
		printf("这个数不能被4，7，9任一个整数除\n");
		break;
	case 1:
		printf("这个数只能被其中一个数整除\n");
		print(num);
		printf("\n");
		break;
	case 2:
		printf("这个数能同时被其中的2个数整除\n");
		print(num);
		printf("\n");
		break;
	case 3:
		printf("这个数能同时被4，7，9整除");
		break;
	default:
		exit(0);
		break;
	}
	return 0;
}
