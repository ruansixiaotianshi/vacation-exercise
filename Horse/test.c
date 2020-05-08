#define _CRT_SECURE_NO_WARNINGS 

# include <stdio.h>

int main(void)
{
	int b, m, s; //定义big、middle、small horse；

	for (b = 1; b <= 33; b++) //外层循环控制大马的数量最多在33只（等于34百担货物不够）；
		for (m = 1; m <= 50; m++)//内层循环控制中马的数量；
		{
			s = 100 - b - m;//内外层循环控制下，小马的数量受大、中马数量的制约；
			if (b * 3 + m * 2 + 0.5*s == 100)//每种马*所能驮的担数之和＝100担，0.5是假定1匹马驮半担；
				printf("大马有%d只，中马有%d只，小马有%d只\n", b, m, s);
		}
	return 0;
}
