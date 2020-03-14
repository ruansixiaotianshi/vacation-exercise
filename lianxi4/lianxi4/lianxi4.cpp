#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			if (i % 100 != 0)
//			{
//				
//				printf("%d ", i);
//				count++;
//			}
//			
//		}
//		if (i % 400 == 0)//不能写else
//		{
//			
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\ncount=%d", count);//计数打印要写在for语句结束之后
//	return 0;
//}
//优化
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
		{
			printf("%d ", i);
			count++;
		}
		
	}
	printf("\ncount=%d", count);
	return 0;
}