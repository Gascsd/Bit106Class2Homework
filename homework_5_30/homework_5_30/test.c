#define _CRT_SECURE_NO_WARNINGS 1


//�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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


//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
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
	printf("������Ҫ���ҵ�����\n");
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
			printf("����%d����%d��%d��", a, i + 1, j + 1);
			return 0;;
		}
	}
	printf("������%d", a);
	return 0;
}