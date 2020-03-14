#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//创建中间变量，交换数据
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	scanf("%d%d", &num1, &num2);
//	printf("num1=%d num2=%d\n", num1, num2);
//	tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//	printf("num1=%d num2=%d\n", num1, num2);
//
//	return 0;
//}

//不创建中间变量
//方法1（有缺陷）
//如果数据过大会溢出
int main()
{
	int num1 = 0;
	int num2 = 0;
	//int tmp = 0;
	scanf("%d%d", &num1, &num2);
	printf("num1=%d num2=%d\n", num1, num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	/*tmp = num1;
	num1 = num2;
	num2 = tmp;*/
	printf("num1=%d num2=%d\n", num1, num2);

	return 0;
}

//方法二（异或）
//按二进制按位取反
//num1=011 ---110 ---101
//num2=101        ---011
int main()
{
	int num1 = 0;
	int num2 = 0;
	//int tmp = 0;
	scanf("%d%d", &num1, &num2);
	printf("num1=%d num2=%d\n", num1, num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	/*tmp = num1;
	num1 = num2;
	num2 = tmp;*/
	printf("num1=%d num2=%d\n", num1, num2);

	return 0;
}