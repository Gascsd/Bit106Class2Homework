#define _CRT_SECURE_NO_WARNINGS 1
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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



//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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
//	init(arr);//��ʼ������Ϊȫ0
//	print(arr);//��ӡ�����ÿ��Ԫ��
//	reverse(arr);//����Ԫ�ص�����
//	print(arr);//��ӡ�����ÿ��Ԫ��
//	return 0;
//}