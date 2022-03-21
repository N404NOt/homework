#define _CRT_SECURE_NO_WARNINGS 1#include<stdio.h>
//void qsort(void* base, size_t num, size_t width, int(__cdecl* compare)(const void* elem1, const void* elem2));
#include<stdio.h>
#include<math.h>
#define ture 1
#define erro 0
typedef struct clarrrrs
{
	int age;
	char ch[20];
}cl;
void swap(char *buf1, char *buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
int cmp(const void* elem1, const void* elem2)
{
	return ((cl*)elem1)->age - ((cl*)elem2)->age;
}
void my_qsort(void* base,int num, int width,int(*cmp)(const void *elem1,const void *elem2))
{
	//char* buff1 = base;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void text1()
{
	int arr[] = { 5,9,-80,96,46,80,pow(2,8)};
	my_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
}
void text2()
{
	cl arr[3] = { 
		{50,"asd"},
		{90,"rew"},
		{-60,"gftr"}
	};
	my_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i].age);
		printf("%s ", arr[i].ch);
		printf("\n");
	}
}
int main()
{
	
	text2();
	//text1();
}