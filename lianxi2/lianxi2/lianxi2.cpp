#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)//for����û�У�
//	{
//		printf("%d\n", i);
//	}//for����ľ������˼�{ }
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
//		}//��Ҫ���������������� 1.j<=i-1  2.i%j==0�Ż�������
//		if (j > i-1)//����дj>i-1
//		{
//			count++;
//			printf("%d ", i);//��������ʱ��Ҫд{ }
//		}
//	}
//	printf("\n count = %d ", count);
//
//	return 0;
//}
//�����Ż�
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
//		}//��Ҫ���������������� 1.j<=i-1  2.i%j==0�Ż�������
//		if (j >=i/2)//����дj>=i/2
//		{
//			count++;
//			printf("%d ", i);//��������ʱ��Ҫд{ }
//		}
//	}
//	printf("\n count = %d ", count);
//
//	return 0;
//}
//�����Ż�
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
//		}//��Ҫ���������������� 1.j<=i-1  2.i%j==0�Ż�������
//		if (j > sqrt(i))//����дj>
//		{
//			count++;
//			printf("%d ", i);//��������ʱ��Ҫд{ }
//		}
//	}
//	printf("\n count = %d ", count);
//
//	return 0;
//}
//�Ĵ��Ż�
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
		}//��Ҫ���������������� 1.j<=i-1  2.i%j==0�Ż�������
		if (j > sqrt(i))//����дj>
		{
			count++;
			printf("%d ", i);//��������ʱ��Ҫд{ }
		}
	}
	printf("\n count = %d ", count);

	return 0;
}