#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

//int main()
//{
//	int ret = 5%2;
//	printf("ret=%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	int b = a << 1;
//	printf("b=%d,a=%d\n", b, a);//左移一位，增加二倍；
//	return 0;
//}

//int main()
//{
//	int a = 13;//1101
//	int b = a >> 1;
//		printf("b=%d,a=%d\n", b, a);//b=110
//
//	return 0;
//}


//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001  原码（但是打印的是原码）
//	//11111111111111111111111111111110  反码
//	//11111111111111111111111111111111  补码（内存里）
//	int b = a >> 1;
//	//11111111111111111111111111111111   补码
//	//11111111111111111111111111111110   反码
//	//10000000000000000000000000000001
//		printf("b=%d,a=%d\n", b, a);
//	return 0;
//}


//int main()
//{
//	int a = 2;//10
//	int b = 3;//11
//	int c = a & b;
//	printf("c=%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = -1;//11111111111111111111111111111111
//	int b = -3;//100000000000000000000000000000011
//	int c = a & b;//10000000000000000000000000000011    -3(???????)
//	printf("c=%d\n", c);
//	return 0;
//}
//

//int main()
//{
//	int a = -1;//11111111111111111111111111111111
//	int b = -3;//100000000000000000000000000000011
//	int c = a | b;//10000000000000000000000000000011    -3
//	printf("c=%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;
//	printf("c=%d\n", c);
//}

//int main()
//{
//	int a = -1;//11111111111111111111111111111111
//	int b = 5;//000000000000000000000000000000101
//	int c = a ^ b;//11111111111111111111111111111010   11111111111111111111111111111001    100000000000000000000000000000110
//	printf("c=%d\n", c);
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	short a = 10;
//	int b = 3;
//	printf("%d\n", sizeof(a = b + 5));//sizeof 计算的是a的
//	printf("%d\n", b);//b没做运算
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//1 2 3 4
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//2 3 3 5
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++||++b||d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//1 3 3 4
//	return 0;
//}

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//2 2 3 4
	return 0;
}