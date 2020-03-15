#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <math.h>
//全加
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0/ i;//记得改成1.0
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//加减交替
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;//记得改成1.0
		//必须有一个数是浮点数
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}



