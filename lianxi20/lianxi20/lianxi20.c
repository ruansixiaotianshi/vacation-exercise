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
//	printf("��ĵ��Խ���1����֮�ڹػ���������롰���������Ϳ�����ֹ\n");
//	printf("�����룺����>");
//	scanf("%s", &input);
//	if (0 == strcmp(input, "������"))
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
		printf("��ĵ��Խ���1����֮�ڹػ���������롰���������Ϳ�����ֹ\n");
		printf("�����룺����>");
		scanf("%s", &input);
		if (0 == strcmp(input, "������"))
		{
			system("shutdown -a");
			break;
		}

	}
	return 0;
}
