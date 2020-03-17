#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include"Add.h"
# pragma comment(lib,"Add.lib")
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}
