#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#define N 7
void DisplayArr(int arr[][N])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= N; j++)
		{
			printf("%2d ", arr[i][j]);
		}

		printf("\n");
	}
}
int main()
{
	int arr[N][N] = { 0 }; //��ʼ����ά����
	int c = (N+1)/2;
	int i = 0, j = 0;//������к��� 
	int num = 1; // ѭ������1��ʼ
	//int k = 0;
	//ѭ����������������һ���ǿ�
	while  (num<=N*N)
	{
		//���Ҵ�ӡ
		while (j < N &&arr[i][j]==0)
		{
			arr[i][j++] = num++;
		
		}
		
		j--;
		i++;
		while (i < N &&arr[i][j] == 0)
		{
			arr[i][j] = num++;
			i++;
		}

		i--;
		j--;
		//�����ӡ
		while (j >= 0 && arr[i][j] == 0)
		{
			arr[i][j] = num++;
			j--;
		
		
		}
		i--;
		j++;
		//���ϴ�ӡ
		while (i >= 0 && arr[i][j] == 0)
		{
			arr[i][j] = num++;
			i--;
		}
		i++;
		j++;

		//��һ�������ӡ��λ�� 
	
	}
	DisplayArr(arr);
	//system("pause");
	return 0;
}