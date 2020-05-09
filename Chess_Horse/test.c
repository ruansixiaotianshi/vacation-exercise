#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#define C 8	//�� 
#define R 8	//�� 

int chessboard[R][C];
int move[8][2] = { {1,2}, {2,1} ,{2,-1} ,{1,-2} ,{-1,-2} ,{-2,-1} ,{-2,1} ,{-1,2} };
int cnt = 0;	//���������� 
int num = 0;	//���������� 


void initialCB() {
	//��ʼ������
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
	chessboard[x][y] = ++cnt;	//�ҵ����������ĵ�Ͱ������ȥ 
	if (cnt == 25) {	//����������λ�ö����ʹ� 
		Print(); 	//�������	
	}
	else {
		int a, b;
		for (int i = 0; i < 5; i++) {		//������ǰλ�õ�ÿһ������
			//	�����������ĵ� �����ƶ������ӵ�����λ�õ������� 
			a = x + move[i][0];
			b = y + move[i][1];
			if (chessboard[a][b] == 0) {	//����õ������ƶ�����	
				Horse(a, b);				//�ݹ���������ܺ��� 
				chessboard[a][b] = 0;	//����һ���㷵��������һ����ļ�¼Ĩ�����ص�����һ��״̬ 
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
	printf("·��������\n", num);

	return 0;
}