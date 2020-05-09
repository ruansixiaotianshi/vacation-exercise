#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>
int flag[6][6] = { 0 }, ans, a, b, m;
int x[8] = { 2,1,-1,-2,-2,-1,1,2 };
int y[8] = { 1,2,2,1,-1,-2,-2,-1 };

void DFS(int a, int b, int ans)
{
	if (ans >= 25) {
		m++;
		/* for(int i=1;i<=5;i++)
		 {
		  for(int j=1;j<=5;j++)
		   printf("%d ",flag[i][j]);
		  printf("\n");
		 }
		 printf("\n");*/
		Print();
		//return;
	}
	else {
		for (int i = 0; i < 8; i++)
		{
			if (a + x[i] > 0 && a + x[i] < 6 && b + y[i]>0 && b + y[i] < 6 && flag[a + x[i]][b + y[i]] == 0)
			{
				flag[a + x[i]][b + y[i]] = 1;//printf("%d\n",ans);
				ans++;
				DFS(a + x[i], b + y[i], ans);
				ans--;
				flag[a + x[i]][b + y[i]] = 0;
			}
		}
	}
}
int Print(int*x,int*y) {
	int num = 0;
	for (int i = 2; i < 6; i++) {
		for (int j = 2; j < 6; j++) {
			printf("%3d%3d", x[i],y[j]);
			num++;
		}
		printf("\n");
	}
	printf("\n");

}

void main()
{
	ans = 1;
	m = 0;
	memset(flag, 0, sizeof(flag));
	scanf("%d%d", &a, &b);
	flag[a][b] = 1;
	DFS(a, b, ans);
	printf("路径总数%d\n", m);
}


