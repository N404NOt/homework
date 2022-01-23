#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time (NULL));
	
	int t = 0;
	int arr[10] = {1,8,6,-6,86,12,60,78,40,9};
	printf("≈≈–Ú«∞:\n");
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j+1] < arr[j])
			{
				t = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = t;
			}
		}
	}
	printf("\n≈≈–Ú∫Û:\n");	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}