#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

//void print(int n)
//{
//	if (n > 9)//必须写这个前提条件
//
//	
//		print(n / 10);
//		printf("%d ", n % 10);//不在if包含范围内
//	
//	
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * fac(x - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//int count = 0;
//
//int fib(int x)
//{
//	if (3 == x)
//		count++;
//	if (x <= 2)
//		return 1;
//	else
//		return fib(x - 1) + fib(x - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d\n", count);//发现用递归很多数重复过多，时间效率低
//
//	return 0;
//}



//int count = 0;
int fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 0;
	
	if (x <= 2)
		return 1;
	else
	{
		
		int i = 0;
		for (i = 2; i < x; i++)
		{
			c = a + b;
				a = b;
				b = c;
		}
		return c;


	}
	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("ret=%d\n", ret);
	//printf("count=%d\n", count);//

	return 0;
}

