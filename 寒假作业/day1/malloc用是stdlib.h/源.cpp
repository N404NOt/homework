#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int* printNumbers(int n,int* returnSize)
{
    int i = 0;
    *returnSize = pow(10, n) - 1;
    int* arr = (int*)malloc(sizeof(int) * (*returnSize));
    for (; i < *returnSize;i++)
    {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    return arr;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    printNumbers(n, &n);
    return 0;

}