#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10//��Ϸ��Χȡģֵ
#define M 1//��Ϸ��Χ��ֵ
//����menu
//��Ϸ����game��ѭ��menu
//���������

void menu()
{
	printf("**************************\n");
	printf("*********0.�˳���Ϸ*******\n");
	printf("*********1.������Ϸ*******\n");
	printf("**************************\n");

}
void game()
{
	int random = rand()%10+1;
	int guess;	
	int choose = 0;
	int a;
	int cont = 0;
	do
	{
		menu();
		printf("ѡ��:" );		
		scanf("%d", &a);
		switch (a)
		{
		case 0: exit(1);
		case 1: printf("\n�������������²��Ҹ�����������(random)�Ƕ��ٰɣ�����\n");
				printf("��׼�������𣿣����㻹��һ�η��ڵĻ��ᣡ����\n");
n:
				printf("1.����ô���ŵ���Ҫ��ѵ��һ���ˣ�������\n");
				printf("2.��.....��....��·~~~~~~~~\n");
				printf("ѡ��:" );
				scanf("%d", &choose);
				
			if (choose == 1)
			{
				printf("�����Ҫ������ٻش�����������˳���Ϸ������\n\n");
				goto m;
			}


			else if (choose == 2)
			{
				printf("��������������С��׼���������ɣ�������\n\n");
				exit(1);
			}
			else
			{
				printf("����������������룡\n\n");
				goto n;
			}
		}
m:
		while (1)
		{
			printf("С�����ӿ�������Ĳµ����ְɣ�����\n");
			printf("��Ĳ²⣺");
			scanf("%d", &guess);
			cont++;
			if (guess < random)
			{
				printf("����Ŷ��С�����������£����С�ˣ�\n\n");
			}
			else if(guess>random)
			{
				printf("���Բ��ԣ�����ɵС�Ӳ´��ˣ�����\n\n");
			}
			else
			{
				printf("����ô��ô����������������%d�ξͲ¶��ˣ��ɶ������´������ƣ�\n",cont);
				break;
			}
			


		}




	} while (a);
}
int main()
{
	srand((unsigned int)time(NULL));
	game();
	return 0;
	

}