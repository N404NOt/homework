#define _CRT_SECURE_NO_WARNINGS 
int minNumberInRotateArray(int* arr, int arrSize)
{
    int left = 0;
    int right = arrSize - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < arr[right])
            right = mid;
        else if (arr[mid] > arr[right])
            left = mid + 1;
        else
            right -= 1;
    }
    return arr[left];
}
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//int main()
//{
//	int n = 0;
//	int t = 0;
//
//		scanf("%d", &n);
//		int* arr = (int*)calloc(n, sizeof(int));
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &t);
//			arr[i] = t;
//		}
//		int left = 0;
//		int right = n - 1;
//		int mid = (left + right) / 2;
//		while (1)
//		{
//			if (arr[mid] >= arr[left])
//			{
//				left = mid;
//				mid = (left + right) / 2;
//
//			}
//			else
//			{
//				right = mid;
//				mid = (left + right) / 2;
//			}
//			if ((right - left == 1) && left > right)
//			{
//				printf("%d", arr[right]);
//				break;
//			}
//		}
//		return 0;
//	}