#define _CRT_SECURE_NO_WARNINGS 1

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
//	strcat(s3, s1);
//	if (strstr(s3, s2))
//		flag = 1;
//	return flag;
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
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
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	if ((*(float*)e1) < (*(float*)e2)
//		&& fabs((*(float*)e1) - (*(float*)e2)) > 1e-6)
//		return -1;
//	else if ((*(float*)e1) > (*(float*)e2)
//		&& fabs((*(float*)e1) - (*(float*)e2)) > 1e-6)
//		return 1;
//	else if (fabs((*(float*)e1) - (*(float*)e2)) < 1e-6)
//		return 0;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int main()
//{
//	int i = 0;
//	int arr1[5] = { 1,2,4,3,0 };
//	float arr2[5] = { 1.5,5.5,20,5.25,8.5 };
//	struct stu s[3] = { {"zhangsan",18},{"lisi",22},{"wangwu",20} };
//
//	qsort(arr1, 5, sizeof(int), cmp_int);
//	printf("�������ݣ�");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	qsort(arr2, 5, sizeof(float), cmp_float);
//	printf("�������������ݣ�");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%.2f ", arr2[i]);
//	}
//	printf("\n");
//
//	qsort(s, 3, sizeof(struct stu), cmp_stu_by_name);
//	printf("�ṹ�尴���֣�\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//
//	qsort(s, 3, sizeof(struct stu), cmp_stu_by_age);
//	printf("�ṹ�尴���䣺\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//
//	return 0;
//}







//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
#include<stdio.h>
void Swap(char* e1,char* e2, int width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *(char*)e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	if ((*(float*)e1) < (*(float*)e2)
		&& fabs((*(float*)e1) - (*(float*)e2)) > 1e-6)
		return -1;
	else if ((*(float*)e1) > (*(float*)e2)
		&& fabs((*(float*)e1) - (*(float*)e2)) > 1e-6)
		return 1;
	else if (fabs((*(float*)e1) - (*(float*)e2)) < 1e-6)
		return 0;
}

void bubble_sort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - i -1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
int main()
{
	int i = 0;
	int arr1[5] = { 1,2,4,3,0 };
	float arr2[5] = { 1.5,5.5,20,5.25,8.5 };

	bubble_sort(arr1, 5, sizeof(int), cmp_int);
	printf("�������ݣ�");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	bubble_sort(arr2, 5, sizeof(float), cmp_float);
	printf("�������������ݣ�");
	for (i = 0; i < 5; i++)
	{
		printf("%.2f ", arr2[i]);
	}
	printf("\n");

	return 0;
}




