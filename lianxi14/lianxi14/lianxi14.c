#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <math.h>
//ȫ��
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0/ i;//�ǵøĳ�1.0
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//�Ӽ�����
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;//�ǵøĳ�1.0
		//������һ�����Ǹ�����
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}



