//#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1//AA BCDAA BCD
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//#include<stdio.h>
//#include<string.h>
//int is_reserve(const char* s1, const char* s2)//�Ƿ���1�����Ƿ���0
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




//��ϰʹ�ÿ⺯����qsort����������͵�����
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



//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������





