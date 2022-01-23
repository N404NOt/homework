#define _CRT_SECURE_NO_WARNINGS 1
//#include<windows.h>
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//int password2[6], password[6] = {123456};
//	char s[10];
//	int i=1;
//	int password, password1, password2;
//	while (1)
//	{
//	printf("Please set a password:");
//	scanf("%d", &password);
//	//gets_s(s);
//	printf("\n");
//	printf("Please enter password again:");
//	scanf("%d", &password1);
//	//gets_s(s);
//	if (password==password1)
//	{
//	printf("\n");
//	printf("Setup succeeded!!!\n");
//	printf("*******************************The screen will be emptied after 5 seconds!!!*******************************\n");
//	for (i = 5; i >= 1; i--)
//	{
//		Sleep(1000);
//		printf("%d!\n", i);
//		
//		
//	}
//	system("cls");
//	printf("\n");
//	break;
//	}
//	if (password != password1)
//	{
//		printf("The password is different twice, please re-enter!\n");
//		
//	}
//	}
//	
//	
//	
//		
//	printf("*******************************Welcome to 秘密空间!!!,进入之前请输入密码！！！只有自己人才能看小秘密*******************************\n");
//		//printf("				Please input your password:");
//		for (int i = 1; i <= 3; i++)
//		{
//			printf("Please input your password:");
//			scanf("%d", &password2);
//			if (password2 == password)
//			{
//				
//				//PlaySound(L"新录音 6~1", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
//				printf("*******************************Welcome to 秘密空间!!!*******************************");
//				
//				
//			}
//			printf("Wrong password!\n");
//			printf("It is your%d/3 op", i);
//			if (i == 3)
//			{
//				printf("Gitout！！！！！");
//					return 0;
//			}
//		}
//
//}
//#include<stdio.h>
//int main()
//{
//	
//	for (int i = 2; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//void exchange(int a, int b, int c)
//{
//	if (a >= b )
//	{
//		if (b >=c)
//		{
//			printf("%d %d %d", a, b, c);
//		}
//		else if (a >= c)
//		{
//			printf("%d %d %d", a, c, b);
//		}
//		else
//			printf("%d %d %d", c, a, b);
//		
//	}
//	else if (a < b)
//	{
//		if (a >= c)
//		{
//			printf("%d %d %d", b, a, c);
//		}
//		else if (b>= c)
//		{
//			printf("%d %d %d", b, c, a);
//		}
//		else
//			printf("%d %d %d", c, b, a);
//	}
//	
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	exchange(a, b, c);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int i = 3;
//	for (; i < 100;i=i+3 )
//	{
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		int t;
//		t = a;
//		a = b;
//		b = t;
//	}
//	for (int i = b; i >= 1; i--)
//	{
//		if (b % i == 0 && a % i == 0)
//		{
//			printf("%d", i);
//			return 0;
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//	
//
//}
//#include<stdio.h>
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		for (int j = 2; j < i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				printf("%d ", i);
//				break;
//			}
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 9; i <= 99; i=i+10)
//	{
//		if (i > 90)
//		{
//			count=count + 8;
//		}
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float sum = 0;
//	int j = 2;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			j = 1;
//		}
//		else
//		{
//			j = 2;
//		}
//		sum = sum + pow(-1, j) * (1.0 / i);
//	}
//	printf("%f", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[10];
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		if (i == 0)
//		{
//			max = a[0];
//		}
//		
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//
//	}
//	printf("%d", max);
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ", i, j, i * j);
//		}
//		printf("\n");;
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	scanf("%s", &password);
	printf("请确认密码Y/N");
	int c;
	while (c = getchar() != '\n');
	c = getchar();
	printf("lalala");
}