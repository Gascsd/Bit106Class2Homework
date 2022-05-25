#define _CRT_SECURE_NO_WARNINGS 1

//BC100-有序序列合并
//#include<stdio.h>
//void sort(int* arr, int len)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < len - 1; i++)
//    {
//        for (j = i; j < len; j++)
//        {
//            if (arr[i] > arr[j])
//            {
//                int tmp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int arr[2000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = n; i < n + m; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //排序
//    sort(arr, m + n);
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//BC116-小乐乐改数字
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    long long int a = 0;
//    scanf("%d", &a);
//    int i = a;
//    int n = 0;
//    n = i % 10;
//    n %= 2;
//    int sum = n;
//    int j = 1;
//    while (i /= 10)
//    {
//        n = i % 10;
//        n %= 2;
//        sum += (int)n * pow(10, j);
//        j++;
//    }
//    printf("%d", sum);
//    return 0;
//}




//BC60-带空格直角三角形图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 1; j < n - i; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC37-网购
//#include<stdio.h>
//int main()
//{
//    double val = 0;
//    int day = 0;
//    int month = 0;
//    int iscount = 0;
//    double price = 0;
//    scanf("%lf%d%d%d", &val, &month, &day, &iscount);
//    if (month == 11)
//    {
//        if (iscount == 1)
//        {
//            price = val * 0.7 - 50;
//        }
//        else
//        {
//            price = val * 0.7;
//        }
//    }
//    else
//    {
//        if (iscount == 1)
//        {
//            price = val * 0.8 - 50;
//        }
//        else
//        {
//            price = val * 0.8;
//        }
//    }
//    if (price >= 0)
//        printf("%.2lf", price);
//    else
//        printf("%.2lf", 0.00);
//    return 0;
//}