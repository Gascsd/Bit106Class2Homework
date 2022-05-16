#define _CRT_SECURE_NO_WARNINGS 1

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
#include<stdio.h>
int main()
{
	int money = 20;
	int count = 0;
	int empty = 0;
	while (money >= 1)
	{
		count++;
		money--;
		empty++;
	}
	while (empty >= 2)
	{
		count++;
		empty -= 2;
		empty++;
	}
	printf("%d", count);
	return 0;
}