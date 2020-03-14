#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<math.h>
//int main()
//{
//	int code = 0;
//	printf("是否想好好学习 0/1\n");
//	scanf("%d", &code);
//	if (code == 1)
//	{
//		printf("你即将拥有美好的未来\n");
//	}
//	else
//	{
//		printf("那你就凉了\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	printf("欢迎来到代码的世界\n");
//	printf("请输入入学至今你所写的代码行数\n");
//	scanf("%d", &num);
//	while (num <= 3000)
//	{
//		
//		printf("继续加油学习\n");
//		num++;
//	}
//	
//	if (num > 3000)
//		printf("你已经可以出师啦\n");
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	printf("sum=%d\n", num1+num2);
//	return 0;
//}
//优化为加法函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}//封装成函数，调用即可
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两位操作数：\n");
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	//int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n");
//	return 0;
//}

//优化版
void print_arr(int arr[], int size)//因为不需要返回值，所以用void
{
	int i = 0;
	for (i = 0; i < size; i++)//记得改成<,因为<10 = <=9
	{
		printf("%d ", arr[i]);

	}
	printf("\n");

}
int main()
{
	//int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr[10] = { 0 };
	int i = 0;
	print_arr(arr, 10);
	/*for (i = 0; i <= 9; i++)//因为调用了函数，所以直接用
	{
		printf("%d ", arr[i]);

	}
	printf("\n");*/
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);

	}
	/*for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);

	}
	printf("\n");*/
	print_arr(arr, 10);

	return 0;
}

