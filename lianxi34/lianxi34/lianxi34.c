#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 5;//5不需要加‘’
//	}
//	print(arr, sz);//arr前没有*
//	return 0;
//}

//int main()
//{
//	char* arr1[3] = { "zhangsan","lisi","wangwu" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr1[i]);
//	}
//	
//	return 0;
//}
//void print(char *arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr1[i]);
//	}
//}
//int main()
//{
//	char* arr1[3] = { "zhangsan","lisi","wangwu" };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, sz);
//	
//	
//	return 0;
//}

//也可写成二级指针
void print(char* *arr1, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s\n", arr1[i]);
	}
}
int main()
{
	char* arr1[3] = { "zhangsan","lisi","wangwu" };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	print(arr1, sz);


	return 0;
}

