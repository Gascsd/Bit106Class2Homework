#define _CRT_SECURE_NO_WARNINGS 1


//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
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


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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
//	get_odd(n);	//����λ
//	get_even(n);
//	return 0;
//}


//дһ���������ز����������� 1 �ĸ�����
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




//����������ʱ������������������������
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