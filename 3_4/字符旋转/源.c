#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main()
{
	char ch[8] = "ABCDEFG";
	int n = 0;
	scanf("%d", &n);
	int l = 0;
	int r = strlen(ch) - 2;
	for (int i = 0; i < n; i++)
	{
		char t = ch[l];
		ch[l] = ch[r];
		ch[r] = t;
		l++;
		r++;
	}
	puts(ch);
	return 0;
}