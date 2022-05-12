#define _CRT_SECURE_NO_WARNINGS 1
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char arr1[5] = "abcd";
//	char arr2[5] = "qwer";
//	char tmp = 0;
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	for (i = 0; i < 5; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//#define N 10
//#include<stdio.h>
//void init(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* arr)
//{
//	int tmp = 0;
//	int* left = arr;
//	int* right = arr + N - 1;
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
//	int arr[N];
//	init(arr);//初始化数组为全0
//	print(arr);//打印数组的每个元素
//	reverse(arr);//数组元素的逆置
//	print(arr);//打印数组的每个元素
//	return 0;
//}