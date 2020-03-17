#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

//int main()
//{
//	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = { 0 };
//	int arr3[10] = { 1 };
//	char arr4[] = "abcdef";
//	char arr5[] = { 'a','b','c','d','e','f' ,'\0'};
//	printf("%s\n", arr4);
//	printf("%s\n", arr5);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		//printf("&arr[%d]=%p\n",i, &arr[i]);
//		printf("&arr[%d]=%p<==>arr+%d=%p\n", i, &arr[i],i,arr+i);
//
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		//printf("&arr[%d]=%p\n",i, &arr[i]);
//		//printf("&arr[%d]=%p<==>arr+%d=%p\n", i, &arr[i], i, arr + i);
//		printf("%d ", *(arr + i));
//	}
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		//printf("&arr[%d]=%p\n",i, &arr[i]);
		//printf("&arr[%d]=%p<==>arr+%d=%p\n", i, &arr[i], i, arr + i);
		printf("%d ", *(p + i));
	}

	return 0;
}