#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//十个数里面取最大数（有缺陷）
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)//记得写for 循环
//	{
//		if (arr[i] > max)
//
//			max = arr[i];
//	}
//		printf("max=%d\n", max);//printf 记得写在for循环后面，}后面
//
//	return 0;
//}//如果是负数行不通

//方法二

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];//假设第一个数为最大值
	for (i = 1; i < 10; i++)//把i改为从一开始
	{
		if (arr[i] > max)

			max = arr[i];
	}
	printf("max=%d\n", max);//printf 记得写在for循环后面，}后面

	return 0;
}