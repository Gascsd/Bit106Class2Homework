#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�������������ð������
//#include<stdio.h>
//void bubble_sort(int* arr,int sz)
//{
//	int tmp = 0;
//	int i = 0;
//	int count = 0;
//	while (count < sz)
//	{
//		for (i = 0; i < sz - count - 1; i++)
//		{
//			if (*(arr+i) > *(arr+i + 1))
//			{
//				tmp = *(arr + i);
//				*(arr + i) = *(arr + i + 1);
//				*(arr + i + 1) = tmp;
//			}
//		}
//		count++;
//	}
//}
//int main()
//{
//	int i = 0;
//	int ch[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	bubble_sort(ch,sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ch[i]);
//	}
//	return 0;
//}


//1. �����������Ϸ����
//2. �������������ƺʹ������һƪ���͡�