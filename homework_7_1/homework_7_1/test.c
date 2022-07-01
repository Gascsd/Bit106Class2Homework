#define _CRT_SECURE_NO_WARNINGS 1

//BC107 - 矩阵转置
//#include<stdio.h>
//int main()
//{
//    int row = 0;
//    int col = 0;
//    int i = 0;
//    int j = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d%d", &row, &col);
//    getchar();
//    //初始化
//    for (i = 0; i < row; i++)
//    {
//        for (j = 0; j < col; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            //getchar();
//        }
//        //getchar();
//    }
//    int tmp = 0;
    //转置
    //1 2 3 0 0 0 0 0 0 0
    //4 5 6 0 0 0 0 0 0 0
    //0 0 0 0 0 0 0 0 0 0
    //0 0 0 0 0 0 0 0 0 0
    //0 0 0 0 0 0 0 0 0 0
    //0 0 0 0 0 0 0 0 0 0
    //0 0 0 0 0 0 0 0 0 0
    //0 0 0 0 0 0 0 0 0 0
    //0 0 0 0 0 0 0 0 0 0
    //0 0 0 0 0 0 0 0 0 0
//    for (i = 0; i < row; i++)
//    {
//        for (j = i; j <= col; j++)
//        {
//            tmp = arr[i][j];
//            arr[i][j] = arr[j][i];
//            arr[j][i] = tmp;
//        }
//    }
//    //打印
//    for (i = 0; i < col; i++)
//    {
//        for (j = 0; j < row; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//BC106-上三角矩阵判定
//#include<stdio.h>
//int main()
//{
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                printf("NO\n");
//                return 0;
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}


//BC96-有序序列判断
#include<stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int flag = 0;
    int arr[50] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            if (i + 2 == n)
            {
                flag = 1;
            }
        }
        else
        {
            break;
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            if (i + 2 == n)
            {
                flag = 2;
            }
        }
        else
        {
            break;
        }
    }
    if (flag == 0)
    {
        printf("unsorted\n");
    }
    else
    {
        printf("sorted\n");
    }
}