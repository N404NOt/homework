#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int main()
{
	char chess[ROW][COL];
	char judge;
	int row = 0, col = 0;
	InitBoard(chess);
	printf("**********	        ����N����!!!		**********\n");
	printf("**********************************************************\n");
	printf("**********		1.������Ϸ		**********\n");
	printf("**********		0.�˳���Ϸ		**********\n");
	printf("**********************************************************\n");
	int ct = 0;
	printf("���������ѡ��");
	scanf("%d", &ct);
	switch (ct)
	{  
	case 0:
		printf("��Ϸ������");
		system("pause");

		exit(1);
	case 1:
		do
		{
			DisplayBoard(chess);
			printf("��������Ҫ�µ�����>");
			Playermove(chess,row,col);
			judge=udge(chess);
			if (judge == 'x')
			{
				printf("<<<���ʤ��>>>");
				printf("\n");
				DisplayBoard(chess);
				system("pause");
				break;
			}
			if (judge == 'H')
			{
				printf("<<<�;�>>>");
				printf("\n");
				DisplayBoard(chess);
				system("pause");

				break;

			}

			printf("\n");
			printf("���Բ���>");
			Computermove(chess);
			judge = udge(chess);

			if (judge == 'o')
			{
				printf("<<<����ʤ��>>>");
				printf("\n");
				DisplayBoard(chess);
				system("pause");

				break;
			}
				if (judge == 'H')
				{
					printf("<<<�;�>>>");
					printf("\n");
					DisplayBoard(chess);
					system("pause");

					break;

				}

		} while (ct);
	}

	return 0;
	
}