#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>  
#include <malloc.h>

void greedy(int s[], int f[], int a[], int k);

int main()
{

	int s[] = { 1,2,0,5,3,5,6,8,8,2,12,15 };
	int f[] = { 3,4,5,7,8,9,10,11,12,13,14,18 };
	int k;
	k = sizeof(f) / sizeof(f[0]);
	int *a;
	a = (int*)malloc(sizeof(int)*k);

	greedy(s, f, a, k);
	//system("PAUSE");

}

/*
*  s[]����Ŀ�ʼʱ��
*  f[]:��Ľ���ʱ�䣨�ǽ������У�
*  a[]:0����1��Ϊ0��ʾ��������ţ�1��ʾ�������
*  k:�����
*/

void greedy(int s[], int f[], int a[], int k)
{
	int i;
	int j = 0;
	for (i = 0; i < k; i++)
	{
		a[i] = 0;//��ʼ���л��δ������   
	}
	a[0] = 1;
	printf("��1���������:1��ʼ��3����.\n");
	int count = 1;
	for (i = 1; i < k; i++)
	{
		if (s[i] > f[j])
		{
			a[i] = 1;
			j = i;
			count++;
			printf("��%d���������:", i + 1);
			printf("%d��ʼ,%d����.\n", s[i], f[i]);

		}
	}
	printf("�ܼ�%d���������\n", count);


}