#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>
void TileBoard(int tr, int tc, int dr, int dc, int size);
void OutputBoard(int size);

int  tile = 1;
int  Board[1025][1025];
int main()
{
	//int n, a, b;
	//scanf("%d", &n);//����2���ݴ�
	int n = 3;
	int a = 8;
	int b = 8;
	int sum;
	sum = pow(2, n);
	//scanf("%d %d", &a, &b);
	Board[sum - a - 1][b - 1] = 0;
	TileBoard(0, 0, a - 1, b - 1, sum);
	OutputBoard(sum);
	return 0;
}

void TileBoard(int tr, int tc, int dr, int dc, int size)
{    //���ǲ�ȱ����
	if (size == 1) return;
	int t = tile++,    //��ʹ�õ���������Ŀ
		s = size / 2;//���޴�С
		//������������
	if (dr < tr + s && dc < tc + s)    //��ȱ����λ�ڱ�����
		TileBoard(tr, tc, dr, dc, s);
	else
	{    //��������û�в�ȱ����, �������t�������½�
		Board[tr + s - 1][tc + s - 1] = t;
		//�������ಿ��
		TileBoard(tr, tc, tr + s - 1, tc + s - 1, s);
	}
	//������������
	if (dr < tr + s && dc >= tc + s)    //��ȱ����λ�ڱ�����
		TileBoard(tr, tc + s, dr, dc, s);
	else
	{    //��������û�в�ȱ����, �������t�������½�
		Board[tr + s - 1][tc + s] = t;
		//�������ಿ��
		TileBoard(tr, tc + s, tr + s - 1, tc + s, s);
	}
	//������������
	if (dr >= tr + s && dc < tc + s)    //��ȱ����λ�ڱ�����
		TileBoard(tr + s, tc, dr, dc, s);
	else
	{    //�������t�������Ͻ�
		Board[tr + s][tc + s - 1] = t;
		//�������ಿ��
		TileBoard(tr + s, tc, tr + s, tc + s - 1, s);
	}
	//������������
	if (dr >= tr + s && dc >= tc + s)    //��ȱ����λ�ڱ�����
		TileBoard(tr + s, tc + s, dr, dc, s);
	else
	{    //�������t�������Ͻ�
		Board[tr + s][tc + s] = t;
		//�������ಿ��
		TileBoard(tr + s, tc + s, tr + s, tc + s, s);
	}
}
void OutputBoard(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			printf("%-3d", Board[i][j]);
		printf("\n");
	}
}