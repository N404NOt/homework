#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
    int max(int a, int b, int c)
    {
        int m = a > b ? a : b;
        m = m > c ? m : c;
        return m;
    }
    int main()
    {
        int a, b, c, max3, max1, max2;
        float m;
        scanf("%d %d %d", &a, &b, &c);
        max1 = max(a + b, b, c);
        max3 = max(a, b + c, c);
        max2 = max(a, b, b + c);
        m = max1*1.0 / (max2 + max3);
        printf("%.2f",m);
    }
