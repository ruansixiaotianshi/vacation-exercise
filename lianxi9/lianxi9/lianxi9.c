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

//�Ż���д�ɺ�������������������
//�����
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
//��ȷ��
//void Swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}//��ָ�뽫�βκ�ʵ�ν�����ϵ
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	if (a < b)
//	{
//		Swap(&a, &b);//ȡ��ַ
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
struct Stu//����Ҫ������
{
	char name[50];
	int age;
	char sex[5];
	char id[50];
};//��Ҫ���Ǽ�;
int main()
{
	struct Stu s1={"wangzeya",18,"Ů","41809050422"};
	struct Stu s2 = { "wangfugui",18,"��","41809050423" };
	printf("%s\n%d\n%s\n%s\n", s1.name, s1.age, s1.sex, s1.id);
	return 0;
}