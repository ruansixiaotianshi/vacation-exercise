#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

//int main()
//{
//	int arr[3][4] = { 0 };
//	int arr1[3][4] = { 1,2,3,4};
//	int arr2[3][4] = { {1,2},{3,4} };
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j + 1;
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//		for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j + 1;
//		}
//	}
//		for (i = 0; i < 12; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	return 0;
//}

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//冒泡排序
	for (i = 0; i < sz-1; i++)
	{//一个数多少趟
		int j = 0;
		int flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{//两个数比较的次数
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (0 == flag)
			break;
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);

	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}