#define _CRT_SECURE_NO_WARNINGS 1

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
//#include<stdio.h>
//void print(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", * (arr + i));
//	}
//
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	print(arr);
//	return 0;
//}



//дһ����������������һ���ַ��������ݡ�
//#include<stdio.h>
//void reverse(char* arr)
//{
//	int length = 0;
//	char* left = arr;
//	char* right = 0;
//	char tmp = 0;
//	while (*arr != '\0')
//	{
//		length++;
//		arr++;
//	}
//	right = left + length - 1;
//	while (left < right)
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
//	char arr[10000] = { 0 };
//	gets(arr);
//	reverse(arr);
//	puts(arr);
//	return 0;
//}




//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222 = 24690
//#include<stdio.h>
//#include<math.h>
//int SUM(int n)
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int num = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		num = 0;
//		for (j = 0; j < i; j++)
//		{
//			num += 2 * pow(10, j);
//		}
//		sum += num;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 2;
//	int sum = SUM(n);
//	printf("%d\n", sum);
//	return 0;
//}




//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<stdio.h>
//#include<math.h>
//int Count(int n)
//{
//	int count = 0;
//	while (n / 10)
//	{
//		n /= 10;
//		count++;
//	}
//	count++;
//	return count;
//}
//int is_the_num(int a)
//{
//	int n = a;
//	int num = 0;
//	int sum = 0;
//	int count = Count(n);//�ж�λ��
//	do
//	{
//		num = n % 10;
//		num = (int)pow(num, count);
//		sum += num;
//		n /= 10;
//	} while (n / 10);
//	num = n % 10;
//	num = (int)pow(num, count);
//	sum += num;
//	if (sum == a)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж��Ƿ�Ϊˮ�ɻ���
//		flag = is_the_num(i);//�Ƿ���1�����Ƿ���0
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}




//��C��������Ļ���������ͼ����
//1      *
//2     ***
//3    *****
//4   *******
//5  *********
//6 ***********
//7*************  2*n-1
// 
//1 ***********  12-1
//2  *********   12-3
//3   *******
//4    *****
//5     ***
//6      *
//#include<stdio.h>
//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 0; j < 7 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j < 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < 7; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 13 - 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}