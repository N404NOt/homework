#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int year = 0;
	while (scanf("%d", &year) != EOF)
	{
		if (is_leap(year) == 1)
		{
			printf("%d������!\n", year);

		}
		else
			printf("%d��������!\n", year);
	}
	return 0;
}
