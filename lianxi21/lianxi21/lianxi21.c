#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	//1.�ϰ벿��
	for (i = 0; i < line; i++)//<line,����˵ѭ��line �Σ�ÿһ����һ���߼���ѭ��line �Σ�
	{
		//һ��ѭ���Ǵ�ӡһ��
		int j = 0;
		//1.��ӡ�ո�
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//2.��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//2.�°벿��
	for (i = 0; i < line - 1; i++)
	{
		//1.��ӡ�ո�
		int j = 0;
		for (j = 0; j <=i; j++)//����Ϊʲô
		{
			printf(" ");
		}
		//2.��ӡ*  //�����7�еĻ��� 
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)//����Ϊʲô
			//������һ�� 2*6-1  //2��line-1-i��-1// 2*5
		{
			printf("*");
		}
		printf("\n");
	}
	return 0; 
}