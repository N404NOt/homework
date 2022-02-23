#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

void Printch(char* ch,int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (*(ch + j) > *(ch+j + 1))
			{
				*(ch + j) ^= *(ch + j + 1);
				*(ch + j + 1) ^= *(ch + j);
				*(ch + j) ^= *(ch + j + 1);
			}
		}
	}
	puts(ch);

}
int main()
{
	char ch[1000];
	gets(ch);
	int size = strlen(ch)-1;
	Printch(ch,size);
	return 0;
}
