#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int i = 10;

	while (i*i < 1000)
	{
		int num = i * i;
		int arr[10] = { 0 };//记录每一位的数字出现的次数

		while (num)//直到mod 10为0，跳出循环
		{
			int j = num % 10;//mod 10,计算每一位，并存入数组
			arr[j]++;

			if (arr[j] > 1)//出现超过一次，则打印
			{
				printf("%d  ", i*i);
				break;
			}
			num /= 10;
		}
		i++;
	}
	return 0;
}