#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define S 7
//���ַ�
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	int search =S;
	int mid = 0;
	while (left<=right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] < S)
		{
			left = mid+1;
		}
		else if (arr[mid] > S)
		{
			right = mid-1;
		}
		else
		{
			printf("�ҵ���%d��������%d\n", S,mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
	
}