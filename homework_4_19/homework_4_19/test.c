#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//#include<stdio.h>
//#include<math.h>
//int isprime(int n)//是素数返回1，不是返回0
//{
//	int i = 1;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	for (n = 100; n < 200; n++)
//	{
//		ret = isprime(n);
//		if (ret == 1)
//		{
//			printf("%d ",n);
//		}
//	}
//	return 0;
//}




//实现函数判断year是不是润年
//#include<stdio.h>
//int isLeapYear(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = isLeapYear(year);
//	if (ret == 1)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}