#define _CRT_SECURE_NO_WARNINGS 1

//写代码将三个整数数按从大到小输出
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b&& a > c)
//	{
//		printf("&d ",a);
//		if (b > c)
//			printf("%d %d", b, c);
//		else
//			printf("%d %d", c, b);
//	}
//	else if (b > a && b > c)
//	{
//		printf("%d ", b);
//		if (a > c)
//			printf("%d %d", a, c);
//		else
//			printf("%d %d", c, a);
//	}
//	else
//	{
//		printf("&d ", c);
//		if (a > b)
//			printf("%d %d", a, b);
//		else
//			printf("%d %d", b, a);
//	}
//	return 0;
//}


//打印3的倍数的数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (!(i % 3))
//			printf("%d ", i);
//	}
//	return 0;
//}



//给定两个数，求这两个数的最大公约数
//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = Max(a, b);
//	for (i = max; i > 1; i--)
//	{
//		if ((!((a % i) && (b % i))) && i <= a && i <= b)
//		{
//			printf("%d", i);
//			return 0;
//		}
//	}
//	return 0;
//}




//打印1000年到2000年之间的闰年
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i < 2000; i++)
//	{
//		if (!(i % 4) && i%100)
//			printf("%d ", i);
//	}
//	return 0;
//}


//写一个代码：打印100~200之间的素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i, j=2;
//	int m = sqrt(200);
//	for (i = 101; i < 200; i++)
//	{
//		j = 2;
//		while (j < sqrt(200))
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			else
//			{
//				j++;
//			}
//		}
//		if (j>m)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}