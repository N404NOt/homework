#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//����
void menu()
{
	central();
	printf("********************************************\n");
	central();
	printf("*************    ����ɨ��    ***************\n");
	central();
	printf("****************1.������Ϸ******************\n");
	central();
	printf("****************0.�˳���Ϸ******************\n");

}
//��Ϸʵ��
void game()
{
	//��ʵ������
	char mine[ROWS][COLS] = { 0 };
	//��Ϸ��ʾ����
	char show[ROWS][COLS] = { 0 };
	//��ʼ����
	Init_board(mine, ROWS, COLS, '0');
	//��ʼ��չʾ����
	Init_board(show, ROWS, COLS, '*');
	//������
	Set_mine(mine,ROW,COL);
	//��ʾ��
	Display_board(mine, ROW, COL);
	//��ʾ����
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
		PlaySound(L"����", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		menu();
		
		flag:	
		printf("�������ѡ��>");
		scanf("%d", &choice);
		switch (choice)
		{
			case 0:
				printf("�˳���Ϸ��\n");
				return 0;
			case 1:
				PlaySound(L"��Ϸ��", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
				game();
				break;
			default:
				printf("ѡ��Ƿ���\n");
				goto flag;

				
		}
	}
	return 0;
}