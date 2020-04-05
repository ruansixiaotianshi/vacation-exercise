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
	int arr[N][N] = { 0 }; //初始化二维数组
	int c = (N+1)/2;
	int i = 0, j = 0;//数组的行和列 
	int num = 1; // 循环数从1开始
	//int k = 0;
	//循环结束的条件是下一步非空
	while  (num<=N*N)
	{
		//向右打印
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
		//向左打印
		while (j >= 0 && arr[i][j] == 0)
		{
			arr[i][j] = num++;
			j--;
		
		
		}
		i--;
		j++;
		//向上打印
		while (i >= 0 && arr[i][j] == 0)
		{
			arr[i][j] = num++;
			i--;
		}
		i++;
		j++;

		//下一步向左打印的位置 
	
	}
	DisplayArr(arr);
	//system("pause");
	return 0;
}