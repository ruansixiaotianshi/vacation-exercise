#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int i = 10;

	while (i*i < 1000)
	{
		int num = i * i;
		int arr[10] = { 0 };//��¼ÿһλ�����ֳ��ֵĴ���

		while (num)//ֱ��mod 10Ϊ0������ѭ��
		{
			int j = num % 10;//mod 10,����ÿһλ������������
			arr[j]++;

			if (arr[j] > 1)//���ֳ���һ�Σ����ӡ
			{
				printf("%d  ", i*i);
				break;
			}
			num /= 10;
		}
		i++;
	}
	return 0;
}