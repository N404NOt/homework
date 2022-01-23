#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int main()
{
	char chess[ROW][COL];
	char judge;
	int row = 0, col = 0;
	InitBoard(chess);
	printf("**********	        欢乐N子棋!!!		**********\n");
	printf("**********************************************************\n");
	printf("**********		1.进入游戏		**********\n");
	printf("**********		0.退出游戏		**********\n");
	printf("**********************************************************\n");
	int ct = 0;
	printf("请输入你的选择：");
	scanf("%d", &ct);
	switch (ct)
	{  
	case 0:
		printf("游戏结束！");
		system("pause");

		exit(1);
	case 1:
		do
		{
			DisplayBoard(chess);
			printf("请输入你要下的坐标>");
			Playermove(chess,row,col);
			judge=udge(chess);
			if (judge == 'x')
			{
				printf("<<<玩家胜利>>>");
				printf("\n");
				DisplayBoard(chess);
				system("pause");
				break;
			}
			if (judge == 'H')
			{
				printf("<<<和局>>>");
				printf("\n");
				DisplayBoard(chess);
				system("pause");

				break;

			}

			printf("\n");
			printf("电脑操作>");
			Computermove(chess);
			judge = udge(chess);

			if (judge == 'o')
			{
				printf("<<<电脑胜利>>>");
				printf("\n");
				DisplayBoard(chess);
				system("pause");

				break;
			}
				if (judge == 'H')
				{
					printf("<<<和局>>>");
					printf("\n");
					DisplayBoard(chess);
					system("pause");

					break;

				}

		} while (ct);
	}

	return 0;
	
}