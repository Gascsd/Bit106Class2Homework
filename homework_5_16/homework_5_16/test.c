#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现库函数strlen
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}




//模拟实现库函数strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* destination, const char* source)
//{
//	char* dest = destination;
//	assert(destination);
//	assert(source);
//	while (*destination++ = *source++);
//	return dest;
//}
//int main()
//{
//	char arr1[] = "********************";
//	char arr2[] = "hello bit!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}





//调整数组使奇数全部都位于偶数前面。
//题目：输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//#include<stdio.h>
//#include<assert.h>
//void sort(int* arr,int sz)
//{
//	int tmp = 0;
//	int* arr1 = arr;
//	assert(arr);
//	int i = 0;
//	int* odd = arr;
//	int* even = arr + 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (*odd % 2 == 1)
//		{
//			odd++;
//			even++;
//		}
//		else
//		{
//			if (*even % 2 == 1)
//			{
//				tmp = *even;
//				*even = *odd;
//				*odd = tmp;
//				odd++;
//				even++;
//			}
//			else
//			{
//				even++;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}