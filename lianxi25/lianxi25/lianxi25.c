#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
//int Prime_number(int x)
//{
//	int y = 0;
//	
//	for (y = 2; y < x; y++)//��2��ʼ
//	{
//		if (0 == x % y)
//		{
//			printf("�ⲻ������\n");
//			break;
//		}
//		else
//		{
//			printf("��������\n");
//		
//			break;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("���������������>:");
//	scanf("%d", &a);
//	Prime_number(a);
//	
//	return 0;
//}


//100---200֮�������
//���Ҵ�ӡ����
//int Prime_number(int x)
//{
//	int y = 0;
//	//int ret = 0;
//	for (y = 2; y < x; y++)//��2��ʼ
//	{
//		//int ret = 0;
//		if (0 == x % y)
//			return 0;//return 0֮�󣬺���Ĵ��벻��ʵ��
//			//break;
//		
//	}
//	return 1;//û�б�Ҫ��дy>=x
//
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int ret = Prime_number(a);
//		if (ret == 1)
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d ", count);
//
//	return 0;
//}
//int is_leap(int x)
//{
//	//int x = 0;
//	
//		/*if ((0 == x % 400) || ((0 == x % 4) && (x % 100 != 0)))
//			return 1;
//
//		else
//		return 0;*/
//
//	return ((0 == x % 400) || ((0 == x % 4) && (x % 100 != 0)));//����д��������
//
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		//int ret = is_leap;
//		if (1 == is_leap(n))//Ҫ������
//		{
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("\ncount=%d ",count);
//
//	return 0;
//}
int BinarySearch(int arr[],int key, int left,int right)
{
	/*int sz = sizeof(arr) / sizeof(arr[0]);
	 left = 0;
	 right = sz - 1;

	int i = 0;
	int mid = left + (right - left) / 2;
	*/
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid]<key)
			left = mid + 1;
		else if (arr[mid]>key)
			right = mid - 1;
		else
			return mid;
	}
	/*if (left > right)
		printf("û�ҵ�\n");
	else
		printf("�ҵ���\n");*/
	return -1;
	
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=BinarySearch(arr, key, 0,sz-1);
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
		printf("�ҵ���\n%d", ret);
	return 0;
}