#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void InitBoard( char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
#endif //_GAME_H_