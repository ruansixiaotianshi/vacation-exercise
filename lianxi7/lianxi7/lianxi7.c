#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//�����м��������������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	scanf("%d%d", &num1, &num2);
//	printf("num1=%d num2=%d\n", num1, num2);
//	tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//	printf("num1=%d num2=%d\n", num1, num2);
//
//	return 0;
//}

//�������м����
//����1����ȱ�ݣ�
//������ݹ�������
int main()
{
	int num1 = 0;
	int num2 = 0;
	//int tmp = 0;
	scanf("%d%d", &num1, &num2);
	printf("num1=%d num2=%d\n", num1, num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	/*tmp = num1;
	num1 = num2;
	num2 = tmp;*/
	printf("num1=%d num2=%d\n", num1, num2);

	return 0;
}

//�����������
//�������ư�λȡ��
//num1=011 ---110 ---101
//num2=101        ---011
int main()
{
	int num1 = 0;
	int num2 = 0;
	//int tmp = 0;
	scanf("%d%d", &num1, &num2);
	printf("num1=%d num2=%d\n", num1, num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	/*tmp = num1;
	num1 = num2;
	num2 = tmp;*/
	printf("num1=%d num2=%d\n", num1, num2);

	return 0;
}