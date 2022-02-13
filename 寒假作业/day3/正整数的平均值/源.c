#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
    int n = 0;
    int num = 0;
    while (scanf("%d", &n) != EOF)
    {
        int sum = 0;
        int funum = 0;
        int zhengnum = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num);
            if (num > 0)
            {
                sum += num;
                zhengnum++;
            }
            if (num < 0)
                funum++;
            if (num == 0)
                zero++;
        }
        printf("%d %.1f", funum, sum * 1.0 / zhengnum);
        printf("\n");
    }
    return 0;
}