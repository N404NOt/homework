#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define ROW 3
#define COL 3
void InitBoard(char chess[][COL]);
void DisplayBoard(char chess[ROW][COL]);
void Playermove(char chess[ROW][COL], int row, int col);
void Computermove(char chess[ROW][COL]);
char udge(char chess[ROW][COL]);

//int contiol();