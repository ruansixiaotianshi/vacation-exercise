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
//		if (i % 400 == 0)//����дelse
//		{
//			
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\ncount=%d", count);//������ӡҪд��for������֮��
//	return 0;
//}
//�Ż�
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