#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("Move dish %d from %c to %c\n", n, A, B);

	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("Move dish %d from %c to %c\n", n, A, B);

		hanoi(n - 1, C, B, A);
	}
}

int main()
{
	int n = 64;
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
