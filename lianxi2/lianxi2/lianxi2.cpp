#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)//for后面没有；
//	{
//		printf("%d\n", i);
//	}//for后面的句子忘了加{ }
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i%j == 0)
//				break;
//		}//需要满足满足两个条件 1.j<=i-1  2.i%j==0才会跳出，
//		if (j > i-1)//忘记写j>i-1
//		{
//			count++;
//			printf("%d ", i);//计算数的时候还要写{ }
//		}
//	}
//	printf("\n count = %d ", count);
//
//	return 0;
//}
//二次优化
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i /2; j++)
//		{
//			if (i%j == 0)
//				break;
//		}//需要满足满足两个条件 1.j<=i-1  2.i%j==0才会跳出，
//		if (j >=i/2)//忘记写j>=i/2
//		{
//			count++;
//			printf("%d ", i);//计算数的时候还要写{ }
//		}
//	}
//	printf("\n count = %d ", count);
//
//	return 0;
//}
//三次优化
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}//需要满足满足两个条件 1.j<=i-1  2.i%j==0才会跳出，
//		if (j > sqrt(i))//忘记写j>
//		{
//			count++;
//			printf("%d ", i);//计算数的时候还要写{ }
//		}
//	}
//	printf("\n count = %d ", count);
//
//	return 0;
//}
//四次优化
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
				break;
		}//需要满足满足两个条件 1.j<=i-1  2.i%j==0才会跳出，
		if (j > sqrt(i))//忘记写j>
		{
			count++;
			printf("%d ", i);//计算数的时候还要写{ }
		}
	}
	printf("\n count = %d ", count);

	return 0;
}