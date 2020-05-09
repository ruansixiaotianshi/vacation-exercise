#include<stdio.h>
#include<string.h>
#define MaxQueueSize 25
#include "queue.h"
#define MAXN 5

SeqCQueue Q;
int m, n;
int step;//记录马走的步数
int map[MAXN][MAXN];//8*8的国际象棋棋盘
int dir[8][2] = { {-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1} };//马理论上所能走全部的位置



 
 //求出该位置的马所能走的步数
 int _step(int x, int y) {
	     int i, xi, yi;
	     int count = 0;
	     for (i = 0; i < 8; i++) {
		         xi = x + dir[i][0];
		         yi = y + dir[i][1];
		         //边界条件以及!map[xi][yi]表示未走过的位置
			         if (xi >= 0 && xi <= MAXN - 1 && yi >= 0 && yi <= MAXN - 1 && !map[xi][yi])
			             count++;
		
	}
	     return count;
	
}

 int BFS(point s)
 {
	    int i, x, y, temp;
	    QueueInitiate(&Q);//初始化队列
	    QueueAppend(&Q, s);//入队操作
	   point hd;
	     int flag = 0;
	     //当队列非空时，进行广度优先搜索
		     while (QueueNotEmpty(Q))
		     {
		         QueuePop(&Q, &hd);//出队列
		         map[hd.x][hd.y] = step++;//标记该位置已走过
		         printf("%d,%d\n", hd.x, hd.y);//输出走过的位置
		         int minstep = 10;//初始的最小步数
		         int flag = 0;//标记
		         //8个方向进行搜索
			         for (i = 0; i < 8; i++) {
			             x = hd.x + dir[i][0];
			             y = hd.y + dir[i][1];
			             if (x >= 0 &&
				                 x <= MAXN - 1 && y >= 0 && y <= MAXN - 1 && !map[x][y]) {
				                 //如果小于当前的最小步数，则让队列元素出队列，并让当前的元素入队列
					                 if (_step(x, y) < minstep) {
					                     minstep = _step(x, y);
					                     point t, th;
					                     t.x = x, t.y = y;
					                     if (flag) QueuePop(&Q, &th);//如果是第一次的话，就不用出队列了；
					                     QueueAppend(&Q, t);
					                     flag = 1;
					
				}
				
			}
			
		}
		     }
	     return step - 1;
	 }

 int main()
 {
	     while (scanf("%d%d", &m, &n) != EOF) {
		         //判断起始位置是否合法
			         if (m < 0 || m>7 || n < 0 || n>7) {
			             printf("起始位置不合法！\n\n");
			
		}
			else {
			             printf("\n");
			             memset(map, 0, sizeof(map));//将8*8的棋盘全部置为0
			             point start;
			             start.x = m, start.y = n;
			             step = 1;
			             step = BFS(start);
			             //按求出的行走路线，将数字1, 2, 3,…,64依次填入一个8×8的方阵，输出
				             for (int i = 0; i < MAXN; i++) {
				                 for (int j = 0; j < MAXN; j++) {
					                     printf("%-3d", map[i][j]);
					
				}
				                 printf("\n");
				
			}
			             printf("step=%d.\n", step);
			             printf("\n");
			
		}
		
	}
	    return 0;
	 }