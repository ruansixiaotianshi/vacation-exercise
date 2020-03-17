#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = "hello wzy";
//	strcpy(arr1,arr2 );
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	//char arr2[20] = "hello wzy";
//	char arr2[20] = {'w','z','y','\0'};
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//memset


//int main()
//{
//	char arr[] = "hello wzy";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//出现运行时错误
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//	printf("\n");
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d", a, b);
//
//	Swap(a, b);
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}

//改正版

void Swap(int *px, int *py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
	printf("\n");
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d", a, b);

	Swap(&a, &b);//这样，实参才能赋值给形参
	printf("a=%d b=%d", a, b);

	return 0;
}