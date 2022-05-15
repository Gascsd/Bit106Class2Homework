#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//BC68-X形图案
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int arr[20][20] = { 0 };
//	while ((scanf("%d", &n)) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if ((i == j) || (i + j == n - 1))
//				{
//					arr[i][j] = '*';
//				}
//				else
//				{
//					arr[i][j] = ' ';
//				}
//				printf("%c", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//BC54-获得月份天数
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	while ((scanf("%d%d", &year, &month)) != EOF)
//	{
//		if (month == 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			{
//				printf("%d\n", 29);
//			}
//			else
//			{
//				printf("%d\n", 28);
//			}
//		}
//		else if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			printf("%d\n", 30);
//		}
//		else
//		{
//			printf("%d\n", 31);
//		}
//	}
//	return 0;
//}

//BC51-三角形判断
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int i = 0;
//	while ((scanf("%d%d%d", &a, &b, &c)) != EOF)
//	{
//		if ((a + b > c) && (c + b > a) && (a + c > b))
//		{
//			if (b == c && b == a && a == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (b == c || b == a || a ==c)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}