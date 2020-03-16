#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	//1.上半部分
	for (i = 0; i < line; i++)//<line,就是说循环line 次（每一行是一个逻辑，循环line 次）
	{
		//一次循环是打印一行
		int j = 0;
		//1.打印空格
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//2.打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//2.下半部分
	for (i = 0; i < line - 1; i++)
	{
		//1.打印空格
		int j = 0;
		for (j = 0; j <=i; j++)//明白为什么
		{
			printf(" ");
		}
		//2.打印*  //如果是7行的话， 
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)//明白为什么
			//接下来一行 2*6-1  //2（line-1-i）-1// 2*5
		{
			printf("*");
		}
		printf("\n");
	}
	return 0; 
}