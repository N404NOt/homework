#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void atc()
{
	int i;
	printf("请输入您要转换的ASCII：");
	scanf("%d", &i);
	printf("\n");
	printf("结果为：");
	printf("\n%c", i); 
}
void cta()
{
	char j,i[10];
	gets_s(i);
	printf("请输入您要转换的字符：");
	scanf("%c", &j);
	printf("\n");
	printf("结果为：");	
	printf("\n%d", j);
}