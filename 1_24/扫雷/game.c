#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int Is_num(char mine[ROWS][COLS], int x,int y)
{
	int num = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				num++;
			}
		}
	}
	return num;
}
void Init_board(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
void Display_board(char arr[ROWS][COLS], int row, int col)
{
	printf("\t\t\t\t\t");
	for (int j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	printf("\t\t\t\t\t");
	for (int j = 0; j <= col; j++)
	{
		printf("++");
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("\t\t\t\t\t");	
		for (int j = 1; j <= col; j++)
		{
			if(j==1)
			printf("%d|", i);
			printf("%c ", arr[i][j]);
		}
		printf("\n");
		

		


	}
	printf("\t\t\t\t\t");
	for (int i = 0; i <=row; i++)
	{
		//printf("\t\t\t\t");

		printf("++");
	}
	printf("\n");

}
void Set_mine(char mine[ROWS][COLS],int row, int col)
{
	int count = Easy_Count;
	while (count)
	{
		int x = rand() % row+1;
		int y = rand() % col+1;
		
		if(mine[x][y]=='0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
	
}
void Find_mine(char mine[ROWS][COLS], char show[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (1)
	{

		printf("��������ҪѰ�ҵ�����>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				PlaySound(L"ը��", NULL, SND_FILENAME | SND_ASYNC);
				{
					Sleep(3000);
				}
				printf("̫�ź��ˣ��㱻ը���ˣ�����\n");
				PlaySound(L"��Ϸ����", NULL, SND_FILENAME | SND_ASYNC);
				system("pause");
				printf("�����ǣ�\n");
				Display_board(mine, ROW, COL);
				break;
			}
			else
			{
				int num = Is_num(mine, x, y);
				//printf("%d", num);
				show[x][y] = num + '0';
				Display_board(show, ROW, COL);
				win++;

			}
		}
		else
		{
			printf("�������");
		}
		//printf("%d", win);
		if (win == ROW * COL - Easy_Count)
		{
			PlaySound(L"ʤ��", NULL, SND_FILENAME | SND_ASYNC);
			printf("��ϲ�㣬���׳ɹ�\n");
			Display_board(mine, ROW, COL);
			system("pause");

			break;
		}
	}
	
}
void central()
{
	for (int i = 0; i < 4; i++)
	{
		printf("\t");
	}
}