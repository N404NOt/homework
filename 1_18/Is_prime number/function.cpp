#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void atc()
{
	int i;
	printf("��������Ҫת����ASCII��");
	scanf("%d", &i);
	printf("\n");
	printf("���Ϊ��");
	printf("\n%c", i); 
}
void cta()
{
	char j,i[10];
	gets_s(i);
	printf("��������Ҫת�����ַ���");
	scanf("%c", &j);
	printf("\n");
	printf("���Ϊ��");	
	printf("\n%d", j);
}