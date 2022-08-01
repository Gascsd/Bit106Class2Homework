#define _CRT_SECURE_NO_WARNINGS 1

//https://leetcode.cn/problems/rotate-array/
//void reserve(int* nums, int begin, int end) {
//    while (begin < end)
//    {
//        int tmp = nums[begin];
//        nums[begin] = nums[end];
//        nums[end] = tmp;
//        begin++;
//        end--;
//    }
//}
//
//void rotate(int* nums, int numsSize, int k) {
//    if (k > numsSize)
//        k %= numsSize;
//    reserve(nums, 0, numsSize - k - 1);
//    reserve(nums, numsSize - k, numsSize - 1);
//    reserve(nums, 0, numsSize - 1);
//}


//https://leetcode.cn/problems/missing-number-lcci/
//int missingNumber(int* nums, int numsSize) {
//    int i = 0;
//    int sum1 = 0, sum2 = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        sum1 += i;
//        sum2 += nums[i];
//    }
//    return sum1 - sum2 + numsSize;
//}