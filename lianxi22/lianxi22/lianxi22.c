#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)//��д��i�ķ�Χ
	{
		//1.��λ��
		int count = 1;
		int sum = 0;
		int tmp = i;//ȡһ����ʱ����
		while (tmp / 10)
		{
			
			count++;
			tmp = tmp / 10;
		}
		 tmp = i;//ȡһ����ʱ����(����д��int ,�ᵼ�����ݶ�ʧ)

		while (tmp)
		{

			sum += pow(tmp % 10, count);//������count�η�
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
		
	}
	return 0;
}