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
	//��ӡ�ϰ벿��
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		//��ӡһ��
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