#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main()
{
	int n;//��������n
	printf("������һ����n��1000<n<10000��:");
	scanf("%d", &n);
	
		int div = 5; //���� 
		int ans = 0; //��ʾĩβ0����Ŀ

		while (div <= n)
		{
			ans += n / div;
			div *= 5;
		}

		printf("���������ĩβ��%d��0\n", ans);
	
	

	return 0;
}