#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#define N 10

void max_min(int *a, int m, int n, int *min1, int *min2, int *max1, int *max2);

int main(void)
{

	int a[N] = { 4,8,3,9,7,1,0,6,5,2 };
	printf("һ��k������k=%d\n", N);
	int i = 0;
	for (i = 1; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	int min1, min2;
	int max1, max2;
	max_min(a, 0, N - 1, &min1, &min2, &max1, &max2);//���ĸ������Ĵ�С��ϵΪ min1<min2<max2<max1
	printf("min1 = %d min2 = %d\nmax1 = %d max2 = %d\n", min1, min2, max1, max2);
	return 0;
}

void max_min(int *a, int m, int n, int *min1, int *min2, int *max1, int *max2)
{
	int lmin1, lmin2, lmax1, lmax2;
	int rmin1, rmin2, rmax1, rmax2;
	int mid;

	if (m == n)//������������ֻ��һ����
	{
		*min1 = *min2 = *max1 = *max2 = a[m];
	}

	else//�����������в�ֹһ����
		if (m == n - 1)//�����������н���2����
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
		else//�������������г���2����
		{
			mid = (m + n) / 2;
			max_min(a, m, mid, &lmin1, &lmin2, &lmax1, &lmax2);
			max_min(a, mid + 1, n, &rmin1, &rmin2, &rmax1, &rmax2);

			//**************************************************
			//ȷ������������С��������
			//**************************************************
			if (lmin1 < rmin1)//����������С��<����������С��
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
			else//����������С��<����������С��
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
			//ȷ��������������������
			//**************************************************
			if (lmax1 > rmax1)//�������������>�������������
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
			else//�������������>�������������
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