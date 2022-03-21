#define _CRT_SECURE_NO_WARNINGS 1#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct student 
{
	int age ;
	char name[200];
	char cass[200];
}stu;
int cmp_int(void const* e1, void const* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int cmp_stu_age(void const* e1, void const* e2)
{
	return  strcmp(((struct student*)e1)->name , ((struct student*)e2)->name);
}
void text2()
{
	stu  class[3] = { {1,"a","9"},
				{3,"t","1"},{-9,"b","2"}
	};
	int size = sizeof(class) / sizeof(class[0]);
	qsort(class, size, sizeof(class[0]), cmp_stu_age);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", class[i].age);
		printf("%s ", class[i].name);
		printf("%s ", class[i].cass);
		printf("\n");
	}
}
void test1()
{
	int arr[] = { 1,8,4,3,7,9,50,-5,60 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	qsort(arr, size, width, cmp_int);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	text2();
	return 0;

}