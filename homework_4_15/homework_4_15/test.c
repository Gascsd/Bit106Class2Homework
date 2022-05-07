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
//在屏幕上输出9*9乘法口诀表
//完成上课的猜数字游戏
//二分查找编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。