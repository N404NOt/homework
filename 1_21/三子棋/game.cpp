#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char chess[][COL])
{
	
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			chess[i][j] = ' ';
		}
	}
}
void DisplayBoard(char chess[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf(" %c ", chess[i][j]);
			if (i < COL&&j<COL-1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (int j = 0; j < ROW&&i<ROW-1; j++)
		{
			printf("----");
		}
		printf("\n");
	}
}
void Playermove(char chess[ROW][COL],int row,int col)
{flag:
	scanf("%d %d", &row, &col);
	
	if (row > 0 && row <= ROW && col > 0 && col <= COL)
	{
		if (chess[row-1][col-1] == ' ')
		{
			chess[row-1][col-1] = 'x';
		}
		else
		{
			printf("输入错误，请重新输入：");
			goto flag;
		}
	}
	else
	{
		printf("输入错误，请重新输入：");
		goto flag;
	}
	printf("\n");
}
void Computermove(char chess[ROW][COL])
{
	printf("\n");
	srand((unsigned int)time(NULL));
flag2:	
	int row = rand() % ROW + 1;
	int col = rand() % COL + 1;
	if (chess[row-1][col-1] == ' ')
	{
		chess[row - 1][col - 1] = 'o';

	}
	else
	{
		goto flag2;
	}
	
}
char udge(char chess[ROW][COL])
{
	//胜利行
	int password = 0;
	for (int row = 0; row < ROW; row++)
	{
		password = 0;
		for (int col = 1; col <COL; col++)
		{
			if (chess[row][col] == chess[row][col - 1]&&chess[row][col]!=' ')
			{
				password++;
				if (password == ROW - 1)
				{
					printf("行\n");
						return chess[row][col];
				}
					
			}
			
		}
	}
	//胜利列
	for (int col = 0; col <COL; col++)
	{
		 password = 0;

		for (int row = 1; row < ROW; row++)
		{
			if (chess[row][col] == chess[row-1][col] && chess[row][col] != ' ')
			{
				password++;
				if (password == COL - 1)
				{
					printf("列\n");
					return chess[row][col];
				}
					
			}
		}
	}
	//左到右对角
	password == 0;
	for (int row = 1; row < ROW; row++)
	{
		
		int col = row;
			if (chess[row][col] == chess[row - 1][col - 1] && chess[row][col] != ' ')
			{
				password++;
				if (password == 2)
				{
					printf("左到右对角\n");
					return chess[row][col];
				}
			}
		
	}
			
	//右到左对角
	password = 0;
	for (int row = 1; row < ROW; row++)
	{
		int col = ROW - row -1;
		
			if (chess[row][col] == chess[row - 1][col+1] && chess[row][col] != ' ')
			{
				password++;
				if (password == ROW-1)
				{
					printf("右对焦\n");

					return chess[row][col];
				}
			}
		
	}
	//平局
	for (int row = 0; row < ROW; row++)
	{
		password = 0;
		for (int col = 1; col < COL; col++)
		{
			if (chess[row][col]!= ' ')
			{
				password++;
				if (password == sqrt(ROW))
				{
					return 'H';
				}

			}

		}
	}
	return 'G';
}
