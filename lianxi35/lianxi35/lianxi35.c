#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
//typedef struct Student
//{
//	char name[20];
//	int age;
//	char sex[5];
//}Student;
//int main()
//{
//	Student s = { "����",18,"��" };
//	printf("%s %d %s", s.name, s.age, s.sex);
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//struct Node
//{
//	int z;
//	struct Point p;
//	struct Node* next;
//};
//
//int main()
//{
//	struct Node n = { 1,{5,6},NULL };
//	printf("%d %d", n.p.x, n.p.y);
//	return 0;
//}
//struct P
//{
//	char name[20];
//	int age;
//};
//void print1(struct P x)
//{
//	printf("%s %d\n", x.name, x.age);
//}
//void print2(struct P* px)
//{
//	printf("%s %d\n", px->name, px->age);
//}
//
//int main()
//{
//	struct P n = { "zhangsan",18 };
//	print1(n);
//	print2(&n);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;//�ǵ��ٰ�ret=1
//		for (i = 1; i <= j; i++)//ѭ����1��ʼ//����дj
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	
//	return 0;
//}

//�Ż�

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		//ret = 1;//�ǵ��ٰ�ret=1
//		//for (i = 1; i <= j; i++)//ѭ����1��ʼ//����дj
//		//{
//			ret = ret * j;
//		//}
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "Hello,wzy";
//	strcpy(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr[20] = "abcdef";
//	char* p = "wzy";
//	strcpy(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}


//��װ�ɺ���
//void my_strcpy(char* str, char* src)
//{
//	while (*src!='\0')
//	{
//		*str = *src;
//		*str++;
//		*src++;
//	}
//	*str = *src;//�ǵ�д��һ��
//
//
//}
//�Ż�һ
//void my_strcpy(char* str, char* src)
//{
//	while (*src != '\0')
//	{
//		*str++ = *src++;
//		
//	}
//	*str = *src;//�ǵ�д��һ��
//
//
//}
//�Ż���

//void my_strcpy(char* str, char* src)
//{
//	while (*str++ = *src++)
//	{
//		;
//
//	}
//	*str = *src;//�ǵ�д��һ��
//
//
//}
//#define NDEBUG
#include<assert.h>
//void my_strcpy(char* str, char* src)
//{
//	assert(*str != NULL);
//	assert(*src != NULL);
//
//	while (*str++ = *src++)
//	{
//		;
//
//	}
//	*str = *src;//�ǵ�д��һ��
//
//
//}

//�Ż���

//char* my_strcpy(char* str, const char* src)
//{
//	assert(*str != NULL);
//	assert(*src != NULL);
//
//	while (*str++ = *src++)
//	{
//		;
//
//	}
//	*str = *src;//�ǵ�д��һ��
//	return str;
//
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	char* p = "wzy";
//	my_strcpy(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}
int my_strlen(const char* str)
{
	int count = 0;

	assert(*str != NULL);
	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char *p = "abcdef";
	int len = my_strlen(p);
	printf("len=%d\n", len);
	return 0;
}