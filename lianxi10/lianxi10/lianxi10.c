#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age <= 18)
//	
//		printf("δ����\n");
//	else if (age > 18 && age <= 35)//���治�ܼӷֺ�
//	{
//		printf("����\n");
//	}
//	else if (age > 35 && age <= 55)
//	{
//		printf("׳��\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int i = 0;
//	printf("������һ����������\n");
//	scanf("%d", &i);
//	if (i % 2 == 1)
//	{
//		printf("����һ������\n");
//	}
//	else 
//		printf("�ⲻ������\n");
//	return 0;
//}

//���һ��һ��֮�������

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)//Ҳ������i+=2(������ʱ��)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//switch ���
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����������һ\n");
		break;
	case 2:
		printf("���������ڶ�\n");
		break;
	case 3:
		printf("������������\n");
		break;
	case 4:
		printf("������������\n");
		break;
	case 5:
		printf("������������\n");
		break;
	case 6:
		printf("������������\n");
		break;
	case 7:
		printf("������������\n");
		break;
	default:
		printf("��������\n");
		break;
	}
	return 0;
}