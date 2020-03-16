#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 0;
//	
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

//用时太长，还需要优化

//int main()
//{
//	int j = 0;
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	for (j = 1; j <= 10; j++)
//	{
//		ret = 1;//必须写ret=1;
//		//如果不加，就一直是以前累计的结果
//		for (i = 1; i <= j; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}

//优化版

//int main()
//{
//
//	int j = 0;
//		int ret = 1;
//		int i = 0;
//		int sum = 0;
//		for (j = 1; j <= 10; j++)
//		{
//			
//			ret = ret * j;
//			sum = sum + ret;
//		}
//		
//		printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//注意！！！-1
//		int mid = left + (right - left) / 2;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] < key)//注意！！！！是数组
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//		
//	}
//	
//	if(left>right)
//	printf("没找到\n");
//	else
//		printf("找到了\n");
//
//	return 0;
//}

//优化版（写函数）
int BinarySearch(int arr[], int key, int sz)
{
	int left = 0;
	int right = sz - 1;//注意！！！-1
	//记得把这里改了，不要用上一个代码，否则会死循环
	int mid = left + (right - left) / 2;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] < key)//注意！！！！是数组
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}

	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]) ;
	int ret = 0;
	ret = BinarySearch(arr, key, sz);
	if (-1 == ret)
		printf("没找到\n");
	else
		printf("找到了 %d\n", ret);

	return 0;
}