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
//	} while (i <= 10);//while������;
//	return 0;
//}

//break
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)//һ���﷨���򣨷�ֹ��Ϊ��д��һ��=������ͨ�������ǽ�����ԣ�
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//while������;
//	return 0;
//}
//continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)//һ���﷨���򣨷�ֹ��Ϊ��д��һ��=������ͨ�������ǽ�����ԣ�
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//while������;
//	return 0;
//}//��һ����ѭ������ӡ1 2 3 4 ֮���޷��˳�
//
////�Ա�while  for ���
//while  break
//int main()
//{
//	int i = 1;//д��i=1;
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
//	int i = 1;//д��i=1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}//��һ����ѭ������ӡ1 2 3 4 ֮���޷��˳�
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