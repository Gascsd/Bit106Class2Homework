#define _CRT_SECURE_NO_WARNINGS 1

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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



//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#include<stdio.h>
//int main()
//{
//	double sum1 = 0, sum2 = 0, sum = 0;
//	int i = 1;
//	for (i = 1; i < 99; i+=2)//����������
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



//��10 �����������ֵ
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



//����Ļ�����9*9�˷��ھ���
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





//����ϿεĲ�������Ϸ
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






//���ֲ��ұ�д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			return 0;
//		}
//	}
//	printf("�Ҳ���\n");
//	return 0;
//}