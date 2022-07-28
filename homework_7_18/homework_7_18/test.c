#define _CRT_SECURE_NO_WARNINGS 1


//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现
//#include<stdio.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#define OFFSETOF(type,m_name) (int)&(((type*)0)->m_name)
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}


//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。

#include<stdio.h>

#define SWAP_BIT(N) n = (((n&0x55555555) << 1) + ((n&0xaaaaaaaa) >> 1))
int main()
{
	int n = -2;
	printf("%d", SWAP_BIT(n));
	return 0;
}
