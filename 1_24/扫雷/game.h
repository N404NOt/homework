#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_Count 78
//��ʼ��
void Init_board(char arr[ROWS][COLS], int rows, int cols, char c);
//��ʾ����
void Display_board(char arr[ROW][COL], int row, int col);
//������
void Set_mine(char mine[ROWS][COLS],int row,int col);
//void show_board(char arr[ROWS][COLS], int row, int col);
void Find_mine(char mine[ROWS][COLS], char show[ROWS][COLS]);
void central();
