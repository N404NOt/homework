#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float a[5];
	float average = 0;
	scanf("%f %f %f %f %f", &a[0], &a[1], &a[2], &a[3], &a[4]);
	for (int i = 0; i < 5; i++)
	{
		average += a[i];
	}
	float b = average / 5;

	printf("%.2f", b);
	return 0;
}
