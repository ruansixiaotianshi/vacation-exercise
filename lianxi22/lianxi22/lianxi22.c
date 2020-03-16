#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)//先写出i的范围
	{
		//1.求位数
		int count = 1;
		int sum = 0;
		int tmp = i;//取一个临时变量
		while (tmp / 10)
		{
			
			count++;
			tmp = tmp / 10;
		}
		 tmp = i;//取一个临时变量(不能写成int ,会导致数据丢失)

		while (tmp)
		{

			sum += pow(tmp % 10, count);//余数的count次方
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
		
	}
	return 0;
}