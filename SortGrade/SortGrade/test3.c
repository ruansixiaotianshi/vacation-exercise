#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a ,b,c,d,e;
	
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			if (a != b)
			
				for (c = 1; c <= 5; c++)
				{
					if (c != a && c != b)
					
						for (d = 1; d <= 5; d++)
						{
							if (d != a && d != b && d != c)
							{
								e = 15 - a - b - c - d;

								if ((3 == b) + (5 == c) == 1 && (2 == d) + (4 == e) == 1 && (1 == b) + (4 == e) == 1 && (1 == c) + (2 == b) == 1 && (2 == d) + (3 == a) == 1)

									//printf("���˵����ηֱ�Ϊ��\n");
									printf("A�ǵ�%d��\nB�ǵ�%d��\nC�ǵ�%d��\nD�ǵ�%d��\nE�ǵ�%d��\n", a, b, c, d, e);

							}
						}


					

				}
			

		}
	}
	return 0;
}
									

