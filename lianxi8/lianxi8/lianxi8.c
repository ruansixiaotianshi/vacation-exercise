#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//ʮ��������ȡ���������ȱ�ݣ�
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)//�ǵ�дfor ѭ��
//	{
//		if (arr[i] > max)
//
//			max = arr[i];
//	}
//		printf("max=%d\n", max);//printf �ǵ�д��forѭ�����棬}����
//
//	return 0;
//}//����Ǹ����в�ͨ

//������

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];//�����һ����Ϊ���ֵ
	for (i = 1; i < 10; i++)//��i��Ϊ��һ��ʼ
	{
		if (arr[i] > max)

			max = arr[i];
	}
	printf("max=%d\n", max);//printf �ǵ�д��forѭ�����棬}����

	return 0;
}