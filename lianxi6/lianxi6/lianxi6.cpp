#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int num = 15;//000000000000000000001111  32λ
//	num = num >> 1;//����һλ
//	printf("%d\n", num);
//	return 0;
//}
//int main()
//{
//	int num = 0;//00000000000000000000000000000000  32λ
//	//00000000000000000000000000000000  ԭ��
//	//11111111111111111111111111111111  ���루��λȡ����
//	//11111111111111111111111111111110   ����
//	//10000000000000000000000000000001  ԭ�� -1
//	printf("%d\n", ~num);
//	return 0;
//}

//a++
//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("a=%d\nb=%d\n", a, b);//11  10
//	return 0;
//}
//++a
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a=%d\nb=%d\n", a, b);//11  11
//	return 0;
//}

//a--

//int main()
//{
//	int a = 10;
//	int b = a--;
//	printf("a=%d\nb=%d\n", a, b);//9  10
//	return 0;
//}

//--a
//int main()
//{
//	int a = 10;
//	int b = --a;
//	printf("a=%d\nb=%d\n", a, b);//9  9
//	return 0;
//}
//ǿ��ת��
//int main()
//{
//	int a = (int)3.14;
//	printf("a=%d\n", a);
//	return 0;
//}

//����������
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int max = 0;
//	a > b ? max = a : max = b;
//	printf("max=%d\n", max);
//	return 0;
//}
//static

//void test()
//{
//	 int a = 1;//a�Ǿֲ�����
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	//printf("%d ", i);//����Ҫ��дһ���ӡ��
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	//printf("%d ", i);//����Ҫ��дһ���ӡ��
//	return 0;
//}
//�����ⲿ����
//extern int g_val;
//extern int Add(int a, int b);
//int main()
//{
//	int sum = 0;
//	//printf("%d\n", g_val);
//	sum = Add(2, 3);
//	printf("%d\n", sum);
//
//	return 0;
//}
//#define MAX 1000
//#define STR "����������"
//#define LOOP for (;;){ printf("hehe\n");}
//int main()
//{
//	//int num = MAX;
//	//printf("%d\n", num);
//	//printf("%s\n", STR);
//	LOOP;
//
//	return 0;
//}
//int Add( int x,int  y)
//{
//
//	return x + y;
//}
//#define ADD(x,y) x+y//ADD����û�пո�  ��������ž����ܶ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int sum = Add(a, b);
//	int sum = ADD(a, b);
//
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int num = 10;//4 byte
//	int* p = &num;
//	*p = 20;
//	//0000  0000  0000  0000  0000  0000  0000  1010  32λ
//	//0x0000000a
//	//int num = 0x11223344;
//	//printf("%p\n", &num);//16�������
//	//printf("%x\n", &num);//16�����������
//
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(int*));//4
	printf("%d\n", sizeof(char*));//4
	printf("%d\n", sizeof(double*));//4

	return 0;
}