#define _CRT_SECURE_NO_WARNINGS 1

//BC115-С������ŷ����ã����Լ����
//#include<stdio.h>
//int main()
//{
//    long long m = 0;
//    long long n = 0;
//    scanf("%d%d", &m, &n);
//    long long a = m > n ? m : n;
//    long long b = m < n ? m : n;
//    long long c = a % b;
//    while (c != 0)
//    {
//        a = b;
//        b = c;
//        c = a % b;
//    }
//    long long ret1 = b;
//    long long ret2 = m * n / b;
//    printf("%lld\n", ret1 + ret2);
//    return 0;
//}

//BC69-����������ͼ��
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int j = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//
//        for (i = 0; i < n; i++)//����
//        {
//            if (i == 0 || i == n - 1)//��ӡ��һ�к����һ��
//            {
//                for (j = 0; j < n; j++)
//                {
//                    printf("* ");
//                }
//            }
//            else //��ӡ�м䲿��
//            {
//                for (j = 0; j < n; j++)
//                {
//                    if (j == 0 || j == n - 1)
//                        printf("* ");
//                    else
//                        printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC65-����ͼ��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i, j, k;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i <= n; i++)//�ϰ벿��
//        {
//            for (j = 0; j <= 2*(n-i); j++)
//            {
//                if (j < 2 * (n - i))
//                    printf(" ");
//                else
//                {
//                    for (k = 0; k <= i; k++)
//                    {
//                        printf("*");
//                    }
//                    printf("\n");
//                }
//            }
//        }
//        //�°벿��
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < 2 * (i + 1); j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC76-����Ա����
#include<stdio.h>
#include<stdlib.h>
int cmp(void* e1, void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int main()
{
    int sum = 0;
    int arr[7] = { 0 };
    int i = 0;
    int val = 0;
    while (scanf("%d", &val) != EOF)
    {
        arr[0] = val;
        for (i = 1; i < 7; i++)
        {
            scanf("%d", &arr[i]);
        }
        qsort(arr, 7, 4, cmp);
        for (i = 1; i < 6; i++)
        {
            sum += arr[i];
        }
        float ret = sum / 5.0;
        printf("%.2f", ret);
    }
    return 0;
}