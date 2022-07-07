#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>


//模拟实现strcmp
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}


//模拟实现strstr
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* tmp = str1;
	while (*tmp)
	{
		s1 = tmp;
		s2 = str2;
		while (*s1 == *s2 && *s2)
		{
			s1++;
			s2++;
		}
		if (!*s2)
			return tmp;
		tmp++;
	}
	return NULL;
}


//模拟实现memcpy
void* my_memcpy(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* ret = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}



//模拟实现memmove
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* ret = dest;
	if (dest <= src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}



void test_my_strcmp()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	printf("test for my_strcmp:");
	int ret = my_strcmp(arr1, arr2);
	if (ret == 0)
		printf("==\n");
	else if (ret > 0)
		printf(">\n");
	else
		printf("<\n");
}

void test_my_strstr()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bc";
	printf("test for my_strstr:");
	printf("%s\n",my_strstr(arr1, arr2));
}


void test_my_memcpy()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[30] = { 0 };
	printf("test for my_memcpy:");
	my_memcpy(arr2, arr1, 28);
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}

void test_my_memmove()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	printf("test for my_memmove:");
	my_memmove(arr1 + 2, arr1, 16);
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

int main()
{
	test_my_strcmp();
	test_my_strstr();
	test_my_memcpy();
	test_my_memmove();
	return 0;
}