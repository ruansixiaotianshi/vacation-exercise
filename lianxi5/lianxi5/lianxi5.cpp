#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<math.h>
//int main()
//{
//	int code = 0;
//	printf("�Ƿ���ú�ѧϰ 0/1\n");
//	scanf("%d", &code);
//	if (code == 1)
//	{
//		printf("�㼴��ӵ�����õ�δ��\n");
//	}
//	else
//	{
//		printf("���������\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	printf("��ӭ�������������\n");
//	printf("��������ѧ��������д�Ĵ�������\n");
//	scanf("%d", &num);
//	while (num <= 3000)
//	{
//		
//		printf("��������ѧϰ\n");
//		num++;
//	}
//	
//	if (num > 3000)
//		printf("���Ѿ����Գ�ʦ��\n");
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	printf("sum=%d\n", num1+num2);
//	return 0;
//}
//�Ż�Ϊ�ӷ�����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}//��װ�ɺ��������ü���
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������λ��������\n");
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	//int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n");
//	return 0;
//}

//�Ż���
void print_arr(int arr[], int size)//��Ϊ����Ҫ����ֵ��������void
{
	int i = 0;
	for (i = 0; i < size; i++)//�ǵøĳ�<,��Ϊ<10 = <=9
	{
		printf("%d ", arr[i]);

	}
	printf("\n");

}
int main()
{
	//int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr[10] = { 0 };
	int i = 0;
	print_arr(arr, 10);
	/*for (i = 0; i <= 9; i++)//��Ϊ�����˺���������ֱ����
	{
		printf("%d ", arr[i]);

	}
	printf("\n");*/
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);

	}
	/*for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);

	}
	printf("\n");*/
	print_arr(arr, 10);

	return 0;
}

