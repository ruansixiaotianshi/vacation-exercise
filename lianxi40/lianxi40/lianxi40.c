#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>

int main()
{
	//一维数组

	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a+0));//4
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4
	printf("%d\n", sizeof(*&a));//16
	printf("%d\n", sizeof(&a+1));//4
	printf("%d\n", sizeof(&a[0]));//4
	printf("%d\n", sizeof(&a[0]+1));//4


	//字符数组

	char arr[] = { 'a','b','c','d','e','f' };
	printf("d\n", sizeof(arr));//6
	printf("d\n", sizeof(arr+0));//4
	printf("d\n", sizeof(*arr));//1
	printf("d\n", sizeof(arr[1]));//1
	printf("d\n", sizeof(&arr));//4
	printf("d\n", sizeof(&arr+1));//4
	printf("d\n", sizeof(&arr[0]+1));//4


	printf("%d\n", strlen(arr));//x
	printf("%d\n", strlen(arr + 0));//x
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//x
	printf("%d\n", strlen(&arr + 1));//x-6
	printf("%d\n", strlen(&arr[0] + 1));//x-1

	char arr[] = "abcdef";
	printf("d\n", sizeof(arr));//7
	printf("d\n", sizeof(arr + 0));//4
	printf("d\n", sizeof(*arr));//1
	printf("d\n", sizeof(arr[1]));//1
	printf("d\n", sizeof(&arr));//4
	printf("d\n", sizeof(&arr + 1));//4
	printf("d\n", sizeof(&arr[0] + 1));//4


	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//x
	printf("%d\n", strlen(&arr[0] + 1));//5

	char *p = "abcdef";
	printf("d\n", sizeof(p));//4
	printf("d\n", sizeof(p+1));//4
	printf("d\n", sizeof(*p));//1
	printf("d\n", sizeof(p[0]));//1
	printf("d\n", sizeof(&p));//4
	printf("d\n", sizeof(&p + 1));//4
	printf("d\n", sizeof(&p[0] + 1));//4


	printf("d\n", strlen(p));//6
	printf("d\n", strlen(p + 1));//5
	printf("d\n", strlen(*p));//err
	printf("d\n", strlen(p[0]));//err
	printf("d\n", strlen(&p));//x
	printf("d\n", strlen(&p + 1));//y
	printf("d\n", strlen(&p[0] + 1));//5

	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0]+1));//4
	printf("%d\n", sizeof(*(a[0] + 1));//4
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(*(a+1)));//16
	printf("%d\n", sizeof(&a[0]+1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16

	return 0;
}

int main()
{
	int a[5] = { 1,2,3,4,5 };

	int*ptr = (int*)(&a + 1);//跳过整个数组
	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
	return 0;
}