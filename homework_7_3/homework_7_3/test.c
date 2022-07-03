#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//ģ��ʵ��strlen
size_t my_strlen(const char* str)
{
	assert(str);
	size_t count = 0;
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}
//ģ��ʵ��strcpy
char* my_strcpy(char* dest, const char* src)
{
	char* tmp = dest;
	assert(dest && src);
	while (*dest++ = *src++);
	return tmp;
}

//ģ��ʵ��strcat
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* tmp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++);
	return tmp;
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[20] = { 0 };
	char arr3[20] = "ghijk";
	size_t ret = my_strlen(arr1);
	printf("%zd\n", ret);
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	my_strcat(arr1, arr3);
	printf("%s\n", arr1);
}
