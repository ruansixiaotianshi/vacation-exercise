#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int a = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 )
		{
			a = a+1;	
		}
		if (i / 10 == 9)
		{
			a = a+1;
		}

	}
	printf("%d\n", a);
	return 0;
}