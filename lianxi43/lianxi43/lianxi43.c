#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
//#include <error.h>
#include <string.h>
//int main()
//{
//	//int arr[10] = { 0 };
//	int *p = (int *)malloc(40);
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	int *p = (int *)calloc(10,sizeof(int));
	int i = 0;
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	for (i = 0; i < 10; i++)
	{
		//*(p + i) = i;
		printf("%d ", *(p+i));
	}
	free(p);
	p = NULL;
	return 0;
}