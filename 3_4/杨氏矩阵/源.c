#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Find_num(int arr[][3],int n)
{
	
	for (int i = 0,j=0; i < 3; i++,j++)
	{
		if (arr[i][j] == n)
		{
			printf("����");
			exit(1);
		}
		if (arr[i][j] - n == 1)
		{
			if (j - 1 >= 0 && arr[i][j - 1] == n)
			{
				printf("����");
				exit(1);
			}
		}
		if (arr[i][j] - n == -1)
		{
			if (j + 1 <= 2 && arr[i][j + 1] == n)
			{
				printf("����");
				exit(1);
			}
		}
		
			
	}
	printf("������");
}
int main()
{
	int arr[][3] = { {1,2,3},{2,3,4},{3,4,5} };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	Find_num(arr,n);
}
