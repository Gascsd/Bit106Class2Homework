#define _CRT_SECURE_NO_WARNINGS 1


//输入两个整数，求两个整数二进制格式有多少个位不同
//#include<stdio.h>
//int NumberOf1(int n) {
//    // write code here
//    int a = 1;
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((n&1) == 1)
//        {
//            count++;
//        }
//        n >>= 1;
//    }
//    return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//    int count = NumberOf1(c);
//    printf("%d\n", count);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//void get_odd(int n)
//{
//	int arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 16; i++)
//	{
//		arr[i] = n & 1;
//		n >>= 2;
//	}
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void get_even(int n)
//{
//	n >>= 1;
//	int arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 16; i++)
//	{
//		arr[i] = n & 1;
//		n >>= 2;
//	}
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 19;
//	//00000000 00000000 00000000 00010011
//	get_odd(n);	//奇数位
//	get_even(n);
//	return 0;
//}


//写一个函数返回参数二进制中 1 的个数。
//#include<stdio.h>
//int NumberOf1(int n) {
//    // write code here
//    int a = 1;
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((n&1) == 1)
//        {
//            count++;
//        }
//        n >>= 1;
//    }
//    return count;
//}
//int main()
//{
//    int n = 1;
//    int count = NumberOf1(n);
//    printf("%d\n", count);
//    return 0;
//}




//不允许创建临时变量，交换两个整数的内容
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;//a=3^5
//	b = a ^ b;//3^5^5
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}