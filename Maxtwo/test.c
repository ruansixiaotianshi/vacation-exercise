#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#define N 10

void max_min(int *a, int m, int n, int *min1, int *min2, int *max1, int *max2);

int main(void)
{

	int a[N] = { 4,8,3,9,7,1,0,6,5,2 };
	printf("一共k个数！k=%d\n", N);
	int i = 0;
	for (i = 1; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	int min1, min2;
	int max1, max2;
	max_min(a, 0, N - 1, &min1, &min2, &max1, &max2);//这四个参数的大小关系为 min1<min2<max2<max1
	printf("min1 = %d min2 = %d\nmax1 = %d max2 = %d\n", min1, min2, max1, max2);
	return 0;
}

void max_min(int *a, int m, int n, int *min1, int *min2, int *max1, int *max2)
{
	int lmin1, lmin2, lmax1, lmax2;
	int rmin1, rmin2, rmax1, rmax2;
	int mid;

	if (m == n)//分治子数组中只有一个数
	{
		*min1 = *min2 = *max1 = *max2 = a[m];
	}

	else//分治子数组中不止一个数
		if (m == n - 1)//分治子数组中仅有2个数
		{
			if (a[m] < a[n])
			{
				*min1 = a[m];
				*min2 = a[n];
				*max1 = a[n];
				*max2 = a[m];
			}
			else
			{
				*min1 = a[n];
				*min2 = a[m];
				*max1 = a[m];
				*max2 = a[n];
			}
		}
		else//分治子数组中有超过2个数
		{
			mid = (m + n) / 2;
			max_min(a, m, mid, &lmin1, &lmin2, &lmax1, &lmax2);
			max_min(a, mid + 1, n, &rmin1, &rmin2, &rmax1, &rmax2);

			//**************************************************
			//确定出数组中最小的两个数
			//**************************************************
			if (lmin1 < rmin1)//左子数组最小数<右子数组最小数
			{
				if (lmin2 < rmin1)
				{
					*min1 = lmin1;
					*min2 = lmin2;
				}
				else
				{
					*min1 = lmin1;
					*min2 = rmin1;
				}
			}
			else//右子数组最小数<左子数组最小数
				if (rmin2 < lmin1)
				{
					*min1 = rmin1;
					*min2 = rmin2;
				}
				else
				{
					*min1 = rmin1;
					*min2 = lmin1;
				}

			//**************************************************
			//确定出数组中最大的两个数
			//**************************************************
			if (lmax1 > rmax1)//左子数组最大数>右子数组最大数
			{
				if (lmax2 > rmax1)
				{
					*max1 = lmax1;
					*max2 = lmax2;
				}
				else
				{
					*max1 = lmax1;
					*max2 = rmax1;
				}
			}
			else//右子数组最大数>左子数组最大数
				if (rmax2 > lmax1)
				{
					*max1 = rmax1;
					*max2 = rmax2;
				}
				else
				{
					*max1 = rmax1;
					*max2 = lmax1;
				}
		}
}