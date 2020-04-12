#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, i = 0, a[10], j = 0, count = 0;
	printf("请输入一个五位以内的正整数：\n");
	scanf("%d", &num);
	
	while (num >= 10)
	{
		a[i] = num % 10;
		i++;
		printf("%2d", num % 10);
		count++;
		num = num / 10;
		if (num < 10)
		{
			printf("%2d", num);
			count += 1;
			a[i] = num;
		}
	}
	printf("\n");
	for (j = i; j >= 0; j--)
	{
		printf("%2d", a[j]);
	}
	printf("\n");
	printf("所输入的数字是一个%d位数\n", count);
	system("pause");
	return 0;

}
