#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#define C 8	//列 
#define R 8	//行 

int chessboard[R][C];
int move[8][2] = { {1,2}, {2,1} ,{2,-1} ,{1,-2} ,{-1,-2} ,{-2,-1} ,{-2,1} ,{-1,2} };
int cnt = 0;	//步数计数器 
int num = 0;	//解数计数器 


void initialCB() {
	//初始化棋盘
	for (int i = 0; i < R; i++) {
		if (i == 0 || i == 1 || i == 4 || i == 5) {
			for (int j = 0; j < C; j++) {
				chessboard[i][j] = -1;
			}
		}
		else {
			for (int j = 0; j < C; j++) {
				if (j == 0 || j == 1 || j == 4 || j == 5) {
					chessboard[i][j] = -1;
				}
				else {
					chessboard[i][j] = 0;
				}
			}
		}
	}
}

void Print() {
	for (int i = 2; i < R - 2; i++) {
		for (int j = 2; j < C - 2; j++) {
			printf("%3d", chessboard[i][j]);
			num++;
		}
		printf("\n");
	}
	printf("\n");

}


void Horse(int x, int y) {
	chessboard[x][y] = ++cnt;	//找到满足条件的点就把马放下去 
	if (cnt == 25) {	//若棋盘所有位置都访问过 
		Print(); 	//则输出解	
	}
	else {
		int a, b;
		for (int i = 0; i < 5; i++) {		//遍历当前位置的每一个方向，
			//	找满足条件的点 ，将移动增量加到进入位置的坐标中 
			a = x + move[i][0];
			b = y + move[i][1];
			if (chessboard[a][b] == 0) {	//如果该点满足移动条件	
				Horse(a, b);				//递归调用主功能函数 
				chessboard[a][b] = 0;	//从上一个点返回来后将上一个点的记录抹掉，回调到上一个状态 
				--cnt;
			}
		}
	}
}

int main(void) {
	for (int i = 2; i < R - 2; i++) {
		for (int j = 2; j < C - 2; j++) {
			initialCB();
			cnt = 0;
			Horse(i, j);
		}
	}
	printf("路径总数：\n", num);

	return 0;
}