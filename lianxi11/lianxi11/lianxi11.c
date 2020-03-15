#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<windows.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;//不要忘记写i++
//	}
//	return 0;
//}
//break
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;//不要忘记写i++
//	}
//	return 0;
//}

//continue(这是个错误代码)

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;//不要忘记写i++
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;//初始化
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}//Ctrl+Z可以终止

//for循环打印1——10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//for循环中break语句

//无法打开.exe进行写入
//原因：有程序占用（从新打开工程或者  在win+r中结束进程  或者去DEBUG里面把.exe强删）
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//continue语句

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		Sleep(1000);//因为是死循环，写了一个延时缓冲方便观察
//		printf("%d ", i);
//		i = 0;
//	}
//	return 0;
//}
//死循环
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 13; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2, y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}//5个

int main()
{
	int x = 0;
	int y = 0;
	for (x = 0, y = 0; y < 5, x < 2; ++x, y++)
	{
		printf("hehe\n");
	}
	return 0;
}//2个
//取决于后面那个数是几
