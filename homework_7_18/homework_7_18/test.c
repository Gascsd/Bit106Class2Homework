#define _CRT_SECURE_NO_WARNINGS 1


//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//���죺offsetof���ʵ��
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


//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������

#include<stdio.h>

#define SWAP_BIT(N) n = (((n&0x55555555) << 1) + ((n&0xaaaaaaaa) >> 1))
int main()
{
	int n = -2;
	printf("%d", SWAP_BIT(n));
	return 0;
}
