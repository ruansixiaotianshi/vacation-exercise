#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
long  fun(char *s)
{
	int i, t;
	long sum = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] <= '9')
			t = s[i] - '0';
		else
			t = s[i] - 'a' + 10;
		sum = sum * 16 + t;
	}
	return sum;
}

int main()
{
	char *s = "a23cd";
	printf("转换成十进制为：%d\n", fun(s));
	return 0;
}