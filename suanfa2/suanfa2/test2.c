#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main()
{
	int n;//键盘输入n
	printf("请输入一个数n（1000<n<10000）:");
	scanf("%d", &n);
	
		int div = 5; //除数 
		int ans = 0; //表示末尾0的数目

		while (div <= n)
		{
			ans += n / div;
			div *= 5;
		}

		printf("该相乘数字末尾有%d个0\n", ans);
	
	

	return 0;
}