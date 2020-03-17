#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//void print_table(int x)
//{
//	int i = 0;
//	for (i = 1; i <= x; i++)
//	{//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);//写成2d对齐好看
//		}
//		printf("\n");//区分print所在位置，乘完一行就换行
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}

void Init(int arr[], int sz, int set)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = set;
	}
}

void Print(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);//这个地方不用写地址
	}
}

void Empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//printf("%d ", *arr);

	int sz = sizeof(arr) / sizeof(arr[0]);
	//Print(arr, sz);

	//int set = 1;
	//Init(arr, sz, 1);
	////printf("%d ", arr);//打印的不对
	//Print(arr, sz);
	//printf("\n");
	//Empty(arr, sz);
	Print(arr, sz);
	printf("\n");

	Reverse(arr, sz);
	Print(arr, sz);

	return 0;
}