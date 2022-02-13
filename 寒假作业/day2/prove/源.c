#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<stdlib.h>
void prove()
{
    int n = 0;
    int t = 0;
    while (scanf("%d", &n) != EOF)
    {
        int* arr = (int*)malloc(n * sizeof(int));
        if (n % 2 == 0)
        {
            arr[0] = pow(n, 3) / n - 1 - (n / 2 - 1) * 2;
            for (int i = 1; i < n; i++)
            {
                *(arr + i) = *(arr + i - 1) + 2;
            }
            for (int i = 0; i < n; i++)
            {
                printf("%d", arr[i]);
                if (i != n - 1)
                {
                    printf("+");
                }
            }
        }
        else
        {
            arr[0] = pow(n, 3) / n - ((n + 1) / 2 - 1) * 2;

            for (int i = 1; i < n; i++)
            {
                *(arr + i) = *(arr + i - 1) + 2;

            }
            for (int i = 0; i < n; i++)
            {
                printf("%d", arr[i]);
                if (i != n - 1)
                {
                    printf("+");
                }
            }
        }
        printf("\n");

    }
}
int main()
{
    prove();
}