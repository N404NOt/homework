#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int a[], int b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
}
void print(int a[], int b[], int n)
{
	printf("\na:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nb:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}
}
int main()
{
	int a[5] = { 1,8,6,4,3 };
	int b[5] = { -4,-1,-9,-3,-8 };
	print(a, b, 5);
	swap(a, b,5);
	print(a, b, 5);
}