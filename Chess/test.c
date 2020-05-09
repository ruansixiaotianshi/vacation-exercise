#include<stdio.h>
#include<string.h>
#define MaxQueueSize 25
#include "queue.h"
#define MAXN 5

SeqCQueue Q;
int m, n;
int step;//��¼���ߵĲ���
int map[MAXN][MAXN];//8*8�Ĺ�����������
int dir[8][2] = { {-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1} };//��������������ȫ����λ��



 
 //�����λ�õ��������ߵĲ���
 int _step(int x, int y) {
	     int i, xi, yi;
	     int count = 0;
	     for (i = 0; i < 8; i++) {
		         xi = x + dir[i][0];
		         yi = y + dir[i][1];
		         //�߽������Լ�!map[xi][yi]��ʾδ�߹���λ��
			         if (xi >= 0 && xi <= MAXN - 1 && yi >= 0 && yi <= MAXN - 1 && !map[xi][yi])
			             count++;
		
	}
	     return count;
	
}

 int BFS(point s)
 {
	    int i, x, y, temp;
	    QueueInitiate(&Q);//��ʼ������
	    QueueAppend(&Q, s);//��Ӳ���
	   point hd;
	     int flag = 0;
	     //�����зǿ�ʱ�����й����������
		     while (QueueNotEmpty(Q))
		     {
		         QueuePop(&Q, &hd);//������
		         map[hd.x][hd.y] = step++;//��Ǹ�λ�����߹�
		         printf("%d,%d\n", hd.x, hd.y);//����߹���λ��
		         int minstep = 10;//��ʼ����С����
		         int flag = 0;//���
		         //8�������������
			         for (i = 0; i < 8; i++) {
			             x = hd.x + dir[i][0];
			             y = hd.y + dir[i][1];
			             if (x >= 0 &&
				                 x <= MAXN - 1 && y >= 0 && y <= MAXN - 1 && !map[x][y]) {
				                 //���С�ڵ�ǰ����С���������ö���Ԫ�س����У����õ�ǰ��Ԫ�������
					                 if (_step(x, y) < minstep) {
					                     minstep = _step(x, y);
					                     point t, th;
					                     t.x = x, t.y = y;
					                     if (flag) QueuePop(&Q, &th);//����ǵ�һ�εĻ����Ͳ��ó������ˣ�
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
		         //�ж���ʼλ���Ƿ�Ϸ�
			         if (m < 0 || m>7 || n < 0 || n>7) {
			             printf("��ʼλ�ò��Ϸ���\n\n");
			
		}
			else {
			             printf("\n");
			             memset(map, 0, sizeof(map));//��8*8������ȫ����Ϊ0
			             point start;
			             start.x = m, start.y = n;
			             step = 1;
			             step = BFS(start);
			             //�����������·�ߣ�������1, 2, 3,��,64��������һ��8��8�ķ������
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