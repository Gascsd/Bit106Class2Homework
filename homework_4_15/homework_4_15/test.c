#define _CRT_SECURE_NO_WARNINGS 1

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//	double sum1 = 0, sum2 = 0, sum = 0;
//	int i = 1;
//	for (i = 1; i < 99; i+=2)//算奇数部分
//	{
//		sum1 += (1.0 / i);
//	}
//	for (i = 2; i <= 100; i+=2)
//	{
//		sum2 += (1.0 / i);
//	}
//	sum = sum1 - sum2;
//	printf("%lf", sum);
//	return 0;
//}



//求10 个整数中最大值
//#include<stdio.h>
//int main()
//{
//	int max = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &max);
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//	}
//	printf("the max number is: %d", max);
//	return 0;
//}



//在屏幕上输出9*9乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}





//完成上课的猜数字游戏
//#include<stdio.h>
//
//void menu()
//{
//	printf("********************************\n");
//	printf("*******1. play *****************\n");
//	printf("*******2. exit *****************\n");
//	printf("********************************\n");
//}
//
//void game()
//{
//	int n;
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("please guess a number\n");
//		scanf("%d", &n);
//		if (n > ret)
//		{
//			printf("guess bigger than the number\n");
//		}
//		else if (n < ret)
//		{
//			printf("guess smaller than the number\n");
//		}
//		else
//		{
//			printf("Congratulations, you are right\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("please choose(0/1)");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("play game\n");
//			game();
//			break;
//		case 0:
//			printf("exit game\n");
//			break;
//		default:
//			printf("input error,please input again\n");
//		}
//		
//	} while (input);
//	return 0;
//}






//二分查找编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//#include<stdio.h>
//int main()
//{
//	int n;
//	int ch[10] = { 10,11,12,13,14,15,16,17,18,19 };
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	int left = 0;
//	int right = sz - 1;
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (ch[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (ch[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if(ch[mid]==n)
//		{
//			printf("找到了，下标为%d\n", mid);
//			return 0;
//		}
//	}
//	printf("找不到\n");
//	return 0;
//}