#define _CRT_SECURE_NO_WARNINGS 1

//BC117-小乐乐走台阶
//int Fib(int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else if(n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return 1;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

 


//BC98-序列中删除指定数字;
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50];
//    int i = 0;
//    int j = 0;
//    int num = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &num);
//    for (i = 0, j = 0; i < n; i++)
//    {
//        if (arr[i] != num)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//        else
//        {
//            count++;
//        }
//    }
//    for (i = 0; i < n - count; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//} 
 

//BC95-最高分和最低分之差
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[10000] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	int ret = max - min;
//	printf("%d", ret);
//	return 0;
//}


//BC48-字母大小写转换
//
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//	}
//	return 0;
//}


////BC47-判断是不是字母
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((scanf("%c",&ch)) != EOF)
//	{
//		if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}


//BC45-最高分数
//#include<stdio.h>
//int main()
//{
//	int source[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &source[i]);
//	}
//	int max = source[0];
//	for (i = 0; i < 3; i++)
//	{
//		if (max < source[i])
//		{
//			max = source[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}




//BC38-变种水仙花数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		if (i == (i % 10) * (i / 10) + (i % 100) * (i / 100)
//			+ (i % 1000) * (i / 1000) + (i % 10000) * (i / 10000))//12345   1234*5 123*45 12*345 1*2345
//			printf("%d ", i);
//	}
//	return 0;
//}
