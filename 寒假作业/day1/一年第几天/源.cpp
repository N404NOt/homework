#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void computedays(int y, int m, int d)
{
	int month_days[12] = { 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	int num = 0;
	if (m >= 2)
	{
		num = month_days[m - 2] + d;
		if (m > 2)
		{


			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
				num++;
		}
	}
	else
		num = d;
	printf("%d", num);


}
int main()
{
	int year, month, day;
	scanf("%d %d %d", &year, &month, &day);
	computedays(year, month, day);

}