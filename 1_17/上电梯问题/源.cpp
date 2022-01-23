#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int min = 0;
    int n = 0;
    scanf("%d", &n);
    int cont = n / 12;
    printf("%d", 4 * cont + 2);
    return 0;


}