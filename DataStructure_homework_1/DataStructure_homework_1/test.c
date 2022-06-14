#define use _CRT_SECURE_NO_WARNINGS 1

//leetcode 面试题 17.04. 消失的数字
//#include<stdio.h>
//int missingNumber(int* nums, int numsSize) 
//{
//    int i = 0;
//    int miss = 0;
//    int sum = 0;
//    sum = (numsSize + 1) * numsSize / 2;
//    for (i = 0; i < numsSize; i++)
//    {
//        miss += nums[i];
//    }
//    miss = sum - miss;
//    return miss;
//}
//int main()
//{
//	int nums[] = { 3,0,1 };
//	int numsSize = 3;
//    int miss = missingNumber(nums, numsSize);
//    printf("%d", miss);
//	return 0;
//}


//leetcode189.轮转数组
#include<stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b, * b = t;
}

void reverse(int* nums, int start, int end) {
    while (start < end) {
        swap(&nums[start], &nums[end]);
        start += 1;
        end -= 1;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);
}
int main()
{
    int nums[] = { 1,2,3,4,5,6,7 };
    int numsSize = 7;
    int k = 3;
    rotate(nums, numsSize, k);
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d", nums[i]);
    }
    return 0;
}