#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
    int a = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < a; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}