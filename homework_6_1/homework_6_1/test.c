//#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1//AA BCDAA BCD
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//#include<stdio.h>
//#include<string.h>
//int is_reserve(const char* s1, const char* s2)//是返回1，不是返回0
//{
//	int flag = 0;
//	char* p1, * p2;
//	char s3[20] = { 0 };
//	strcpy(s3, s1);
//	char* tmp = s3;
//	while (*tmp != '\0')
//	{
//		tmp++;
//	}
//	strcpy(tmp, s1);
//	p1 = (char*)s3;
//	p2 = s2;
//	do
//	{
//		if (*p1 == *p2)
//		{
//			p2++;
//		}
//		p1++;
//	} while (*p1 != '\0' && *p2 != '\0');
//	if (*p2 == '\0')
//		flag = 1;
//	return flag;
//}
//int main()
//{
//	char s1[] = "ABCD";
//	char s2[] = "abcd";
//	int length = strlen(s1);
//	int ret = is_reserve(s1, s2);
//	if (ret)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}




//练习使用库函数，qsort排序各种类型的数据
#include<stdio.h>
#include<stdlib.h>
struct stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{

}
int cmp_stu_by_name(const void* e1, const void* e2)
{

}
int cmp_stu_by_age(const void* e1, const void* e2)
{

}
int main()
{
	int i = 0;
	int arr1[5] = { 1,2,3,4,0 };
	float arr2[5] = { 0.5,1.0,5,8.5,5.5 };
	struct stu s[3] = { {"zhangsan",18},{"lisi",22},{"wangwu",20} };
	qsort(arr1, 5, sizeof(int), cmp_int);
	qsort(arr2, 5, sizeof(float), cmp_float);
	qsort(s, 5, sizeof(struct stu), cmp_stu_by_name);
	qsort(s, 5, sizeof(struct stu), cmp_stu_by_age);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}



//模仿qsort的功能实现一个通用的冒泡排序





