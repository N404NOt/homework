#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//界面
void menu()
{
	central();
	printf("********************************************\n");
	central();
	printf("*************    欢乐扫雷    ***************\n");
	central();
	printf("****************1.进入游戏******************\n");
	central();
	printf("****************0.退出游戏******************\n");

}
//游戏实现
void game()
{
	//雷实现数组
	char mine[ROWS][COLS] = { 0 };
	//游戏显示数组
	char show[ROWS][COLS] = { 0 };
	//初始化雷
	Init_board(mine, ROWS, COLS, '0');
	//初始化展示棋盘
	Init_board(show, ROWS, COLS, '*');
	//设置雷
	Set_mine(mine,ROW,COL);
	//显示雷
	Display_board(mine, ROW, COL);
	//显示棋盘
	Display_board(show, ROW, COL);
	Find_mine(mine, show);

	



}
int main()
{
	srand((unsigned int)time(NULL));
	int choice = 0;
	while (1)
	{
		system("cls");
		PlaySound(L"开端", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		menu();
		
		flag:	
		printf("输入你的选择>");
		scanf("%d", &choice);
		switch (choice)
		{
			case 0:
				printf("退出游戏！\n");
				return 0;
			case 1:
				PlaySound(L"游戏中", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
				game();
				break;
			default:
				printf("选择非法！\n");
				goto flag;

				
		}
	}
	return 0;
}