#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

//goto

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("你的电脑将在1分钟之内关机，如果输入“我是猪”，就可以终止\n");
//	printf("请输入：——>");
//	scanf("%s", &input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		printf("你的电脑将在1分钟之内关机，如果输入“我是猪”，就可以终止\n");
		printf("请输入：——>");
		scanf("%s", &input);
		if (0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");
			break;
		}

	}
	return 0;
}
