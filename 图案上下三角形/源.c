#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int num = 0;
//	scanf("%d", &n);
//	num = 1 + (n - 1) * 2;
//	char ch[] = " ";
//	for(int j=0;j<n;j++)
//	{
//
//	for (int i = 0; i < num; i++)
//	{
//		ch[i] = ' ';
//		if (i == num / 2)
//		{
//			ch[i] = '*';
//		}
//	}
//	printf("%s\n", ch);
//}
//
//}

int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);//7
	//打印上半部分
	for (i = 0; i < line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}