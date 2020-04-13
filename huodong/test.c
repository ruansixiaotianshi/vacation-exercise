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
*  s[]：活动的开始时间
*  f[]:活动的结束时间（非降序排列）
*  a[]:0或者1，为0表示活动不被安排，1表示活动被安排
*  k:活动个数
*/

void greedy(int s[], int f[], int a[], int k)
{
	int i;
	int j = 0;
	for (i = 0; i < k; i++)
	{
		a[i] = 0;//初始所有活动都未被安排   
	}
	a[0] = 1;
	printf("第1个活动被安排:1开始，3结束.\n");
	int count = 1;
	for (i = 1; i < k; i++)
	{
		if (s[i] > f[j])
		{
			a[i] = 1;
			j = i;
			count++;
			printf("第%d个活动被安排:", i + 1);
			printf("%d开始,%d结束.\n", s[i], f[i]);

		}
	}
	printf("总计%d个活动被安排\n", count);


}