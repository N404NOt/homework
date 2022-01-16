#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10//游戏范围取模值
#define M 1//游戏范围加值
//界面menu
//游戏内容game，循环menu
//随机数生成

void menu()
{
	printf("**************************\n");
	printf("*********0.退出游戏*******\n");
	printf("*********1.进入游戏*******\n");
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
		printf("选择:" );		
		scanf("%d", &a);
		switch (a)
		{
		case 0: exit(1);
		case 1: printf("\n大聪明！你快来猜猜我给你出的随机数(random)是多少吧！！！\n");
				printf("你准备好了吗？？？你还有一次反悔的机会！！！\n");
n:
				printf("1.你这么嚣张当让要教训你一顿了！！！！\n");
				printf("2.那.....我....跑路~~~~~~~~\n");
				printf("选择:" );
				scanf("%d", &choose);
				
			if (choose == 1)
			{
				printf("那你可要想清楚再回答！我怕你哭着退出游戏！！！\n\n");
				goto m;
			}


			else if (choose == 2)
			{
				printf("哈哈哈哈哈，胆小鬼，准备好再来吧！！！！\n\n");
				exit(1);
			}
			else
			{
				printf("输入错误！请重新输入！\n\n");
				goto n;
			}
		}
m:
		while (1)
		{
			printf("小兔崽子快输入你的猜的数字吧！！！\n");
			printf("你的猜测：");
			scanf("%d", &guess);
			cont++;
			if (guess < random)
			{
				printf("不对哦，小子我提醒你下，你猜小了！\n\n");
			}
			else if(guess>random)
			{
				printf("不对不对，你这傻小子猜大了！！！\n\n");
			}
			else
			{
				printf("你怎么这么聪明！！！！猜了%d次就猜对了！可恶！我们下次走着瞧！\n",cont);
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