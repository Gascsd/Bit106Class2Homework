#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���������Ľϴ�ֵ
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d",&a);
//	scanf("%d", &b);
//	int ret = Max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//BC84 - ����Y��ֵ
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x > 0)
    {
        printf("-1");
    }
    else if (x < 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}