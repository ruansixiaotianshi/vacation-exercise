#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);//��סд����P
//	return 0;
//}

//int main()
//{
//	int  arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", (*p)[i]);
//		printf("%d ", *((*p)+i));
//
//	}
//	return 0;
//}
//void print(int arr[3][5], int x, int y)//���Ĳ�������Ԫ�صĵ�ַ
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//arr[x][y] = arr[i][j];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

void print(int(*arr)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(arr + i) + j));//arr+i-----����Ԫ�صĵ�ַ��*����---����ÿһ����Ԫ�أ�+j ÿһ�е�j���ĵ�ַ��*��������
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print(arr, 3, 5);
	return 0;
}