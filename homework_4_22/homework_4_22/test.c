#define _CRT_SECURE_NO_WARNINGS 1

//递归方式实现打印一个整数的每一位
//#include<stdio.h>
//void print(int n)
//{
//    int i = 0;
//    if (n / 10 != 0)
//    {
//        print(n/10);
//    }
//    printf("%d ", n % 10);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}




//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//#include<stdio.h>
//int fac1(int n)
//{
//	if (n > 1)
//		return n * fac1(n - 1);
//	else
//		return 1;
//}
//int fac2(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = fac1(n);//递归
//	int ret2 = fac2(n);//非递归
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}

//递归和非递归分别实现strlen
//#include<stdio.h>
//int my_strlen1(char* str)//递归
//{
//	if (*str != '\0')
//		return 1 + my_strlen1(str + 1);
//	else
//		return 0;
//}
//int my_strlen2(char* str)//非递归
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcde";
//	int ret1 = my_strlen1(arr);//递归
//	int ret2 = my_strlen2(arr);//非递归
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}



//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//#include<stdio.h>
//void reverse_string(char* string)
//{
//	//求字符串长度
//	char tmp = 0;
//	int count = 0;
//	char* left = string;
//	char* right = 0;
//	while (*string)
//	{
//		count++;
//		string++;
//	}
//	//从外向内逐个交换
//	right = left + count - 1;
//	while (left <= right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}




//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//#include<stdio.h>
//int DigitSum(int n)
//{
//	static int sum = 0;
//	if (n / 10)
//	{
//		DigitSum(n / 10);
//	}
//	sum += n % 10;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}



//编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//int my_power(int n, int k)
//{
//	static int sum = 1;
//	if (k)
//	{
//		my_power(n, k - 1);
//		sum *= n;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = my_power(n, k);
//	printf("%d\n", ret);
//	return 0;
//}





//递归和非递归分别实现求第n个斐波那契数
//#include<stdio.h>
////1 1 2 3 5 8 13 21 34 55
//int Fib1(int n)//递归
//{
//	if (n > 2)
//	{
//		return Fib1(n - 1) + Fib1(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int Fib2(int n)//非递归
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = Fib1(n);//递归
//	int ret2 = Fib2(n);//非递归
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}