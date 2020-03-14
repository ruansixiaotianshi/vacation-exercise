#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);//改成2d右对齐好看
		}
		printf("\n");//记得加\n，否则没有换行
	}
	return 0;
}