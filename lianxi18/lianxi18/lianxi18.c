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

//��ʱ̫��������Ҫ�Ż�

//int main()
//{
//	int j = 0;
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	for (j = 1; j <= 10; j++)
//	{
//		ret = 1;//����дret=1;
//		//������ӣ���һֱ����ǰ�ۼƵĽ��
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

//�Ż���

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
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//ע�⣡����-1
//		int mid = left + (right - left) / 2;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] < key)//ע�⣡������������
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
//	printf("û�ҵ�\n");
//	else
//		printf("�ҵ���\n");
//
//	return 0;
//}

//�Ż��棨д������
int BinarySearch(int arr[], int key, int sz)
{
	int left = 0;
	int right = sz - 1;//ע�⣡����-1
	//�ǵð�������ˣ���Ҫ����һ�����룬�������ѭ��
	int mid = left + (right - left) / 2;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] < key)//ע�⣡������������
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
		printf("û�ҵ�\n");
	else
		printf("�ҵ��� %d\n", ret);

	return 0;
}