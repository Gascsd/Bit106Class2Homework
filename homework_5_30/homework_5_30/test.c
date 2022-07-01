#define _CRT_SECURE_NO_WARNINGS 1


//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include<stdio.h>
//void reserve(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k,int sz)
//{
//	reserve(arr, arr + k - 1);
//	reserve(arr + k, arr + sz - 1);
//	reserve(arr, arr + sz - 1);
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	left_move(arr, k,sz - 1);
//	printf("%s", arr);
//	return 0;
//}


//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
	int arr[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };
	//1 2 3
	//4 5 6
	//7 8 9
	int a = 0;
	int i = 0;
	int j = COL - 1;
	printf("请输入要查找的数：\n");
	scanf("%d", &a);
	while (i >= 0 && j >= 0)
	{
		if (a > arr[i][j])
		{
			i++;
		}
		else if (a < arr[i][j])
		{
			j--;
		}
		else
		{
			printf("存在%d，在%d行%d列", a, i + 1, j + 1);
			return 0;;
		}
	}
	printf("不存在%d", a);
	return 0;
}