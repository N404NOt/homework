#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct stu
{
	float a;
	float b;
	float c;
	float d;
	float e;
}stu1;
int main()
{
	stu1 s[5];
	float a[5];
	int i;
	int sum;
	for (i = 0; i < 5; i++)
	{
		scanf("%f %f %f %f %f", &s[i].a, &s[i].b,& s[i].c,& s[i].d,& s[i].e);
		a[i] = s[i].a + s[i].b + s[i].c + s[i].d + s[i].e;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%.lf %.lf %.lf %.lf %.lf %lf\n",s[i].a, s[i].b, s[i].c, s[i].d, s[i].e,a[i]);
	}
}

