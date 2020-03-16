#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//int main()
//{
//	int i = 1;
//	do
//	{
//		
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//while后面有;
//	return 0;
//}

//break
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)//一种语法规则（防止因为少写了一个=，编译通过，但是结果不对）
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//while后面有;
//	return 0;
//}
//continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)//一种语法规则（防止因为少写了一个=，编译通过，但是结果不对）
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//while后面有;
//	return 0;
//}//是一个死循环，打印1 2 3 4 之后无法退出
//
////对比while  for 语句
//while  break
//int main()
//{
//	int i = 1;//写成i=1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}//1 2 3 4 
//while continue
//int main()
//{
//	int i = 1;//写成i=1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}//是一个死循环，打印1 2 3 4 之后无法退出
////

//for  break

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}// 1 2 3 4
//for continue
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;
		printf("%d ", i);
	}
	return 0;
}// 1 2 3 4 6 7 8 9 10