#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i< 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i< 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i< 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i< 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}

//ÓÅ»¯°æ
void print_arr(int arr[], int sz)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);

	}
	printf("\n");
}
int main()
{
	int arr1[5] = { 1,3,5,7,9 };
	int arr2[5] = { 2,4,6,8,0 };
	int tmp = 0;
	int i = 0;
	print_arr(arr1, 5);
	print_arr(arr2, 5);

	for (i = 0; i < 5; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	print_arr(arr1, 5);
	print_arr(arr2, 5);
	return 0;
}