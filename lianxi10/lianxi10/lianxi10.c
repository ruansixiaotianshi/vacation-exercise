#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age <= 18)
//	
//		printf("未成年\n");
//	else if (age > 18 && age <= 35)//后面不能加分号
//	{
//		printf("青年\n");
//	}
//	else if (age > 35 && age <= 55)
//	{
//		printf("壮年\n");
//	}
//	else
//	{
//		printf("老年\n");
//	}
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int i = 0;
//	printf("请输入一个操作数：\n");
//	scanf("%d", &i);
//	if (i % 2 == 1)
//	{
//		printf("这是一个奇数\n");
//	}
//	else 
//		printf("这不是奇数\n");
//	return 0;
//}

//输出一到一百之间的奇数

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)//也可以是i+=2(这样用时少)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//switch 语句
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("今天是星期一\n");
		break;
	case 2:
		printf("今天是星期二\n");
		break;
	case 3:
		printf("今天是星期三\n");
		break;
	case 4:
		printf("今天是星期四\n");
		break;
	case 5:
		printf("今天是星期五\n");
		break;
	case 6:
		printf("今天是星期六\n");
		break;
	case 7:
		printf("今天是星期日\n");
		break;
	default:
		printf("输入有误\n");
		break;
	}
	return 0;
}