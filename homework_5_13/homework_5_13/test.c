#define _CRT_SECURE_NO_WARNINGS 1

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
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