#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//优化（写成函数，两个变量交换）
//错误版
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	if (a < b)
//	{
//		Swap(a, b);
//		/*int tmp = a;
//		a = b;
//		b = tmp;*/
//	}
//	if (a < c)
//	{
//		Swap(a, c);
//
//		/*int tmp = a;
//		a = c;
//		c = tmp;*/
//	}
//	if (b < c)
//	{
//		
//		Swap(b, c);
//		/*int tmp = b;
//		b = c;
//		c = tmp;*/
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//正确的
//void Swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}//用指针将形参和实参建立联系
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	if (a < b)
//	{
//		Swap(&a, &b);//取地址
//		/*int tmp = a;
//		a = b;
//		b = tmp;*/
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//
//		/*int tmp = a;
//		a = c;
//		c = tmp;*/
//	}
//	if (b < c)
//	{
//
//		Swap(&b, &c);
//		/*int tmp = b;
//		b = c;
//		c = tmp;*/
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
struct Stu//不需要加括号
{
	char name[50];
	int age;
	char sex[5];
	char id[50];
};//不要忘记加;
int main()
{
	struct Stu s1={"wangzeya",18,"女","41809050422"};
	struct Stu s2 = { "wangfugui",18,"男","41809050423" };
	printf("%s\n%d\n%s\n%s\n", s1.name, s1.age, s1.sex, s1.id);
	return 0;
}