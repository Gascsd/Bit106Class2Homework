#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//#include<stdio.h>
//#include<math.h>
//int isprime(int n)//����������1�����Ƿ���0
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




//ʵ�ֺ����ж�year�ǲ�������
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
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}