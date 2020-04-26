#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#define N 10
int main() {
	int sum = 2;
	for (int i = 1; i < N; ++i) {
		sum = 2 * (sum + 2);
	}
	printf("第一天有%d个桃子\n", sum);
	return 0;
}
